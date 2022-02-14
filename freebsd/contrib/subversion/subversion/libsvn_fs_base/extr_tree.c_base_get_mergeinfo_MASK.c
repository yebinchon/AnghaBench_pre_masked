
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_mergeinfo_inheritance_t ;
struct TYPE_4__ {scalar_t__ is_txn_root; int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_mergeinfo_receiver_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__*,int const*,int ,int ,int ,int ,void*,int *) ;
 int * FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_root_t *VAR_2,
                   const apr_array_header_t *VAR_3,
                   svn_mergeinfo_inheritance_t VAR_4,
                   svn_boolean_t VAR_5,
                   svn_boolean_t VAR_6,
                   svn_fs_mergeinfo_receiver_t VAR_7,
                   void *VAR_8,
                   apr_pool_t *VAR_9)
{

  FUNC_0(FUNC_3
          (VAR_2->fs, "mergeinfo", VAR_1));


  if (VAR_2->is_txn_root)
    return FUNC_2(VAR_0, ((void*)0), ((void*)0));


  return FUNC_1(VAR_2, VAR_3,
                                  VAR_4, VAR_5,
                                  VAR_6,
                                  VAR_7, VAR_8,
                                  VAR_9);
}
