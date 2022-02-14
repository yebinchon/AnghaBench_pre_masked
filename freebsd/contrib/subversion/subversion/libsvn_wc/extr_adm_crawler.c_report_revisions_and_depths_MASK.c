
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
struct TYPE_29__ {TYPE_3__* (* set_path ) (void*,char const*,int ,scalar_t__,int,int *,int *) ;TYPE_3__* (* link_path ) (void*,char const*,int ,int ,scalar_t__,int,int *,int *) ;TYPE_3__* (* delete_path ) (void*,char const*,int *) ;} ;
typedef TYPE_2__ svn_ra_reporter3_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_30__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_checksum_t ;
typedef TYPE_3__* (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
struct svn_wc__db_base_info_t {scalar_t__ status; char* repos_relpath; scalar_t__ depth; scalar_t__ kind; int revnum; TYPE_1__* lock; scalar_t__ update_root; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_28__ {int * token; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 struct svn_wc__db_base_info_t* FUNC_8 (int *) ;
 TYPE_3__* FUNC_9 (int *,char const*,scalar_t__,int,int,TYPE_3__* (*) (void*),void*,int ,void*,int *) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 TYPE_3__* FUNC_11 (void*,char const*,int ,scalar_t__,int,int *,int *) ;
 TYPE_3__* FUNC_12 (void*,char const*,int ,int ,scalar_t__,int,int *,int *) ;
 TYPE_3__* FUNC_13 (void*,char const*,int ,scalar_t__,int,int *,int *) ;
 TYPE_3__* FUNC_14 (void*,char const*,int *) ;
 TYPE_3__* FUNC_15 (void*,char const*,int *) ;
 TYPE_3__* FUNC_16 (void*,char const*,int ,int ,scalar_t__,int,int *,int *) ;
 TYPE_3__* FUNC_17 (void*,char const*,int ,scalar_t__,int,int *,int *) ;
 TYPE_3__* FUNC_18 (void*,char const*,int ,int ,scalar_t__,int,int *,int *) ;
 TYPE_3__* FUNC_19 (void*,char const*,int ,scalar_t__,int,int *,int *) ;
 TYPE_3__* FUNC_20 (void*,char const*,int ,int ,scalar_t__,int,int *,int *) ;
 TYPE_3__* FUNC_21 (void*,char const*,int ,scalar_t__,int,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 char* FUNC_22 (char const*,char const*,int *) ;
 int FUNC_23 (TYPE_3__*) ;
 int * FUNC_24 (int *,char const*) ;
 TYPE_3__* FUNC_25 (char const*,scalar_t__*,int *) ;
 TYPE_3__* FUNC_26 (int **,char const*,int,int *,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_27 (char const*,char*,int *) ;
 int FUNC_28 (int *) ;
 int * FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 void* FUNC_31 (char const*,char const*,int *) ;
 char* FUNC_32 (char const*,char*) ;
 TYPE_3__* FUNC_33 (int **,int *,char const*,int *,int *) ;
 TYPE_3__* FUNC_34 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static svn_error_t *
FUNC_35(svn_wc__db_t *VAR_19,
                            const char *VAR_20,
                            const char *VAR_21,
                            svn_revnum_t VAR_22,
                            const char *VAR_23,
                            const char *VAR_24,
                            svn_depth_t VAR_25,
                            const svn_ra_reporter3_t *VAR_26,
                            void *VAR_27,
                            svn_boolean_t VAR_28,
                            svn_depth_t VAR_29,
                            svn_boolean_t VAR_30,
                            svn_boolean_t VAR_31,
                            svn_boolean_t VAR_32,
                            svn_boolean_t VAR_33,
                            svn_cancel_func_t VAR_34,
                            void *VAR_35,
                            svn_wc_notify_func2_t VAR_36,
                            void *VAR_37,
                            apr_pool_t *VAR_38)
{
  apr_hash_t *VAR_39;
  apr_hash_t *VAR_40;
  apr_pool_t *VAR_41 = FUNC_29(VAR_38);
  apr_hash_index_t *VAR_42;
  svn_error_t *VAR_43;





  FUNC_2(FUNC_33(&VAR_39, VAR_19, VAR_20,
                                            VAR_38, VAR_41));

  if (VAR_28)
    {
      VAR_43 = FUNC_26(&VAR_40, VAR_20, VAR_2,
                                VAR_38, VAR_38);

      if (VAR_43 && (FUNC_0(VAR_43->apr_err)
                  || FUNC_4(VAR_43->apr_err)))
        {
          FUNC_23(VAR_43);



          VAR_28 = VAR_0;
          VAR_40 = ((void*)0);
        }
      else
        FUNC_2(VAR_43);
    }
  else
    VAR_40 = ((void*)0);




  for (VAR_42 = FUNC_5(VAR_38, VAR_39);
       VAR_42 != ((void*)0);
       VAR_42 = FUNC_6(VAR_42))
    {
      const char *VAR_44 = FUNC_7(VAR_42);
      const char *VAR_45;
      const char *VAR_46;
      svn_boolean_t VAR_47 = VAR_0;
      struct svn_wc__db_base_info_t *VAR_48 = FUNC_8(VAR_42);

      if (VAR_34)
        FUNC_2(VAR_34(VAR_35));



      FUNC_28(VAR_41);


      VAR_45 = FUNC_31(VAR_21, VAR_44, VAR_41);
      VAR_46 = FUNC_22(VAR_20, VAR_44, VAR_41);


      if (VAR_48->update_root)
        {
                                                                ;
          continue;
        }


      if (VAR_48->status == VAR_14)
        {
          if (VAR_30)
            {
              FUNC_2(VAR_26->set_path(VAR_27,
                                         VAR_45,
                                         VAR_22,
                                         VAR_4,
                                         VAR_0,
                                         ((void*)0),
                                         VAR_41));
            }
          else
            {


              if (! VAR_32)
                FUNC_2(VAR_26->delete_path(VAR_27,
                                              VAR_45, VAR_41));
            }
          continue;
        }


      if (VAR_48->status == VAR_18
          || VAR_48->status == VAR_17)
        {
          if (! VAR_32)
            FUNC_2(VAR_26->delete_path(VAR_27, VAR_45,
                                          VAR_41));
          continue;
        }


      if (VAR_28
          && FUNC_24(VAR_40, VAR_44) == ((void*)0))
        {
          svn_wc__db_status_t VAR_49;
          svn_node_kind_t VAR_50;
          const svn_checksum_t *VAR_51;
          svn_boolean_t VAR_52;

          FUNC_2(FUNC_34(&VAR_49, &VAR_50, ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       &VAR_51, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_52,
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       VAR_19, VAR_46, VAR_41, VAR_41));

          if ((VAR_49 == VAR_16
               || VAR_49 == VAR_13
               || VAR_49 == VAR_15)
              && (VAR_50 == VAR_9 || VAR_51))
            {
              svn_node_kind_t VAR_53;





              FUNC_2(FUNC_25(VAR_46, &VAR_53, VAR_41));

              if (VAR_53 == VAR_11)
                {
                  FUNC_2(FUNC_9(VAR_19, VAR_46, VAR_50,
                                       VAR_52, VAR_33,
                                       VAR_34, VAR_35,
                                       VAR_36, VAR_37, VAR_41));
                }
            }
        }


      if (!VAR_48->repos_relpath)
        {
          VAR_48->repos_relpath = FUNC_31(VAR_23, VAR_44,
                                                VAR_41);
        }
      else
        {
          const char *VAR_54
            = FUNC_32(VAR_23, VAR_48->repos_relpath);

          if (VAR_54 == ((void*)0) || FUNC_10(VAR_54, VAR_44) != 0)
            {
              VAR_47 = VAR_2;
            }
        }


      if (VAR_48->depth == VAR_8)
        VAR_48->depth = VAR_7;


      if (VAR_48->kind == VAR_10
          || VAR_48->kind == VAR_12)
        {
          if (VAR_32)
            {

              if (VAR_47)
                FUNC_2(VAR_26->link_path(VAR_27,
                                            VAR_45,
                                            FUNC_27(
                                                VAR_24,
                                                VAR_48->repos_relpath, VAR_41),
                                            VAR_48->revnum,
                                            VAR_48->depth,
                                            VAR_0,
                                            VAR_48->lock ? VAR_48->lock->token : ((void*)0),
                                            VAR_41));
              else
                FUNC_2(VAR_26->set_path(VAR_27,
                                           VAR_45,
                                           VAR_48->revnum,
                                           VAR_48->depth,
                                           VAR_0,
                                           VAR_48->lock ? VAR_48->lock->token : ((void*)0),
                                           VAR_41));
            }


          else if (VAR_47)
            FUNC_2(VAR_26->link_path(VAR_27,
                                        VAR_45,
                                        FUNC_27(
                                                VAR_24,
                                                VAR_48->repos_relpath, VAR_41),
                                        VAR_48->revnum,
                                        VAR_48->depth,
                                        VAR_0,
                                        VAR_48->lock ? VAR_48->lock->token : ((void*)0),
                                        VAR_41));


          else if (VAR_48->revnum != VAR_22
                   || VAR_48->lock
                   || VAR_25 == VAR_3)
            FUNC_2(VAR_26->set_path(VAR_27,
                                       VAR_45,
                                       VAR_48->revnum,
                                       VAR_48->depth,
                                       VAR_0,
                                       VAR_48->lock ? VAR_48->lock->token : ((void*)0),
                                       VAR_41));
        }


      else if (VAR_48->kind == VAR_9
               && (VAR_29 > VAR_5
                   || VAR_29 == VAR_8))
        {
          svn_boolean_t VAR_55;
          svn_boolean_t VAR_56;
          svn_depth_t VAR_57 = VAR_48->depth;

          VAR_55 = (VAR_48->status == VAR_15);
          VAR_56 = VAR_55;

          if (!FUNC_1(VAR_29))
            VAR_57 = VAR_3;
          if (VAR_55 && !FUNC_3(VAR_48->revnum))
            VAR_48->revnum = VAR_22;

          if (VAR_31
              && VAR_48->depth <= VAR_5
              && VAR_29 > VAR_48->depth)
            {
              VAR_56 = VAR_2;
            }

          if (VAR_32)
            {

              if (VAR_47)
                FUNC_2(VAR_26->link_path(VAR_27,
                                            VAR_45,
                                            FUNC_27(
                                                VAR_24,
                                                VAR_48->repos_relpath, VAR_41),
                                            VAR_48->revnum,
                                            VAR_57,
                                            VAR_56,
                                            VAR_48->lock ? VAR_48->lock->token
                                                      : ((void*)0),
                                            VAR_41));
              else
                FUNC_2(VAR_26->set_path(VAR_27,
                                           VAR_45,
                                           VAR_48->revnum,
                                           VAR_57,
                                           VAR_56,
                                           VAR_48->lock ? VAR_48->lock->token : ((void*)0),
                                           VAR_41));
            }
          else if (VAR_47)
            {

              FUNC_2(VAR_26->link_path(VAR_27,
                                          VAR_45,
                                          FUNC_27(
                                              VAR_24,
                                              VAR_48->repos_relpath, VAR_41),
                                          VAR_48->revnum,
                                          VAR_57,
                                          VAR_56,
                                          VAR_48->lock ? VAR_48->lock->token : ((void*)0),
                                          VAR_41));
            }
          else if (VAR_48->revnum != VAR_22
                   || VAR_48->lock
                   || VAR_55
                   || VAR_25 == VAR_3
                   || VAR_25 == VAR_5
                   || (VAR_25 == VAR_6
                       && VAR_48->depth != VAR_3)
                   || (VAR_48->depth < VAR_7
                       && FUNC_1(VAR_29)))
            {






              FUNC_2(VAR_26->set_path(VAR_27,
                                         VAR_45,
                                         VAR_48->revnum,
                                         VAR_57,
                                         VAR_56,
                                         VAR_48->lock ? VAR_48->lock->token : ((void*)0),
                                         VAR_41));
            }


          if (FUNC_1(VAR_29))
            {
              const char *VAR_58 = VAR_48->repos_relpath;

              if (VAR_58 == ((void*)0))
                {
                  VAR_58 = FUNC_31(VAR_23, VAR_44,
                                                   VAR_41);
                }

              FUNC_2(FUNC_35(VAR_19,
                                                  VAR_46,
                                                  VAR_45,
                                                  VAR_48->revnum,
                                                  VAR_58,
                                                  VAR_24,
                                                  VAR_48->depth,
                                                  VAR_26, VAR_27,
                                                  VAR_28, VAR_29,
                                                  VAR_30,
                                                  VAR_31,
                                                  VAR_56,
                                                  VAR_33,
                                                  VAR_34, VAR_35,
                                                  VAR_36, VAR_37,
                                                  VAR_41));
            }
        }
    }


  FUNC_30(VAR_41);

  return VAR_1;
}
