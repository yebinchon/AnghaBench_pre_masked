
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr_in {int sin_addr; } ;
struct TYPE_6__ {int in4; } ;
struct TYPE_5__ {int in4; } ;
struct TYPE_4__ {int in4; } ;
struct diocskerneldump_arg {int kda_index; int kda_encryption; int kda_encryptedkeysize; struct diocskerneldump_arg* kda_encryptedkey; void* kda_af; TYPE_3__ kda_gateway; TYPE_2__ kda_client; TYPE_1__ kda_server; int kda_iface; int kda_compression; } ;
struct addrinfo {scalar_t__ ai_addr; int ai_protocol; void* ai_family; } ;
typedef int hints ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct diocskerneldump_arg*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int ,int,char*) ;
 int VAR_20 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct diocskerneldump_arg*,int) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (struct diocskerneldump_arg*) ;
 int FUNC_10 (struct addrinfo*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char const*,struct diocskerneldump_arg*) ;
 int FUNC_13 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_14 (int,char**,char*) ;
 scalar_t__ FUNC_15 (char const*,int *) ;
 char* FUNC_16 (int ) ;
 int FUNC_17 (int,int ,struct diocskerneldump_arg*) ;
 int FUNC_18 () ;
 int FUNC_19 (struct addrinfo*,int ,int) ;
 int FUNC_20 (char const*,char*) ;
 char* VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_21 (char*,char const*) ;
 int FUNC_22 (char*,char*) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (int ,char*,int) ;
 int FUNC_25 () ;
 int VAR_23 ;

int
FUNC_26(int VAR_24, char *VAR_25[])
{
 char VAR_26[VAR_17];
 struct diocskerneldump_arg VAR_27, *VAR_28;
 struct addrinfo VAR_29, *VAR_30;
 const char *VAR_31, *VAR_32, *VAR_33, *VAR_34, *VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39;
 bool VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
 uint8_t VAR_46;

 VAR_40 = VAR_41 = VAR_42 = VAR_43 = VAR_44 = VAR_45 = 0;
 VAR_28 = ((void*)0);
 VAR_32 = ((void*)0);
 VAR_33 = VAR_34 = VAR_35 = ((void*)0);
 VAR_46 = VAR_9;
 VAR_39 = VAR_16;

 while ((VAR_36 = FUNC_14(VAR_24, VAR_25, "C:c:g:i:k:lrs:vZz")) != -1)
  switch ((char)VAR_36) {
  case 'C':
   if (FUNC_22(VAR_21, "chacha") == 0 ||
       FUNC_22(VAR_21, "chacha20") == 0)
    VAR_39 = VAR_15;
   else if (FUNC_22(VAR_21, "aes-cbc") == 0 ||
       FUNC_22(VAR_21, "aes256-cbc") == 0)
    VAR_39 = VAR_14;
   else
    FUNC_5(VAR_7, "Unrecognized cipher algorithm "
        "'%s'", VAR_21);
   break;
  case 'c':
   VAR_34 = VAR_21;
   break;
  case 'g':
   VAR_35 = VAR_21;
   break;
  case 'i':
   {
   int VAR_47;

   VAR_47 = FUNC_0(VAR_21);
   if (VAR_47 < 0 || VAR_47 >= VAR_9 - 1)
    FUNC_5(VAR_7,
        "-i index must be between zero and %d.",
        (int)VAR_9 - 2);
   VAR_44 = 1;
   VAR_46 = VAR_47;
   }
   break;
  case 'k':
   VAR_32 = VAR_21;
   break;
  case 'l':
   VAR_41 = 1;
   break;
  case 'r':
   VAR_45 = 1;
   break;
  case 's':
   VAR_33 = VAR_21;
   break;
  case 'v':
   VAR_23 = 1;
   break;
  case 'Z':
   VAR_43 = 1;
   break;
  case 'z':
   VAR_40 = 1;
   break;
  default:
   FUNC_25();
  }

 if (VAR_40 && VAR_43)
  FUNC_5(VAR_7, "The -z and -Z options are mutually exclusive.");

 if (VAR_44 && VAR_45)
  FUNC_5(VAR_7, "The -i and -r options are mutually exclusive.");

 VAR_24 -= VAR_22;
 VAR_25 += VAR_22;

 if (VAR_41) {
  FUNC_18();
  FUNC_6(VAR_4);
 }

 if (VAR_24 != 1)
  FUNC_25();





 if (VAR_32 != ((void*)0))
  FUNC_5(VAR_6,"Unable to use the public key."
        " Recompile dumpon with OpenSSL support.");


 if (VAR_33 != ((void*)0) && VAR_34 != ((void*)0)) {
  VAR_31 = VAR_19;
  VAR_42 = 1;
 } else if (VAR_33 == ((void*)0) && VAR_34 == ((void*)0) && VAR_24 > 0) {
  if (FUNC_23(VAR_25[0], "off") == 0) {
   VAR_45 = 1;
   VAR_31 = VAR_18;
  } else
   VAR_31 = VAR_25[0];
  VAR_42 = 0;
 } else
  FUNC_25();

 VAR_38 = FUNC_20(VAR_31, VAR_26);
 if (!VAR_42 && !VAR_40 && !VAR_45)
  FUNC_2(VAR_38, VAR_26);

 VAR_28 = &VAR_27;
 FUNC_1(VAR_28, sizeof(*VAR_28));

 if (VAR_45)
  VAR_28->kda_index = VAR_10;
 else
  VAR_28->kda_index = VAR_46;

 VAR_28->kda_compression = VAR_12;
 if (VAR_43)
  VAR_28->kda_compression = VAR_13;
 else if (VAR_40)
  VAR_28->kda_compression = VAR_11;

 if (VAR_42) {
  FUNC_19(&VAR_29, 0, sizeof(VAR_29));
  VAR_29.ai_family = VAR_0;
  VAR_29.ai_protocol = VAR_8;
  VAR_30 = ((void*)0);
  VAR_37 = FUNC_13(VAR_33, ((void*)0), &VAR_29, &VAR_30);
  if (VAR_37 != 0)
   FUNC_3(1, "%s", FUNC_11(VAR_37));
  if (VAR_30 == ((void*)0))
   FUNC_5(1, "failed to resolve '%s'", VAR_33);
  VAR_33 = FUNC_16(
      ((struct sockaddr_in *)(void *)VAR_30->ai_addr)->sin_addr);
  FUNC_10(VAR_30);

  if (FUNC_24(VAR_27.kda_iface, VAR_25[0],
      sizeof(VAR_27.kda_iface)) >= sizeof(VAR_27.kda_iface))
   FUNC_5(VAR_7, "invalid interface name '%s'", VAR_25[0]);
  if (FUNC_15(VAR_33, &VAR_27.kda_server.in4) == 0)
   FUNC_5(VAR_7, "invalid server address '%s'", VAR_33);
  if (FUNC_15(VAR_34, &VAR_27.kda_client.in4) == 0)
   FUNC_5(VAR_7, "invalid client address '%s'", VAR_34);

  if (VAR_35 == ((void*)0)) {
   VAR_35 = FUNC_8(VAR_25[0]);
   if (VAR_35 == ((void*)0)) {
    if (VAR_23)
     FUNC_21(
        "failed to look up gateway for %s\n",
         VAR_33);
    VAR_35 = VAR_33;
   }
  }
  if (FUNC_15(VAR_35, &VAR_27.kda_gateway.in4) == 0)
   FUNC_5(VAR_7, "invalid gateway address '%s'", VAR_35);
  VAR_27.kda_af = VAR_0;
 }







 VAR_37 = FUNC_17(VAR_38, VAR_1, VAR_28);
 if (VAR_37 != 0)
  VAR_37 = VAR_20;
 FUNC_7(VAR_28->kda_encryptedkey, VAR_28->kda_encryptedkeysize);
 FUNC_9(VAR_28->kda_encryptedkey);
 FUNC_7(VAR_28, sizeof(*VAR_28));
 if (VAR_37 != 0) {
  if (VAR_42) {





   if (VAR_37 == VAR_3)
    FUNC_5(VAR_5, "Unable to configure netdump "
        "because the interface's link is down.");
   else if (VAR_37 == VAR_2)
    FUNC_5(VAR_5, "Unable to configure netdump "
        "because the interface driver does not yet "
        "support netdump.");
  }
  FUNC_4(VAR_5, VAR_37, "ioctl(DIOCSKERNELDUMP)");
 }

 if (VAR_23)
  FUNC_18();

 FUNC_6(VAR_4);
}
