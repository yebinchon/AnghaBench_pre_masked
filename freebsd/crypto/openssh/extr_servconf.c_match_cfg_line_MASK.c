
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection_info {char* user; char* host; char* address; char* laddress; int lport; char* rdomain; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char**) ;

__attribute__((used)) static int
FUNC_11(char **VAR_0, int VAR_1, struct connection_info *VAR_2)
{
 int VAR_3 = 1, VAR_4 = 0, VAR_5;
 char *VAR_6, *VAR_7, *VAR_8 = *VAR_0;

 if (VAR_2 == ((void*)0))
  FUNC_3("checking syntax for 'Match %s'", VAR_8);
 else
  FUNC_3("checking match for '%s' user %s host %s addr %s "
      "laddr %s lport %d", VAR_8, VAR_2->user ? VAR_2->user : "(null)",
      VAR_2->host ? VAR_2->host : "(null)",
      VAR_2->address ? VAR_2->address : "(null)",
      VAR_2->laddress ? VAR_2->laddress : "(null)", VAR_2->lport);

 while ((VAR_7 = FUNC_10(&VAR_8)) && *VAR_7 != '\0') {
  VAR_4++;
  if (FUNC_9(VAR_7, "all") == 0) {
   if (VAR_4 != 1 ||
       ((VAR_6 = FUNC_10(&VAR_8)) != ((void*)0) && *VAR_6 != '\0')) {
    FUNC_4("'all' cannot be combined with other "
        "Match attributes");
    return -1;
   }
   *VAR_0 = VAR_8;
   return 1;
  }
  if ((VAR_6 = FUNC_10(&VAR_8)) == ((void*)0) || *VAR_6 == '\0') {
   FUNC_4("Missing Match criteria for %s", VAR_7);
   return -1;
  }
  if (FUNC_9(VAR_7, "user") == 0) {
   if (VAR_2 == ((void*)0)) {
    VAR_3 = 0;
    continue;
   }
   if (VAR_2->user == ((void*)0))
    FUNC_8("User", "user");
   if (FUNC_7(VAR_2->user, VAR_6, 0) != 1)
    VAR_3 = 0;
   else
    FUNC_2("user %.100s matched 'User %.100s' at "
        "line %d", VAR_2->user, VAR_6, VAR_1);
  } else if (FUNC_9(VAR_7, "group") == 0) {
   if (VAR_2 == ((void*)0)) {
    VAR_3 = 0;
    continue;
   }
   if (VAR_2->user == ((void*)0))
    FUNC_8("Group", "user");
   switch (FUNC_5(VAR_6, VAR_1, VAR_2->user)) {
   case -1:
    return -1;
   case 0:
    VAR_3 = 0;
   }
  } else if (FUNC_9(VAR_7, "host") == 0) {
   if (VAR_2 == ((void*)0)) {
    VAR_3 = 0;
    continue;
   }
   if (VAR_2->host == ((void*)0))
    FUNC_8("Host", "host");
   if (FUNC_6(VAR_2->host, VAR_6) != 1)
    VAR_3 = 0;
   else
    FUNC_2("connection from %.100s matched 'Host "
        "%.100s' at line %d", VAR_2->host, VAR_6, VAR_1);
  } else if (FUNC_9(VAR_7, "address") == 0) {
   if (VAR_2 == ((void*)0)) {
    VAR_3 = 0;
    continue;
   }
   if (VAR_2->address == ((void*)0))
    FUNC_8("Address", "addr");
   switch (FUNC_1(VAR_2->address, VAR_6)) {
   case 1:
    FUNC_2("connection from %.100s matched 'Address "
        "%.100s' at line %d", VAR_2->address, VAR_6, VAR_1);
    break;
   case 0:
   case -1:
    VAR_3 = 0;
    break;
   case -2:
    return -1;
   }
  } else if (FUNC_9(VAR_7, "localaddress") == 0){
   if (VAR_2 == ((void*)0)) {
    VAR_3 = 0;
    continue;
   }
   if (VAR_2->laddress == ((void*)0))
    FUNC_8("LocalAddress",
        "laddr");
   switch (FUNC_1(VAR_2->laddress, VAR_6)) {
   case 1:
    FUNC_2("connection from %.100s matched "
        "'LocalAddress %.100s' at line %d",
        VAR_2->laddress, VAR_6, VAR_1);
    break;
   case 0:
   case -1:
    VAR_3 = 0;
    break;
   case -2:
    return -1;
   }
  } else if (FUNC_9(VAR_7, "localport") == 0) {
   if ((VAR_5 = FUNC_0(VAR_6)) == -1) {
    FUNC_4("Invalid LocalPort '%s' on Match line",
        VAR_6);
    return -1;
   }
   if (VAR_2 == ((void*)0)) {
    VAR_3 = 0;
    continue;
   }
   if (VAR_2->lport == 0)
    FUNC_8("LocalPort", "lport");

   if (VAR_5 == VAR_2->lport)
    FUNC_2("connection from %.100s matched "
        "'LocalPort %d' at line %d",
        VAR_2->laddress, VAR_5, VAR_1);
   else
    VAR_3 = 0;
  } else if (FUNC_9(VAR_7, "rdomain") == 0) {
   if (VAR_2 == ((void*)0) || VAR_2->rdomain == ((void*)0)) {
    VAR_3 = 0;
    continue;
   }
   if (FUNC_7(VAR_2->rdomain, VAR_6, 0) != 1)
    VAR_3 = 0;
   else
    FUNC_2("user %.100s matched 'RDomain %.100s' at "
        "line %d", VAR_2->rdomain, VAR_6, VAR_1);
  } else {
   FUNC_4("Unsupported Match attribute %s", VAR_7);
   return -1;
  }
 }
 if (VAR_4 == 0) {
  FUNC_4("One or more attributes required for Match");
  return -1;
 }
 if (VAR_2 != ((void*)0))
  FUNC_3("match %sfound", VAR_3 ? "" : "not ");
 *VAR_0 = VAR_8;
 return VAR_3;
}
