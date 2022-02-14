
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_4__ {char const* repos_root_url; char const* repos_uuid; char const* repos_relpath; int const* work_items; int const* conflict; int * target; int * checksum; int depth; int * children; int revision; int kind; scalar_t__ status; } ;
typedef TYPE_1__ insert_base_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,char const*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int *,char const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const**,char const**,char const*,int *) ;
 char* FUNC_10 (char const*,char const*,int *) ;
 int FUNC_11 (char const*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (int **,char const**,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_wc__db_t *VAR_6,
                                 const char *VAR_7,
                                 const char *VAR_8,
                                 const char *VAR_9,
                                 const char *VAR_10,
                                 svn_revnum_t VAR_11,
                                 svn_node_kind_t VAR_12,
                                 svn_wc__db_status_t VAR_13,
                                 const svn_skel_t *VAR_14,
                                 const svn_skel_t *VAR_15,
                                 apr_pool_t *VAR_16)
{
  svn_wc__db_wcroot_t *VAR_17;
  const char *VAR_18;
  insert_base_baton_t VAR_19;
  const char *VAR_20, *VAR_21;

  FUNC_1(FUNC_8(VAR_7));
  FUNC_1(VAR_8 != ((void*)0));
  FUNC_1(FUNC_11(VAR_9, VAR_16));
  FUNC_1(VAR_10 != ((void*)0));
  FUNC_1(FUNC_2(VAR_11));
  FUNC_1(VAR_13 == VAR_5
                 || VAR_13 == VAR_3
                 || VAR_13 == VAR_4);






  FUNC_9(&VAR_20, &VAR_21, VAR_7, VAR_16);

  FUNC_0(FUNC_12(&VAR_17, &VAR_18, VAR_6,
                              VAR_20, VAR_16, VAR_16));
  FUNC_4(VAR_17);

  VAR_18 = FUNC_10(VAR_18, VAR_21, VAR_16);

  FUNC_5(&VAR_19);


  VAR_19.repos_root_url = VAR_9;
  VAR_19.repos_uuid = VAR_10;

  VAR_19.status = VAR_13;
  VAR_19.kind = VAR_12;
  VAR_19.repos_relpath = VAR_8;
  VAR_19.revision = VAR_11;


  VAR_19.children = ((void*)0);
  VAR_19.depth = VAR_2;
  VAR_19.checksum = ((void*)0);
  VAR_19.target = ((void*)0);

  VAR_19.conflict = VAR_14;
  VAR_19.work_items = VAR_15;

  FUNC_3(
            FUNC_7(&VAR_19, VAR_17, VAR_18, VAR_16),
            VAR_17);



  FUNC_0(FUNC_6(VAR_17, VAR_7, VAR_1,
                        VAR_16));

  return VAR_0;
}
