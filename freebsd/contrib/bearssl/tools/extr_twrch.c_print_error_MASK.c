
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,char const**) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{
 const char *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_2, "ERR %d: %s\n   %s\n", VAR_3, VAR_4, VAR_5);
  return;
 }
 if (VAR_3 >= VAR_0
  && VAR_3 < VAR_0 + 256)
 {
  FUNC_1(VAR_2, "ERR %d: received fatal alert %d\n",
   VAR_3, VAR_3 - VAR_0);
  return;
 }
 if (VAR_3 >= VAR_1
  && VAR_3 < VAR_1 + 256)
 {
  FUNC_1(VAR_2, "ERR %d: sent fatal alert %d\n",
   VAR_3, VAR_3 - VAR_1);
  return;
 }
 FUNC_1(VAR_2, "ERR %d: UNKNOWN\n", VAR_3);
}
