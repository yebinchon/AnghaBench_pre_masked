
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diocskerneldump_arg {int kda_gateway; int kda_af; int kda_client; int kda_server; } ;
typedef int ip ;
typedef int dumpdev ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_9 ;
 char* FUNC_2 (int ,int *,char*,int) ;
 scalar_t__ FUNC_3 (int,int ,struct diocskerneldump_arg*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char**,char*) ;
 scalar_t__ FUNC_9 (char const*,char**,size_t*,int *,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_10(void)
{
 static char VAR_11[200];

 char VAR_12[VAR_6];
 struct diocskerneldump_arg VAR_13;
 size_t VAR_14;
 const char *VAR_15 = "kern.shutdown.dumpdevname";
 int VAR_16;

 VAR_14 = sizeof(VAR_12);
 if (FUNC_9(VAR_15, &VAR_12, &VAR_14, ((void*)0), 0) != 0) {
  if (VAR_9 == VAR_2) {
   FUNC_1(VAR_4, "Kernel returned too large of a buffer for '%s'\n",
    VAR_15);
  } else {
   FUNC_1(VAR_4, "Sysctl get '%s'\n", VAR_15);
  }
 }
 if (FUNC_7(VAR_12) == 0)
  (void)FUNC_6(VAR_12, VAR_7, sizeof(VAR_12));

 if (VAR_10) {
  char *VAR_17, *VAR_18;
  unsigned VAR_19;

  FUNC_5("kernel dumps on priority: device\n");
  VAR_19 = 0;
  VAR_17 = VAR_12;
  while ((VAR_18 = FUNC_8(&VAR_17, ",")) != ((void*)0))
   FUNC_5("%u: %s\n", VAR_19++, VAR_18);
 } else
  FUNC_5("%s\n", VAR_12);


 if (VAR_10) {
  VAR_16 = FUNC_4(VAR_8, VAR_5);
  if (VAR_16 < 0) {
   if (VAR_9 != VAR_1)
    FUNC_1(VAR_4, "opening %s", VAR_8);
   return;
  }
  if (FUNC_3(VAR_16, VAR_0, &VAR_13) != 0) {
   if (VAR_9 != VAR_3)
    FUNC_1(VAR_4, "ioctl(DIOCGKERNELDUMP)");
   (void)FUNC_0(VAR_16);
   return;
  }

  FUNC_5("server address: %s\n",
      FUNC_2(VAR_13.kda_af, &VAR_13.kda_server, VAR_11,
   sizeof(VAR_11)));
  FUNC_5("client address: %s\n",
      FUNC_2(VAR_13.kda_af, &VAR_13.kda_client, VAR_11,
   sizeof(VAR_11)));
  FUNC_5("gateway address: %s\n",
      FUNC_2(VAR_13.kda_af, &VAR_13.kda_gateway, VAR_11,
   sizeof(VAR_11)));
  (void)FUNC_0(VAR_16);
 }
}
