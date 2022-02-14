
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int username ;
typedef scalar_t__ time_t ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct passwd {char* pw_name; } ;
struct logininfo {char* progname; char* hostname; int line; } ;
struct in_addr {int dummy; } ;
struct hostent {int ** h_addr_list; } ;
typedef int stripline ;
typedef int sa_in4 ;
typedef int s_t2 ;
typedef int s_t1 ;
typedef int s_t0 ;
typedef int s_logouttime ;
typedef int s_logintime ;
typedef int cmdstring ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct logininfo*,char*) ;
 scalar_t__ FUNC_2 () ;
 struct hostent* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 struct passwd* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,int) ;
 struct logininfo* FUNC_8 (int,char*,int *,int ) ;
 int FUNC_9 (struct logininfo*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct logininfo*) ;
 int FUNC_12 (struct logininfo*) ;
 int FUNC_13 (struct logininfo*,struct sockaddr*,int) ;
 int FUNC_14 (struct logininfo*) ;
 int FUNC_15 (void*,void*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*,int,char*,char*) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (scalar_t__*) ;
 int FUNC_22 (int ) ;

int
FUNC_23()
{
 struct logininfo *VAR_3;
 struct passwd *VAR_4;
 struct hostent *VAR_5;
 struct sockaddr_in VAR_6;
 char VAR_7[256], VAR_8[8];
 char VAR_9[32];






 FUNC_16("**\n** Testing the API...\n**\n");

 VAR_4 = FUNC_5(FUNC_6());
 FUNC_19(VAR_9, VAR_4->pw_name, sizeof(VAR_9));



 FUNC_16("login_alloc_entry test (no host info):\n");


 VAR_3 = FUNC_8((int)FUNC_4(), VAR_9, ((void*)0), FUNC_22(0));
 FUNC_19(VAR_3->progname, "OpenSSH-logintest", sizeof(VAR_3->progname));

 if (VAR_1)
  FUNC_1(VAR_3, "li1");

 FUNC_16("Setting host address info for 'localhost' (may call out):\n");
 if (! (VAR_5 = FUNC_3("localhost"))) {
  FUNC_16("Couldn't set hostname(lookup failed)\n");
 } else {


  FUNC_15((void *)&(VAR_6), (void *)&(VAR_5->h_addr_list[0][0]),
         sizeof(struct in_addr));
  FUNC_13(VAR_3, (struct sockaddr *) &VAR_6, sizeof(VAR_6));
  FUNC_19(VAR_3->hostname, "localhost", sizeof(VAR_3->hostname));
 }
 if (VAR_1)
  FUNC_1(VAR_3, "li1");

 if ((int)FUNC_2() != 0) {
  FUNC_16("NOT RUNNING LOGIN TESTS - you are not root!\n");
  return 1;
 }

 if (VAR_2)
  return 1;

 FUNC_7(VAR_8, VAR_3->line, sizeof(VAR_8));

 FUNC_16("Performing an invalid login attempt (no type field)\n--\n");
 FUNC_14(VAR_3);
 FUNC_16("--\n(Should have written errors to stderr)\n");
 FUNC_16("Performing a login on line %s ", VAR_8);





 FUNC_16("--\n");
 FUNC_11(VAR_3);

 FUNC_18(VAR_7, sizeof(VAR_7), "who | grep '%s '",
   VAR_8);
 FUNC_20(VAR_7);

 FUNC_16("--\nPausing for %d second(s)...\n", VAR_0);
 FUNC_17(VAR_0);

 FUNC_16("Performing a logout ");





 FUNC_16("\nThe root login shown above should be gone.\n"
        "If the root login hasn't gone, but another user on the same\n"
        "pty has, this is OK - we're hacking it here, and there\n"
        "shouldn't be two users on one pty in reality...\n"
        "-- ('who' output follows)\n");
 FUNC_12(VAR_3);

 FUNC_20(VAR_7);
 FUNC_16("-- ('who' output ends)\n");
 FUNC_16("--\nThe output of 'last' shown next should have "
        "an entry for root \n  on %s for the time shown above:\n--\n",
        VAR_8);
 FUNC_18(VAR_7, sizeof(VAR_7), "last | grep '%s ' | head -3",
   VAR_8);
 FUNC_20(VAR_7);

 FUNC_16("--\nEnd of login test.\n");

 FUNC_9(VAR_3);

 return 1;
}
