
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int format; } ;
typedef TYPE_2__ base_fs_data_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*,int,int ,int) ;

svn_error_t *
FUNC_2(svn_fs_t *VAR_2,
                                          const char *VAR_3,
                                          int VAR_4)
{
  base_fs_data_t *VAR_5 = VAR_2->fsap_data;
  if (VAR_5->format < VAR_4)
    return FUNC_1
      (VAR_0, ((void*)0),
       FUNC_0("The '%s' feature requires version %d of the filesystem schema; "
         "filesystem '%s' uses only version %d"),
       VAR_3, VAR_4, VAR_2->path, VAR_5->format);
  return VAR_1;
}
