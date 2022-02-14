
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ format; scalar_t__ max_files_per_dir; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_6__ {int uuid; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int *,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_t *VAR_3,
                                        svn_fs_t *VAR_4)
{
  svn_fs_x__data_t *VAR_5 = VAR_3->fsap_data;
  svn_fs_x__data_t *VAR_6 = VAR_4->fsap_data;


  if (VAR_5->format != VAR_6->format)
    return FUNC_3(VAR_1, ((void*)0),
      FUNC_0("The FSX format (%d) of the hotcopy source does not match the "
        "FSX format (%d) of the hotcopy destination; please upgrade "
        "both repositories to the same format"),
      VAR_5->format, VAR_6->format);



  if (FUNC_1(VAR_3->uuid, VAR_4->uuid) != 0)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_0("The UUID of the hotcopy source does "
                              "not match the UUID of the hotcopy "
                              "destination"));


  if (VAR_5->max_files_per_dir != VAR_6->max_files_per_dir)
    return FUNC_2(VAR_1, ((void*)0),
                            FUNC_0("The sharding layout configuration "
                              "of the hotcopy source does not match "
                              "the sharding layout configuration of "
                              "the hotcopy destination"));
  return VAR_2;
}
