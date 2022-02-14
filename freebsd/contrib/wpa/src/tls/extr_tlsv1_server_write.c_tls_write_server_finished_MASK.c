
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ tls_version; } ;
struct TYPE_4__ {int * sha1_server; int * md5_server; int * sha256_server; } ;
struct tlsv1_server {int test_flags; TYPE_1__ rl; TYPE_2__ verify; int master_secret; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int *,int*,size_t*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,char*,int*,size_t,int*,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int*,int,int*,int,size_t*) ;
 int FUNC_5 (struct tlsv1_server*,int ,int ) ;
 int FUNC_6 (struct tlsv1_server*,char*) ;
 int FUNC_7 (int ,char*,int*,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct tlsv1_server *VAR_12,
         u8 **VAR_13, u8 *VAR_14)
{
 u8 *VAR_15, *VAR_16;
 size_t VAR_17, VAR_18;
 u8 VAR_19[1 + 3 + VAR_10];
 u8 VAR_20[VAR_0 + VAR_2];

 VAR_15 = *VAR_13;

 FUNC_6(VAR_12, "Send Finished");
 VAR_18 = VAR_0;
 if (VAR_12->verify.md5_server == ((void*)0) ||
     FUNC_1(VAR_12->verify.md5_server, VAR_20, &VAR_18) < 0) {
  FUNC_5(VAR_12, VAR_5,
       VAR_4);
  VAR_12->verify.md5_server = ((void*)0);
  FUNC_1(VAR_12->verify.sha1_server, ((void*)0), ((void*)0));
  VAR_12->verify.sha1_server = ((void*)0);
  return -1;
 }
 VAR_12->verify.md5_server = ((void*)0);
 VAR_18 = VAR_2;
 if (VAR_12->verify.sha1_server == ((void*)0) ||
     FUNC_1(VAR_12->verify.sha1_server, VAR_20 + VAR_0,
          &VAR_18) < 0) {
  VAR_12->verify.sha1_server = ((void*)0);
  FUNC_5(VAR_12, VAR_5,
       VAR_4);
  return -1;
 }
 VAR_12->verify.sha1_server = ((void*)0);
 VAR_18 = VAR_0 + VAR_2;





 if (FUNC_2(VAR_12->rl.tls_version,
      VAR_12->master_secret, VAR_9,
      "server finished", VAR_20, VAR_18,
      VAR_19 + 1 + 3, VAR_10)) {
  FUNC_8(VAR_1, "TLSv1: Failed to generate verify_data");
  FUNC_5(VAR_12, VAR_5,
       VAR_4);
  return -1;
 }
 FUNC_7(VAR_1, "TLSv1: verify_data (server)",
   VAR_19 + 1 + 3, VAR_10);
 VAR_15 = VAR_16 = VAR_19;

 *VAR_15++ = VAR_8;

 FUNC_0(VAR_15, VAR_10);
 VAR_15 += 3;
 VAR_15 += VAR_10;
 FUNC_3(&VAR_12->verify, VAR_16, VAR_15 - VAR_16);

 if (FUNC_4(&VAR_12->rl, VAR_7,
         *VAR_13, VAR_14 - *VAR_13, VAR_16, VAR_15 - VAR_16,
         &VAR_17) < 0) {
  FUNC_8(VAR_1, "TLSv1: Failed to create a record");
  FUNC_5(VAR_12, VAR_5,
       VAR_4);
  return -1;
 }

 *VAR_13 += VAR_17;

 return 0;
}
