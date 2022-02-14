
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int (* svn_fs_pack_notify_t ) (void*,int,int ,int *) ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
struct pack_baton {scalar_t__ max_mem; void* cancel_baton; int cancel_func; void* notify_baton; int (* notify_func ) (void*,int,int ,int *) ;TYPE_1__* fs; int member_0; } ;
struct TYPE_8__ {scalar_t__ format; int max_files_per_dir; int min_unpacked_rev; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*,int *) ;
 int VAR_5 ;
 int FUNC_3 (void*,int,int ,int *) ;
 int FUNC_4 (void*,int,int ,int *) ;
 int * FUNC_5 (int ,int *,int ,scalar_t__) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_1__*,int ,struct pack_baton*,int *) ;
 int * FUNC_8 (TYPE_1__*,int ,struct pack_baton*,int *) ;
 int VAR_6 ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_7,
                apr_size_t VAR_8,
                svn_fs_pack_notify_t VAR_9,
                void *VAR_10,
                svn_cancel_func_t VAR_11,
                void *VAR_12,
                apr_pool_t *VAR_13)
{
  struct pack_baton VAR_14 = { 0 };
  fs_fs_data_t *VAR_15 = VAR_7->fsap_data;
  svn_error_t *VAR_16;
  svn_boolean_t VAR_17;



  if (VAR_15->format < VAR_2)
    return FUNC_5(VAR_1, ((void*)0),
      FUNC_1("FSFS format (%d) too old to pack; please upgrade the filesystem."),
      VAR_15->format);


  if (!VAR_15->max_files_per_dir)
    {
      if (VAR_9)
        (*VAR_9)(VAR_10, -1, VAR_6, VAR_13);

      return VAR_4;
    }


  FUNC_0(FUNC_2(&VAR_17, VAR_7, VAR_13));
  if (VAR_17)
    {
      if (VAR_9)
        (*VAR_9)(VAR_10,
                       VAR_15->min_unpacked_rev / VAR_15->max_files_per_dir,
                       VAR_6, VAR_13);

      return VAR_4;
    }


  VAR_14.fs = VAR_7;
  VAR_14.notify_func = VAR_9;
  VAR_14.notify_baton = VAR_10;
  VAR_14.cancel_func = VAR_11;
  VAR_14.cancel_baton = VAR_12;
  VAR_14.max_mem = VAR_8 ? VAR_8 : VAR_0;

  if (VAR_15->format >= VAR_3)
    {







      VAR_16 = FUNC_7(VAR_7, VAR_5, &VAR_14, VAR_13);
    }
  else
    {

      VAR_16 = FUNC_8(VAR_7, VAR_5, &VAR_14, VAR_13);
    }

  return FUNC_6(VAR_16);
}
