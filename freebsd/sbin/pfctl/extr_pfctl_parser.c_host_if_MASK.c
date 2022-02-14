
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_host {struct node_host* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 struct node_host* FUNC_4 (char*,int) ;
 int FUNC_5 (struct node_host*,int) ;
 int VAR_6 ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*,int ) ;
 char* FUNC_9 (char*,char) ;

struct node_host *
FUNC_10(const char *VAR_7, int VAR_8)
{
 struct node_host *VAR_9, *VAR_10 = ((void*)0);
 char *VAR_11, *VAR_12;
 int VAR_13 = 0;

 if ((VAR_12 = FUNC_7(VAR_7)) == ((void*)0))
  FUNC_0(1, "host_if: strdup");
 while ((VAR_11 = FUNC_9(VAR_12, ':')) != ((void*)0)) {
  if (!FUNC_6(VAR_11+1, "network"))
   VAR_13 |= VAR_3;
  else if (!FUNC_6(VAR_11+1, "broadcast"))
   VAR_13 |= VAR_1;
  else if (!FUNC_6(VAR_11+1, "peer"))
   VAR_13 |= VAR_5;
  else if (!FUNC_6(VAR_11+1, "0"))
   VAR_13 |= VAR_4;
  else {
   FUNC_2(VAR_12);
   return (((void*)0));
  }
  *VAR_11 = '\0';
 }
 if (VAR_13 & (VAR_13 - 1) & VAR_2) {
  FUNC_1(VAR_6, "illegal combination of interface modifiers\n");
  FUNC_2(VAR_12);
  return (((void*)0));
 }
 if ((VAR_13 & (VAR_3|VAR_1)) && VAR_8 > -1) {
  FUNC_1(VAR_6, "network or broadcast lookup, but "
      "extra netmask given\n");
  FUNC_2(VAR_12);
  return (((void*)0));
 }
 if (FUNC_3(VAR_12) || !FUNC_8(VAR_12, "self", VAR_0)) {

  VAR_10 = FUNC_4(VAR_12, VAR_13);
  for (VAR_9 = VAR_10; VAR_9 != ((void*)0) && VAR_8 > -1; VAR_9 = VAR_9->next)
   FUNC_5(VAR_9, VAR_8);
 }

 FUNC_2(VAR_12);
 return (VAR_10);
}
