
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {struct TYPE_7__* dd_parent; int dd_lock; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_8__ {int dd_used_bytes; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int64_t
FUNC_4(dsl_dir_t *VAR_0, int64_t VAR_1, dsl_dir_t *VAR_2)
{
 if (VAR_0 == VAR_2)
  return (VAR_1);

 FUNC_1(&VAR_0->dd_lock);
 VAR_1 = FUNC_3(VAR_0, FUNC_0(VAR_0)->dd_used_bytes, VAR_1);
 FUNC_2(&VAR_0->dd_lock);
 return (FUNC_4(VAR_0->dd_parent, VAR_1, VAR_2));
}
