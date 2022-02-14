
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_5__ {int p2l_checksum; int footer_offset; int p2l_offset; int file; int l2p_checksum; int l2p_offset; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__**,int *,int ,int *,int *) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_t *VAR_1,
                       svn_revnum_t VAR_2,
                       svn_cancel_func_t VAR_3,
                       void *VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_fs_fs__revision_file_t *VAR_6;


  FUNC_0(FUNC_3(&VAR_6, VAR_1, VAR_2,
                                           VAR_5, VAR_5));
  FUNC_0(FUNC_1(VAR_6));


  FUNC_0(FUNC_4(VAR_6->file, "L2P index",
                                VAR_6->l2p_offset, VAR_6->p2l_offset,
                                VAR_6->l2p_checksum,
                                VAR_3, VAR_4, VAR_5));
  FUNC_0(FUNC_4(VAR_6->file, "P2L index",
                                VAR_6->p2l_offset, VAR_6->footer_offset,
                                VAR_6->p2l_checksum,
                                VAR_3, VAR_4, VAR_5));


  FUNC_0(FUNC_2(VAR_6));

  return VAR_0;
}
