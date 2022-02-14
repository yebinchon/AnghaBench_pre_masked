
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pmap_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct spglist*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static __inline boolean_t
FUNC_5(pmap_t VAR_2, vm_offset_t VAR_3, vm_page_t VAR_4, struct spglist *VAR_5)
{
 FUNC_2(VAR_4, FUNC_4(VAR_3));
 if (FUNC_3(VAR_4)) {






  FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_0(VAR_4, VAR_5);
  return (VAR_1);
 } else
  return (VAR_0);
}
