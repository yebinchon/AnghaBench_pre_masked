
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_deltification_walk; int max_linear_deltification; int delta_compression_level; int revprop_pack_size; int block_size; int l2p_page_size; int p2l_page_size; int fail_stop; int memcache; int pack_after_commit; int compress_packed_revprops; int rep_sharing_allowed; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int ,int ,int ) ;
 int FUNC_5 (int *,int*,int ,int ,int) ;
 int FUNC_6 (int **,int ,int ,int ,int ,int *) ;
 int FUNC_7 (char const*,int ,int *) ;
 int FUNC_8 (int,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_fs_x__data_t *VAR_26,
            const char *VAR_27,
            apr_pool_t *VAR_28,
            apr_pool_t *VAR_29)
{
  svn_config_t *VAR_30;
  apr_int64_t VAR_31;

  FUNC_2(FUNC_6(&VAR_30,
                           FUNC_7(VAR_27, VAR_18, VAR_29),
                           VAR_17, VAR_17, VAR_17, VAR_29));


  FUNC_2(FUNC_4(VAR_30, &VAR_26->rep_sharing_allowed,
                              VAR_16,
                              VAR_3, VAR_25));


  FUNC_2(FUNC_5(VAR_30, &VAR_26->max_deltification_walk,
                               VAR_13,
                               VAR_6,
                               VAR_22));
  FUNC_2(FUNC_5(VAR_30, &VAR_26->max_linear_deltification,
                               VAR_13,
                               VAR_7,
                               VAR_23));
  FUNC_2(FUNC_5(VAR_30, &VAR_31,
                               VAR_13,
                               VAR_1,
                               VAR_19));
  VAR_26->delta_compression_level
    = (int)FUNC_1(FUNC_0(VAR_21, VAR_31),
                VAR_20);


  FUNC_2(FUNC_4(VAR_30, &VAR_26->compress_packed_revprops,
                              VAR_15,
                              VAR_2,
                              VAR_25));
  FUNC_2(FUNC_5(VAR_30, &VAR_26->revprop_pack_size,
                               VAR_15,
                               VAR_10,
                               VAR_26->compress_packed_revprops
                                   ? 0x100
                                   : 0x40));

  VAR_26->revprop_pack_size *= 1024;


  FUNC_2(FUNC_5(VAR_30, &VAR_26->block_size,
                               VAR_14,
                               VAR_0,
                               64));
  FUNC_2(FUNC_5(VAR_30, &VAR_26->l2p_page_size,
                               VAR_14,
                               VAR_5,
                               0x2000));
  FUNC_2(FUNC_5(VAR_30, &VAR_26->p2l_page_size,
                               VAR_14,
                               VAR_8,
                               0x400));




  FUNC_2(FUNC_8(VAR_26->block_size, 0x400,
                            VAR_0, VAR_29));
  FUNC_2(FUNC_8(VAR_26->p2l_page_size, 0x400,
                            VAR_8, VAR_29));
  FUNC_2(FUNC_8(VAR_26->l2p_page_size, sizeof(apr_off_t),
                            VAR_5, VAR_29));


  VAR_26->block_size *= 0x400;
  VAR_26->p2l_page_size *= 0x400;



  FUNC_2(FUNC_4(VAR_30, &VAR_26->pack_after_commit,
                              VAR_12,
                              VAR_9,
                              VAR_17));


  FUNC_2(FUNC_3(&VAR_26->memcache, VAR_30,
                                               VAR_28, VAR_29));

  FUNC_2(FUNC_4(VAR_30, &VAR_26->fail_stop,
                              VAR_11, VAR_4,
                              VAR_17));

  return VAR_24;
}
