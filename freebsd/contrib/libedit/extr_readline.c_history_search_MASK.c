
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int str; } ;
typedef TYPE_1__ HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int ,...) ;
 char* FUNC_1 (int,char const*) ;

int
FUNC_2(const char *VAR_5, int VAR_6)
{
 HistEvent VAR_7;
 const char *VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_4, &VAR_7, VAR_0) != 0)
  return -1;
 VAR_9 = VAR_7.num;

 for (;;) {
  if ((VAR_8 = FUNC_1(VAR_7.str, VAR_5)) != ((void*)0))
   return (int)(VAR_8 - VAR_7.str);
  if (FUNC_0(VAR_4, &VAR_7, VAR_6 < 0 ? VAR_1:VAR_2) != 0)
   break;
 }
 (void)FUNC_0(VAR_4, &VAR_7, VAR_3, VAR_9);
 return -1;
}
