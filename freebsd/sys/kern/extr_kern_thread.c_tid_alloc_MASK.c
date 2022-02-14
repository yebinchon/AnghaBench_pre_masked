
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lwpid_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static lwpid_t
FUNC_3(void)
{
 lwpid_t VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 != -1)
  return (VAR_6);
 FUNC_1(&VAR_3);
 if (VAR_2 == VAR_4) {
  FUNC_2(&VAR_3);
  return (-1);
 }
 VAR_6 = VAR_1[VAR_2];
 VAR_2 = (VAR_2 + 1) % VAR_0;
 FUNC_2(&VAR_3);
 return (VAR_6);
}
