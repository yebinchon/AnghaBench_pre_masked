
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_id_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {scalar_t__ (* compare ) (TYPE_2__ const*,TYPE_2__ const*) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__ const*,TYPE_2__ const*) ;
 scalar_t__ VAR_0 ;

svn_boolean_t
FUNC_1(const svn_fs_id_t *VAR_1, const svn_fs_id_t *VAR_2)
{
  return (VAR_1->vtable->compare(VAR_1, VAR_2) != VAR_0);
}
