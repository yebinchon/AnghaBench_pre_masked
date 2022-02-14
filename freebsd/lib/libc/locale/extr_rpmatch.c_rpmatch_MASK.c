
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int *,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(const char *VAR_4)
{
 regex_t VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_1(&VAR_5, FUNC_0(VAR_3), VAR_1|VAR_2) != 0)
  return (-1);
 if (FUNC_1(&VAR_6, FUNC_0(VAR_0), VAR_1|VAR_2) != 0) {
  FUNC_3(&VAR_5);
  return (-1);
 }
 if (FUNC_2(&VAR_5, VAR_4, 0, ((void*)0), 0) == 0)
  VAR_7 = 1;
 else if (FUNC_2(&VAR_6, VAR_4, 0, ((void*)0), 0) == 0)
  VAR_7 = 0;
 else
  VAR_7 = -1;
 FUNC_3(&VAR_5);
 FUNC_3(&VAR_6);
 return (VAR_7);
}
