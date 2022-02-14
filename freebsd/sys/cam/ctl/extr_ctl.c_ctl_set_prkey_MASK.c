
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint32_t ;
struct ctl_lun {int ** pr_keys; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct ctl_lun *VAR_1, uint32_t VAR_2, uint64_t VAR_3)
{
 uint64_t *VAR_4;

 VAR_4 = VAR_1->pr_keys[VAR_2/VAR_0];
 FUNC_0(VAR_4 != ((void*)0), ("prkey %d is not allocated", VAR_2));
 VAR_4[VAR_2 % VAR_0] = VAR_3;
}
