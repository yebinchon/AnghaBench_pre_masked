
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head**,int*,char*,char*) ;
 int FUNC_1 (struct list_head**,int*,char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_0 ;

int FUNC_4(struct list_head **VAR_1, int *VAR_2,
    char *VAR_3, char *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0);
 if (VAR_5)
  return VAR_5;

 if (FUNC_3(VAR_3, "*?"))
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
