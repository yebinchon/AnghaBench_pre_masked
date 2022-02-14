
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctl_table {int * data; } ;
typedef int gid_t ;
struct TYPE_2__ {int lock; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ctl_table *VAR_1, gid_t VAR_2[2])
{
 gid_t *VAR_3 = VAR_1->data;
 FUNC_0(&VAR_0.lock);
 VAR_3[0] = VAR_2[0];
 VAR_3[1] = VAR_2[1];
 FUNC_1(&VAR_0.lock);
}
