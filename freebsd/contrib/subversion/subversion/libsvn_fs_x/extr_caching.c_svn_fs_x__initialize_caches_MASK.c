
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_membuffer_t ;
typedef int svn_fs_x__window_cache_key_t ;
typedef int svn_fs_x__representation_cache_key_t ;
typedef int svn_fs_x__pair_cache_key_t ;
typedef int svn_fs_x__page_cache_key_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_6__ {int fail_stop; int p2l_page_cache; int p2l_header_cache; int l2p_page_cache; int l2p_header_cache; int reps_container_cache; int changes_container_cache; int noderevs_container_cache; int combined_window_cache; int txdelta_window_cache; int revprop_cache; int properties_cache; int * memcache; int fulltext_cache; int changes_cache; int rep_header_cache; int node_revision_cache; int dir_cache; int dag_node_cache; int instance_id; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_7__ {int pool; int path; int uuid; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 char* FUNC_2 (int *,char const*,char const*,char*,...) ;
 int FUNC_3 (int *,int *,int *,int,int,int *,int *,int,char*,int ,int,TYPE_2__*,int,int,int ,int *) ;
 int VAR_7 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char const**,int*,int*,int*,int*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int ) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int * VAR_32 ;
 int * VAR_33 ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_34,
                            apr_pool_t *VAR_35)
{
  svn_fs_x__data_t *VAR_36 = VAR_34->fsap_data;
  const char *VAR_37 = FUNC_2(VAR_35,
                                   "fsx:", VAR_34->uuid,
                                   "--", VAR_36->instance_id,
                                   "/", FUNC_4(VAR_34->path,
                                                           VAR_35),
                                   ":",
                                   VAR_5);
  svn_membuffer_t *VAR_38;
  svn_boolean_t VAR_39 = VAR_36->fail_stop;
  svn_boolean_t VAR_40;
  svn_boolean_t VAR_41;
  svn_boolean_t VAR_42;
  svn_boolean_t VAR_43;
  const char *VAR_44;
  svn_boolean_t VAR_45;


  FUNC_0(FUNC_5(&VAR_44,
                      &VAR_40,
                      &VAR_41,
                      &VAR_42,
                      &VAR_43,
                      VAR_34,
                      VAR_35));

  VAR_37 = FUNC_2(VAR_35, "ns:", VAR_44, ":", VAR_37,
                       VAR_5);
  VAR_45 = FUNC_6(VAR_44) > 0;

  VAR_38 = FUNC_7();
  VAR_36->dag_node_cache = FUNC_8(VAR_34->pool);


  FUNC_0(FUNC_3(&(VAR_36->dir_cache),
                       ((void*)0),
                       VAR_38,
                       1024, 8,
                       VAR_23,
                       VAR_10,
                       sizeof(svn_fs_x__id_t),
                       FUNC_2(VAR_35, VAR_37, "DIR", VAR_5),
                       VAR_2,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));


  FUNC_0(FUNC_3(&(VAR_36->node_revision_cache),
                       ((void*)0),
                       VAR_38,
                       32, 32,
                       VAR_26,
                       VAR_13,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "NODEREVS",
                                   VAR_5),
                       VAR_2,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));


  FUNC_0(FUNC_3(&(VAR_36->rep_header_cache),
                       ((void*)0),
                       VAR_38,
                       1, 1000,
                       VAR_31,
                       VAR_18,
                       sizeof(svn_fs_x__representation_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "REPHEADER",
                                   VAR_5),
                       VAR_1,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));


  FUNC_0(FUNC_3(&(VAR_36->changes_cache),
                       ((void*)0),
                       VAR_38,
                       1, 8,
                       VAR_21,
                       VAR_8,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "CHANGES",
                                   VAR_5),
                       0,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));


  FUNC_0(FUNC_3(&(VAR_36->fulltext_cache),
                       VAR_36->memcache,
                       VAR_38,
                       0, 0,

                       ((void*)0), ((void*)0),
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "TEXT",
                                   VAR_5),
                       VAR_1,
                       VAR_45,
                       VAR_34,
                       VAR_39, !VAR_41,
                       VAR_34->pool, VAR_35));

  FUNC_0(FUNC_3(&(VAR_36->properties_cache),
                       ((void*)0),
                       VAR_38,
                       0, 0,
                       VAR_30,
                       VAR_17,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "PROP",
                                   VAR_5),
                       VAR_1,
                       VAR_45,
                       VAR_34,
                       VAR_39, !VAR_43,
                       VAR_34->pool, VAR_35));


  FUNC_0(FUNC_3(&(VAR_36->revprop_cache),
                       ((void*)0),
                       VAR_38,
                       0, 0,
                       VAR_30,
                       VAR_17,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "REVPROP",
                                   VAR_5),
                       VAR_1,
                       VAR_45,
                       VAR_34,
                       VAR_39, !VAR_42,
                       VAR_34->pool, VAR_35));


  FUNC_0(FUNC_3(&(VAR_36->txdelta_window_cache),
                       ((void*)0),
                       VAR_38,
                       0, 0,
                       VAR_33,
                       VAR_20,
                       sizeof(svn_fs_x__window_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "TXDELTA_WINDOW",
                                   VAR_5),
                       VAR_3,
                       VAR_45,
                       VAR_34,
                       VAR_39, !VAR_40,
                       VAR_34->pool, VAR_35));

  FUNC_0(FUNC_3(&(VAR_36->combined_window_cache),
                       ((void*)0),
                       VAR_38,
                       0, 0,

                       ((void*)0), ((void*)0),
                       sizeof(svn_fs_x__window_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "COMBINED_WINDOW",
                                   VAR_5),
                       VAR_3,
                       VAR_45,
                       VAR_34,
                       VAR_39, !VAR_40,
                       VAR_34->pool, VAR_35));


  FUNC_0(FUNC_3(&(VAR_36->noderevs_container_cache),
                       ((void*)0),
                       VAR_38,
                       16, 4,
                       VAR_27,
                       VAR_14,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "NODEREVSCNT",
                                   VAR_5),
                       VAR_2,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));
  FUNC_0(FUNC_3(&(VAR_36->changes_container_cache),
                       ((void*)0),
                       VAR_38,
                       0, 0,
                       VAR_22,
                       VAR_9,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "CHANGESCNT",
                                   VAR_5),
                       0,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));
  FUNC_0(FUNC_3(&(VAR_36->reps_container_cache),
                       ((void*)0),
                       VAR_38,
                       0, 0,
                       VAR_32,
                       VAR_19,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "REPSCNT",
                                   VAR_5),
                       0,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));


  FUNC_0(FUNC_3(&(VAR_36->l2p_header_cache),
                       ((void*)0),
                       VAR_38,
                       64, 16,

                       VAR_24,
                       VAR_11,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "L2P_HEADER",
                                   VAR_5),
                       VAR_2,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));
  FUNC_0(FUNC_3(&(VAR_36->l2p_page_cache),
                       ((void*)0),
                       VAR_38,
                       64, 16,

                       VAR_25,
                       VAR_12,
                       sizeof(svn_fs_x__page_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "L2P_PAGE",
                                   VAR_5),
                       VAR_2,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));
  FUNC_0(FUNC_3(&(VAR_36->p2l_header_cache),
                       ((void*)0),
                       VAR_38,
                       4, 1,
                       VAR_28,
                       VAR_15,
                       sizeof(svn_fs_x__pair_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "P2L_HEADER",
                                   VAR_5),
                       VAR_2,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));
  FUNC_0(FUNC_3(&(VAR_36->p2l_page_cache),
                       ((void*)0),
                       VAR_38,
                       4, 16,
                       VAR_29,
                       VAR_16,
                       sizeof(svn_fs_x__page_cache_key_t),
                       FUNC_2(VAR_35, VAR_37, "P2L_PAGE",
                                   VAR_5),
                       VAR_2,
                       VAR_45,
                       VAR_34,
                       VAR_39, VAR_0,
                       VAR_34->pool, VAR_35));

  return VAR_4;
}
