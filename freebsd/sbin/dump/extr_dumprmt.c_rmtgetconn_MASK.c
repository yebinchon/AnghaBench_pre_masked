
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int throughput ;
struct servent {scalar_t__ s_port; } ;
struct passwd {char* pw_name; } ;
typedef int size ;
typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (char*) ;
 struct passwd* FUNC_3 (int ) ;
 struct servent* FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int VAR_12 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char**,int ,char*,char*,char const*,int *) ;
 scalar_t__ VAR_13 ;
 char* VAR_14 ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int ,int*,int) ;
 int VAR_15 ;
 char* FUNC_11 (char*,char) ;

void
FUNC_12(void)
{
 char *VAR_16;
 const char *VAR_17;
 static struct servent *VAR_18 = ((void*)0);
 static struct passwd *VAR_19 = ((void*)0);
 char *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;

 if (VAR_18 == ((void*)0)) {
  VAR_18 = FUNC_4("shell", "tcp");
  if (VAR_18 == ((void*)0)) {
   FUNC_6("shell/tcp: unknown service\n");
   FUNC_0(VAR_9);
  }
  VAR_19 = FUNC_3(FUNC_5());
  if (VAR_19 == ((void*)0)) {
   FUNC_6("who are you?\n");
   FUNC_0(VAR_9);
  }
 }
 if ((VAR_16 = FUNC_11(VAR_14, '@')) != ((void*)0)) {
  VAR_20 = VAR_14;
  *VAR_16 = '\0';
  if (!FUNC_7(VAR_20))
   FUNC_0(VAR_9);
  VAR_14 = ++VAR_16;
 } else
  VAR_20 = VAR_19->pw_name;
 if ((VAR_17 = FUNC_2("RMT")) == ((void*)0))
  VAR_17 = VAR_10;
 FUNC_6("%s", "");
 VAR_13 = FUNC_9(&VAR_14, (u_short)VAR_18->s_port, VAR_19->pw_name,
        VAR_20, VAR_17, &VAR_11);
 if (VAR_13 < 0) {
  FUNC_6("login to %s as %s failed.\n", VAR_14, VAR_20);
  return;
 }
 (void)FUNC_1(VAR_15, "Connection to %s established.\n", VAR_14);
 VAR_21 = VAR_12 * VAR_8;
 if (VAR_21 > 60 * 1024)
  VAR_21 = 60 * 1024;

 VAR_21 += 2 * 1024;
 while (VAR_21 > VAR_8 &&
     FUNC_10(VAR_13, VAR_4, VAR_6, &VAR_21, sizeof (VAR_21)) < 0)
      VAR_21 -= VAR_8;
 (void)FUNC_10(VAR_13, VAR_4, VAR_5, &VAR_21, sizeof (VAR_21));
 VAR_22 = VAR_2;
 if (FUNC_10(VAR_13, VAR_0, VAR_3,
     &VAR_22, sizeof(VAR_22)) < 0)
  FUNC_8("IP_TOS:IPTOS_THROUGHPUT setsockopt");
 VAR_23 = 1;
 if (FUNC_10(VAR_13, VAR_1, VAR_7, &VAR_23, sizeof (VAR_23)) < 0)
  FUNC_8("TCP_NODELAY setsockopt");
}
