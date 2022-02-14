
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_2__ {int se_bookmark; } ;
typedef TYPE_1__ spa_error_entry_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const spa_error_entry_t *VAR_2 = (const spa_error_entry_t *)VAR_0;
 const spa_error_entry_t *VAR_3 = (const spa_error_entry_t *)VAR_1;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_2->se_bookmark, &VAR_3->se_bookmark,
     sizeof (zbookmark_phys_t));

 return (FUNC_0(VAR_4));
}
