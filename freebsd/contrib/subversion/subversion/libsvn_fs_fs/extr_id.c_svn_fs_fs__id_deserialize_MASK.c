
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void svn_fs_id_t ;
struct TYPE_3__ {TYPE_2__* fsap_data; int * vtable; } ;
struct TYPE_4__ {TYPE_1__ generic_id; } ;
typedef TYPE_2__ fs_fs__id_t ;


 int VAR_0 ;
 int FUNC_0 (void*,void**) ;

void
FUNC_1(void *VAR_1, svn_fs_id_t **VAR_2)
{
  fs_fs__id_t *VAR_3;



  if (*VAR_2 != VAR_1)
    FUNC_0(VAR_1, (void**)VAR_2);

  VAR_3 = (fs_fs__id_t *)*VAR_2;


  if (VAR_3 == ((void*)0))
    return;


  VAR_3->generic_id.vtable = &VAR_0;
  VAR_3->generic_id.fsap_data = VAR_3;
}
