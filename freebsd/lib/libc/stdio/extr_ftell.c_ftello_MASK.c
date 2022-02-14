
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef scalar_t__ fpos_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int VAR_1 ;

off_t
FUNC_3(FILE *VAR_2)
{
 fpos_t VAR_3;
 int VAR_4;

 FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_2, &VAR_3);
 FUNC_1(VAR_2);
 if (VAR_4)
  return (-1);
 if (VAR_3 < 0) {
  VAR_1 = VAR_0;
  return (-1);
 }
 return (VAR_3);
}
