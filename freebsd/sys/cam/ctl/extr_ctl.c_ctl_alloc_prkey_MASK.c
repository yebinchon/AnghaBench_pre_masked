
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct ctl_lun {int ** pr_keys; int lun_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ctl_lun *VAR_4, uint32_t VAR_5)
{
 uint64_t *VAR_6;
 u_int VAR_7;

 VAR_7 = VAR_5/VAR_0;
 if (VAR_4->pr_keys[VAR_7] != ((void*)0))
  return;
 FUNC_3(&VAR_4->lun_lock);
 VAR_6 = FUNC_1(sizeof(uint64_t) * VAR_0, VAR_1,
     VAR_2 | VAR_3);
 FUNC_2(&VAR_4->lun_lock);
 if (VAR_4->pr_keys[VAR_7] == ((void*)0))
  VAR_4->pr_keys[VAR_7] = VAR_6;
 else
  FUNC_0(VAR_6, VAR_1);
}
