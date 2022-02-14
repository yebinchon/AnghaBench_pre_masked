
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 extern char *VAR_1;

 FUNC_1(VAR_0,
     "usage: %s [-ehR] [-d start_directory] [-f log_facility] "
     "[-l log_level]\n\t[-P blacklisted_requests] "
     "[-p whitelisted_requests] [-u umask]\n"
     "       %s -Q protocol_feature\n",
     VAR_1, VAR_1);
 FUNC_0(1);
}
