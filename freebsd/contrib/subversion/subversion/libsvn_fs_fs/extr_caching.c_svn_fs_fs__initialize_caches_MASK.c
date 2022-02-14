
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int window_cache_key_t ;
typedef int svn_revnum_t ;
typedef int svn_membuffer_t ;
struct TYPE_6__ {int pool; int path; int uuid; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__page_cache_key_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int pair_cache_key_t ;
struct TYPE_7__ {int fail_stop; int * p2l_page_cache; int * p2l_header_cache; int * l2p_page_cache; int * l2p_header_cache; int * combined_window_cache; int * txdelta_window_cache; int * raw_window_cache; int * properties_cache; int * mergeinfo_existence_cache; int * mergeinfo_cache; int * fulltext_cache; int * memcache; int * revprop_cache; int * changes_cache; int * rep_header_cache; int * node_revision_cache; int * packed_offset_cache; int * dir_cache; int dag_node_cache; int * rev_node_cache; int * rev_root_id_cache; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 char* FUNC_2 (int *,char const*,char const*,char*,...) ;
 int FUNC_3 (int **,int *,int *,int,int,int *,int *,int,char*,int ,int,TYPE_1__*,int,int ,int *) ;
 int VAR_8 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char const**,int*,int*,int*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int ) ;
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
 int * VAR_34 ;
 int * VAR_35 ;
 int * VAR_36 ;
 int * VAR_37 ;
 int * VAR_38 ;
 int * VAR_39 ;
 int * VAR_40 ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_41,
                             apr_pool_t *VAR_42)
{
  fs_fs_data_t *VAR_43 = VAR_41->fsap_data;
  const char *VAR_44 = FUNC_2(VAR_42,
                                   "fsfs:", VAR_41->uuid,
                                   "/", FUNC_4(VAR_41->path, VAR_42),
                                   ":",
                                   VAR_5);
  svn_membuffer_t *VAR_45;
  svn_boolean_t VAR_46 = VAR_43->fail_stop;
  svn_boolean_t VAR_47;
  svn_boolean_t VAR_48;
  svn_boolean_t VAR_49;
  const char *VAR_50;
  svn_boolean_t VAR_51;


  FUNC_0(FUNC_5(&VAR_50,
                      &VAR_47,
                      &VAR_48,
                      &VAR_49,
                      VAR_41,
                      VAR_42));

  VAR_44 = FUNC_2(VAR_42, "ns:", VAR_50, ":", VAR_44, VAR_5);
  VAR_51 = FUNC_6(VAR_50) > 0;

  VAR_45 = FUNC_7();
  FUNC_0(FUNC_3(&(VAR_43->rev_root_id_cache),
                       ((void*)0),
                       VAR_45,
                       1, 50,
                       VAR_28,
                       VAR_13,
                       sizeof(svn_revnum_t),
                       FUNC_2(VAR_42, VAR_44, "RRI", VAR_5),
                       0,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));



  FUNC_0(FUNC_3(&(VAR_43->rev_node_cache),
                       ((void*)0),
                       VAR_45,
                       1, 8,
                       VAR_10,
                       VAR_9,
                       VAR_0,
                       FUNC_2(VAR_42, VAR_44, "DAG", VAR_5),
                       VAR_3,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));


  VAR_43->dag_node_cache = FUNC_8(VAR_41->pool);


  FUNC_0(FUNC_3(&(VAR_43->dir_cache),
                       ((void*)0),
                       VAR_45,
                       1, 8,
                       VAR_27,
                       VAR_12,
                       sizeof(pair_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "DIR", VAR_5),
                       VAR_2,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));



  FUNC_0(FUNC_3(&(VAR_43->packed_offset_cache),
                       ((void*)0),
                       VAR_45,
                       8, 1,
                       VAR_31,
                       VAR_16,
                       sizeof(svn_revnum_t),
                       FUNC_2(VAR_42, VAR_44, "PACK-MANIFEST",
                                   VAR_5),
                       VAR_2,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));


  FUNC_0(FUNC_3(&(VAR_43->node_revision_cache),
                       ((void*)0),
                       VAR_45,
                       2, 16,
                       VAR_33,
                       VAR_18,
                       sizeof(pair_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "NODEREVS", VAR_5),
                       VAR_2,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));


  FUNC_0(FUNC_3(&(VAR_43->rep_header_cache),
                       ((void*)0),
                       VAR_45,
                       1, 200,
                       VAR_38,
                       VAR_23,
                       sizeof(pair_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "REPHEADER", VAR_5),
                       VAR_1,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));


  FUNC_0(FUNC_3(&(VAR_43->changes_cache),
                       ((void*)0),
                       VAR_45,
                       1, 8,
                       VAR_26,
                       VAR_11,
                       sizeof(pair_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "CHANGES", VAR_5),
                       0,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));


  FUNC_0(FUNC_3(&(VAR_43->revprop_cache),
                       ((void*)0),
                       VAR_45,
                       8, 20,
                       VAR_39,
                       VAR_24,
                       sizeof(pair_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "REVPROP", VAR_5),
                       VAR_1,
                       VAR_6,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));


  if (VAR_48)
    {
      FUNC_0(FUNC_3(&(VAR_43->fulltext_cache),
                           VAR_43->memcache,
                           VAR_45,
                           0, 0,

                           ((void*)0), ((void*)0),
                           sizeof(pair_cache_key_t),
                           FUNC_2(VAR_42, VAR_44, "TEXT", VAR_5),
                           VAR_1,
                           VAR_51,
                           VAR_41,
                           VAR_46,
                           VAR_41->pool, VAR_42));

      FUNC_0(FUNC_3(&(VAR_43->mergeinfo_cache),
                           ((void*)0),
                           VAR_45,
                           0, 0,
                           VAR_32,
                           VAR_17,
                           VAR_0,
                           FUNC_2(VAR_42, VAR_44, "MERGEINFO",
                                       VAR_5),
                           0,
                           VAR_51,
                           VAR_41,
                           VAR_46,
                           VAR_41->pool, VAR_42));

      FUNC_0(FUNC_3(&(VAR_43->mergeinfo_existence_cache),
                           ((void*)0),
                           VAR_45,
                           0, 0,

                           ((void*)0), ((void*)0),
                           VAR_0,
                           FUNC_2(VAR_42, VAR_44, "HAS_MERGEINFO",
                                       VAR_5),
                           0,
                           VAR_51,
                           VAR_41,
                           VAR_46,
                           VAR_41->pool, VAR_42));
    }
  else
    {
      VAR_43->fulltext_cache = ((void*)0);
      VAR_43->mergeinfo_cache = ((void*)0);
      VAR_43->mergeinfo_existence_cache = ((void*)0);
    }


  if (VAR_49)
    {
      FUNC_0(FUNC_3(&(VAR_43->properties_cache),
                           ((void*)0),
                           VAR_45,
                           0, 0,
                           VAR_36,
                           VAR_21,
                           sizeof(pair_cache_key_t),
                           FUNC_2(VAR_42, VAR_44, "PROP",
                                       VAR_5),
                           VAR_1,
                           VAR_51,
                           VAR_41,
                           VAR_46,
                           VAR_41->pool, VAR_42));
    }
  else
    {
      VAR_43->properties_cache = ((void*)0);
    }


  if (VAR_47)
    {
      FUNC_0(FUNC_3(&(VAR_43->raw_window_cache),
                           ((void*)0),
                           VAR_45,
                           0, 0,
                           VAR_37,
                           VAR_22,
                           sizeof(window_cache_key_t),
                           FUNC_2(VAR_42, VAR_44, "RAW_WINDOW",
                                       VAR_5),
                           VAR_3,
                           VAR_51,
                           VAR_41,
                           VAR_46,
                           VAR_41->pool, VAR_42));

      FUNC_0(FUNC_3(&(VAR_43->txdelta_window_cache),
                           ((void*)0),
                           VAR_45,
                           0, 0,
                           VAR_40,
                           VAR_25,
                           sizeof(window_cache_key_t),
                           FUNC_2(VAR_42, VAR_44, "TXDELTA_WINDOW",
                                       VAR_5),
                           VAR_3,
                           VAR_51,
                           VAR_41,
                           VAR_46,
                           VAR_41->pool, VAR_42));

      FUNC_0(FUNC_3(&(VAR_43->combined_window_cache),
                           ((void*)0),
                           VAR_45,
                           0, 0,

                           ((void*)0), ((void*)0),
                           sizeof(window_cache_key_t),
                           FUNC_2(VAR_42, VAR_44, "COMBINED_WINDOW",
                                       VAR_5),
                           VAR_3,
                           VAR_51,
                           VAR_41,
                           VAR_46,
                           VAR_41->pool, VAR_42));
    }
  else
    {
      VAR_43->txdelta_window_cache = ((void*)0);
      VAR_43->combined_window_cache = ((void*)0);
    }

  FUNC_0(FUNC_3(&(VAR_43->l2p_header_cache),
                       ((void*)0),
                       VAR_45,
                       8, 16,



                       VAR_29,
                       VAR_14,
                       sizeof(pair_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "L2P_HEADER",
                                   (char *)((void*)0)),
                       VAR_2,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));
  FUNC_0(FUNC_3(&(VAR_43->l2p_page_cache),
                       ((void*)0),
                       VAR_45,
                       8, 16,



                       VAR_30,
                       VAR_15,
                       sizeof(svn_fs_fs__page_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "L2P_PAGE",
                                   (char *)((void*)0)),
                       VAR_2,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));
  FUNC_0(FUNC_3(&(VAR_43->p2l_header_cache),
                       ((void*)0),
                       VAR_45,
                       4, 1,
                       VAR_34,
                       VAR_19,
                       sizeof(pair_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "P2L_HEADER",
                                   (char *)((void*)0)),
                       VAR_2,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));
  FUNC_0(FUNC_3(&(VAR_43->p2l_page_cache),
                       ((void*)0),
                       VAR_45,
                       4, 1,
                       VAR_35,
                       VAR_20,
                       sizeof(svn_fs_fs__page_cache_key_t),
                       FUNC_2(VAR_42, VAR_44, "P2L_PAGE",
                                   (char *)((void*)0)),
                       VAR_2,
                       VAR_51,
                       VAR_41,
                       VAR_46,
                       VAR_41->pool, VAR_42));

  return VAR_4;
}
