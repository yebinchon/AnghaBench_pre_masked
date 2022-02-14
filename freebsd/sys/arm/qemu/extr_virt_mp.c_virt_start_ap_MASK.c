
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_2(u_int VAR_4, phandle_t VAR_5, u_int VAR_6, pcell_t *VAR_7)
{
 int VAR_8;

 if (VAR_3 >= VAR_1)
  return (0);
 VAR_3++;

 VAR_8 = FUNC_1(*VAR_7, FUNC_0((vm_offset_t)VAR_2), VAR_4);

 if (VAR_8 != VAR_0)
  return (0);

 return (1);
}
