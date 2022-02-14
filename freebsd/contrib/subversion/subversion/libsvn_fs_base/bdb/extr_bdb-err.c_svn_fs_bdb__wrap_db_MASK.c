
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* path; TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_8__ {TYPE_5__* bdb; } ;
typedef TYPE_3__ base_fs_data_t ;
struct TYPE_9__ {TYPE_1__* error_info; } ;
struct TYPE_6__ {int * pending_errors; } ;


 int * VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_5__*,int,int ,char*,int ) ;

svn_error_t *
FUNC_3(svn_fs_t *VAR_1, const char *VAR_2, int VAR_3)
{
  base_fs_data_t *VAR_4 = VAR_1->fsap_data;

  if (! VAR_3)
    {
      FUNC_1(VAR_4->bdb->error_info->pending_errors);
      VAR_4->bdb->error_info->pending_errors = ((void*)0);
      return VAR_0;
    }

  VAR_4 = VAR_1->fsap_data;
  return FUNC_2
    (VAR_4->bdb, VAR_3,
     FUNC_0("Berkeley DB error for filesystem '%s' while %s:\n"),
     VAR_1->path ? VAR_1->path : "(none)", FUNC_0(VAR_2));
}
