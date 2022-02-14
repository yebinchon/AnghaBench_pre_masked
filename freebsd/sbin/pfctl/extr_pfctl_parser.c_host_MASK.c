
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_host {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*) ;
 struct node_host* FUNC_3 (char*,int,int) ;
 struct node_host* FUNC_4 (char*,int) ;
 struct node_host* FUNC_5 (char const*,int) ;
 struct node_host* FUNC_6 (char*,int) ;
 char* FUNC_7 (scalar_t__) ;
 int VAR_0 ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_10 (char const*) ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (char*,char**,int ) ;

struct node_host *
FUNC_13(const char *VAR_1)
{
 struct node_host *VAR_2 = ((void*)0);
 int VAR_3, VAR_4, VAR_5, VAR_6 = 1;
 char *VAR_7, *VAR_8, *VAR_9;

 if ((VAR_7 = FUNC_11(VAR_1, '/')) != ((void*)0)) {
  VAR_3 = FUNC_12(VAR_7+1, &VAR_8, 0);
  if (!VAR_8 || *VAR_8 || VAR_3 > 128 || VAR_8 == (VAR_7+1)) {
   FUNC_1(VAR_0, "invalid netmask '%s'\n", VAR_7);
   return (((void*)0));
  }
  if ((VAR_9 = FUNC_7(FUNC_10(VAR_1) - FUNC_10(VAR_7) + 1)) == ((void*)0))
   FUNC_0(1, "host: malloc");
  FUNC_9(VAR_9, VAR_1, FUNC_10(VAR_1) - FUNC_10(VAR_7) + 1);
  VAR_4 = VAR_5 = VAR_3;
 } else {
  if ((VAR_9 = FUNC_8(VAR_1)) == ((void*)0))
   FUNC_0(1, "host: strdup");
  VAR_4 = 32;
  VAR_5 = 128;
  VAR_3 = -1;
 }


 if (VAR_6 && (VAR_2 = FUNC_4(VAR_9, VAR_3)) != ((void*)0))
  VAR_6 = 0;


 if (VAR_6 && (VAR_2 = FUNC_5(VAR_1, VAR_3)) != ((void*)0))
  VAR_6 = 0;


 if (VAR_6 && (VAR_2 = FUNC_6(VAR_9, VAR_5)) != ((void*)0))
  VAR_6 = 0;


 if (VAR_6 && (VAR_2 = FUNC_3(VAR_9, VAR_4, VAR_5)) != ((void*)0))
  VAR_6 = 0;
 FUNC_2(VAR_9);

 if (VAR_2 == ((void*)0) || VAR_6 == 1) {
  FUNC_1(VAR_0, "no IP address found for %s\n", VAR_1);
  return (((void*)0));
 }
 return (VAR_2);
}
