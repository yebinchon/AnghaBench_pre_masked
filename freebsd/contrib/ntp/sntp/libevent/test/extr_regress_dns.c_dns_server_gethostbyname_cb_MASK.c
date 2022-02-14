
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct in6_addr {int s6_addr; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int ,struct in6_addr*,char*,int) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (struct in_addr) ;
 int FUNC_4 (int *,char*,int) ;
 int VAR_6 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(int VAR_7, char VAR_8, int VAR_9, int VAR_10,
    void *VAR_11, void *VAR_12)
{
 if (VAR_7 == VAR_1) {
  if (VAR_12 != (void*)(char*)90909) {
   FUNC_5("Unexpected cancelation");
   VAR_5 = 0;
  }
  VAR_4 = 1;
  goto out;
 }
 if (VAR_7 != VAR_2) {
  FUNC_5("Unexpected result %d. ", VAR_7);
  VAR_5 = 0;
  goto out;
 }
 if (VAR_9 != 1) {
  FUNC_5("Unexpected answer count %d. ", VAR_9);
  VAR_5 = 0;
  goto out;
 }
 switch (VAR_8) {
 case 130: {
  struct in_addr *VAR_13 = VAR_11;
  if (VAR_13[0].s_addr != FUNC_2(0xc0a80b0bUL) || VAR_10 != 12345) {
   FUNC_5("Bad IPv4 response \"%s\" %d. ",
     FUNC_3(VAR_13[0]), VAR_10);
   VAR_5 = 0;
   goto out;
  }
  break;
 }
 case 129: {
  break;
 }
 case 128: {
  char **VAR_14 = VAR_11;
  if (VAR_12 != (void*)6) {
   if (FUNC_6(VAR_14[0], "ZZ.EXAMPLE.COM") ||
       VAR_10 != 54321) {
    FUNC_5("Bad PTR response \"%s\" %d. ",
        VAR_14[0], VAR_10);
    VAR_5 = 0;
    goto out;
   }
  } else {
   if (FUNC_6(VAR_14[0], "ZZ-INET6.EXAMPLE.COM") ||
       VAR_10 != 54322) {
    FUNC_5("Bad ipv6 PTR response \"%s\" %d. ",
        VAR_14[0], VAR_10);
    VAR_5 = 0;
    goto out;
   }
  }
  break;
 }
 default:
  FUNC_5("Bad response type %d. ", VAR_8);
  VAR_5 = 0;
 }
 out:
 if (++VAR_6 == 3) {
  FUNC_0(((void*)0));
 }
}
