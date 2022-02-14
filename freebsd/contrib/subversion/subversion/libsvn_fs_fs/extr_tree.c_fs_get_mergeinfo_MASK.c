
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_mergeinfo_inheritance_t ;
struct TYPE_6__ {TYPE_3__* fs; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_mergeinfo_receiver_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {int format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_8__ {int path; TYPE_2__* fsap_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_1__*,int const*,int ,int ,int ,int ,void*,int *) ;
 int * FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_root_t *VAR_3,
                 const apr_array_header_t *VAR_4,
                 svn_mergeinfo_inheritance_t VAR_5,
                 svn_boolean_t VAR_6,
                 svn_boolean_t VAR_7,
                 svn_fs_mergeinfo_receiver_t VAR_8,
                 void *VAR_9,
                 apr_pool_t *VAR_10)
{
  fs_fs_data_t *VAR_11 = VAR_3->fs->fsap_data;


  if (VAR_3->is_txn_root)
    return FUNC_2(VAR_0, ((void*)0), ((void*)0));


  if (! FUNC_4(VAR_3->fs))
    return FUNC_3
      (VAR_1, ((void*)0),
       FUNC_0("Querying mergeinfo requires version %d of the FSFS filesystem "
         "schema; filesystem '%s' uses only version %d"),
       VAR_2, VAR_3->fs->path, VAR_11->format);


  return FUNC_1(VAR_3, VAR_4, VAR_5,
                                  VAR_6,
                                  VAR_7,
                                  VAR_8, VAR_9,
                                  VAR_10);
}
