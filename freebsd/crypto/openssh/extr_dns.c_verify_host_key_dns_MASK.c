
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct sshkey {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rrsetinfo {int rri_flags; scalar_t__ rri_nrdatas; TYPE_1__* rri_rdatas; } ;
struct TYPE_2__ {int rdi_length; int rdi_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int **,size_t*,struct sshkey*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int **,size_t*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rrsetinfo*) ;
 int FUNC_9 (char const*,int ,int ,int ,struct rrsetinfo**) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int *,int *,size_t) ;
 int FUNC_12 (char*,...) ;

int
FUNC_13(const char *VAR_7, struct sockaddr *VAR_8,
    struct sshkey *VAR_9, int *VAR_10)
{
 u_int VAR_11;
 int VAR_12;
 struct rrsetinfo *VAR_13 = ((void*)0);

 u_int8_t VAR_14;
 u_int8_t VAR_15 = VAR_6;
 u_char *VAR_16;
 size_t VAR_17;

 u_int8_t VAR_18;
 u_int8_t VAR_19;
 u_char *VAR_20;
 size_t VAR_21;

 *VAR_10 = 0;

 FUNC_1("verify_host_key_dns");
 if (VAR_9 == ((void*)0))
  FUNC_6("No key to look up!");

 if (FUNC_10(VAR_7)) {
  FUNC_0("skipped DNS lookup for numerical hostname");
  return -1;
 }

 VAR_12 = FUNC_9(VAR_7, VAR_0,
     VAR_1, 0, &VAR_13);
 if (VAR_12) {
  FUNC_12("DNS lookup error: %s", FUNC_4(VAR_12));
  return -1;
 }

 if (VAR_13->rri_flags & VAR_5) {
  *VAR_10 |= VAR_4;
  FUNC_0("found %d secure fingerprints in DNS",
      VAR_13->rri_nrdatas);
 } else {
  FUNC_0("found %d insecure fingerprints in DNS",
      VAR_13->rri_nrdatas);
 }


 if (!FUNC_2(&VAR_14, &VAR_15,
     &VAR_16, &VAR_17, VAR_9)) {
  FUNC_5("Error calculating host key fingerprint.");
  FUNC_8(VAR_13);
  return -1;
 }

 if (VAR_13->rri_nrdatas)
  *VAR_10 |= VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_13->rri_nrdatas; VAR_11++) {




  if (!FUNC_3(&VAR_18, &VAR_19,
      &VAR_20, &VAR_21,
      VAR_13->rri_rdatas[VAR_11].rdi_data,
      VAR_13->rri_rdatas[VAR_11].rdi_length)) {
   FUNC_12("Error parsing fingerprint from DNS.");
   continue;
  }

  if (VAR_15 != VAR_19) {
   VAR_15 = VAR_19;
   FUNC_7(VAR_16);


   if (!FUNC_2(&VAR_14,
       &VAR_15, &VAR_16,
       &VAR_17, VAR_9)) {
    FUNC_5("Error calculating key fingerprint.");
    FUNC_8(VAR_13);
    return -1;
   }
  }


  if (VAR_14 == VAR_18 &&
      VAR_15 == VAR_19) {
   if (VAR_17 == VAR_21 &&
       FUNC_11(VAR_16, VAR_20,
       VAR_17) == 0)
    *VAR_10 |= VAR_3;
  }
  FUNC_7(VAR_20);
 }

 FUNC_7(VAR_16);
 FUNC_8(VAR_13);

 if (*VAR_10 & VAR_2)
  if (*VAR_10 & VAR_3)
   FUNC_0("matching host key fingerprint found in DNS");
  else
   FUNC_0("mismatching host key fingerprint found in DNS");
 else
  FUNC_0("no host key fingerprint found in DNS");

 return 0;
}
