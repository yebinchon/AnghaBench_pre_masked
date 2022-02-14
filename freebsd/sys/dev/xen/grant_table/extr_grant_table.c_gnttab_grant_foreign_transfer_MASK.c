
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grant_ref_t ;
typedef int domid_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,int ,unsigned long) ;

int
FUNC_3(domid_t VAR_0, unsigned long VAR_1,
    grant_ref_t *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(1, &VAR_4);
 if (FUNC_0(VAR_3))
  return (VAR_3);

 FUNC_2(VAR_4, VAR_0, VAR_1);

 *VAR_2 = VAR_4;
 return (0);
}
