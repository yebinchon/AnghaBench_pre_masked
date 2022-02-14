
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int au_stat_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,size_t) ;
 int VAR_2 ;

int
FUNC_1(au_stat_t *VAR_3, size_t VAR_4)
{

 if (sizeof(*VAR_3) != VAR_4) {
  VAR_2 = VAR_1;
  return (-1);
 }

 return (FUNC_0(VAR_0, VAR_3, VAR_4));
}
