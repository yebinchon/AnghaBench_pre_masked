
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct event_base {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (char*) ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct event_base*,int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ,struct in6_addr*,char*,int) ;
 int FUNC_4 (struct in_addr) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(int VAR_7, char VAR_8, int VAR_9, int VAR_10,
    void *VAR_11, void *VAR_12)
{
 VAR_5 = VAR_4 = 0;

 if (VAR_7 == VAR_2) {
  FUNC_5("[Timed out] ");
  VAR_4 = VAR_7;
  goto out;
 }

 if (VAR_7 != VAR_1) {
  FUNC_5("[Error code %d] ", VAR_7);
  goto out;
 }

 FUNC_0(("type: %d, count: %d, ttl: %d: ", VAR_8, VAR_9, VAR_10));

 switch (VAR_8) {
 case 129: {
  break;
 }
 case 130: {
  struct in_addr *VAR_13 = VAR_11;
  int VAR_14;

  if (VAR_10 < 0)
   goto out;
  for (VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14)
   FUNC_0(("%s ", FUNC_4(VAR_13[VAR_14])));
  break;
 }
 case 128:

  if (VAR_9 != 1)
   goto out;

  FUNC_0(("%s ", *(char **)VAR_11));
  break;
 default:
  goto out;
 }

 VAR_5 = VAR_8;

out:
 if (VAR_12 == ((void*)0))
  FUNC_2(((void*)0));
 else
  FUNC_1((struct event_base *)VAR_12, ((void*)0));
}
