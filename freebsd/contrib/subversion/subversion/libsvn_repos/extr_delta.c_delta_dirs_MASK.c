
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_4__ {scalar_t__ kind; int name; int id; } ;
typedef TYPE_1__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct context {int ignore_ancestry; int source_root; int target_root; } ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int * VAR_0 ;
 int FUNC_3 (struct context*,void*,int ,char const*,char const*,scalar_t__,int *) ;
 int * FUNC_4 (int *,int *) ;
 TYPE_1__* FUNC_5 (int *,void const*,int ) ;
 int * FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 int VAR_1 ;
 int FUNC_10 (struct context*,void*,char const*,int *) ;
 int FUNC_11 (struct context*,char const*,char const*,int ,void*,int *) ;
 int FUNC_12 (struct context*,void*,int ,char const*,char const*,char const*,scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int **,int ,char const*,int *) ;
 int FUNC_15 (int *,void const*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 char* FUNC_19 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_20(struct context *VAR_5,
           void *VAR_6,
           svn_depth_t VAR_7,
           const char *VAR_8,
           const char *VAR_9,
           const char *VAR_10,
           apr_pool_t *VAR_11)
{
  apr_hash_t *VAR_12 = 0, *VAR_13 = 0;
  apr_hash_index_t *VAR_14;
  apr_pool_t *VAR_15;

  FUNC_2(VAR_9);


  FUNC_1(FUNC_11(VAR_5, VAR_8, VAR_9,
                          VAR_1, VAR_6, VAR_11));


  FUNC_1(FUNC_14(&VAR_13, VAR_5->target_root,
                             VAR_9, VAR_11));
  if (VAR_8)
    FUNC_1(FUNC_14(&VAR_12, VAR_5->source_root,
                               VAR_8, VAR_11));


  VAR_15 = FUNC_17(VAR_11);
  for (VAR_14 = FUNC_4(VAR_11, VAR_13); VAR_14; VAR_14 = FUNC_6(VAR_14))
    {
      const void *VAR_16 = FUNC_7(VAR_14);
      apr_ssize_t VAR_17 = FUNC_8(VAR_14);
      const svn_fs_dirent_t *VAR_18 = FUNC_9(VAR_14);
      const svn_fs_dirent_t *VAR_19;
      const char *VAR_20;
      const char *VAR_21;
      const char *VAR_22;
      svn_node_kind_t VAR_23;


      FUNC_16(VAR_15);

      VAR_23 = VAR_18->kind;
      VAR_20 = FUNC_19(VAR_9, VAR_18->name, VAR_15);
      VAR_21 = FUNC_19(VAR_10, VAR_18->name, VAR_15);



      if (VAR_12 && ((VAR_19 = FUNC_5(VAR_12, VAR_16, VAR_17)) != 0))
        {
          svn_node_kind_t VAR_24;

          VAR_22 = FUNC_19(VAR_8, VAR_18->name, VAR_15);
          VAR_24 = VAR_19->kind;

          if (VAR_7 == VAR_3
              || VAR_24 != VAR_4
              || (VAR_24 == VAR_4
                  && VAR_7 == VAR_2))
            {
              int VAR_25 = FUNC_13(VAR_19->id, VAR_18->id);
              if (VAR_25 == 0)
                {

                }
              else if ((VAR_24 != VAR_23)
                       || ((VAR_25 == -1) && (! VAR_5->ignore_ancestry)))
                {
                  FUNC_1(FUNC_10(VAR_5, VAR_6, VAR_21, VAR_15));
                  FUNC_1(FUNC_3(VAR_5, VAR_6,
                                          FUNC_0(VAR_7),
                                          VAR_20, VAR_21, VAR_23,
                                          VAR_15));
                }
              else
                {
                  FUNC_1(FUNC_12(VAR_5, VAR_6,
                                              FUNC_0(VAR_7),
                                              VAR_22, VAR_20,
                                              VAR_21, VAR_23,
                                              VAR_15));
                }
            }


          FUNC_15(VAR_12, VAR_16, ((void*)0));
        }
      else
        {
          if (VAR_7 == VAR_3
              || VAR_23 != VAR_4
              || (VAR_23 == VAR_4
                  && VAR_7 == VAR_2))
            {
              FUNC_1(FUNC_3(VAR_5, VAR_6,
                                      FUNC_0(VAR_7),
                                      VAR_20, VAR_21, VAR_23,
                                      VAR_15));
            }
        }
    }



  if (VAR_12)
    {
      for (VAR_14 = FUNC_4(VAR_11, VAR_12); VAR_14; VAR_14 = FUNC_6(VAR_14))
        {
          const svn_fs_dirent_t *VAR_26 = FUNC_9(VAR_14);
          const char *VAR_27;
          svn_node_kind_t VAR_28;


          FUNC_16(VAR_15);

          VAR_28 = VAR_26->kind;
          VAR_27 = FUNC_19(VAR_10, VAR_26->name, VAR_15);


          if (VAR_7 == VAR_3
              || VAR_28 != VAR_4
              || (VAR_28 == VAR_4
                  && VAR_7 == VAR_2))
            {
              FUNC_1(FUNC_10(VAR_5, VAR_6, VAR_27, VAR_15));
            }
        }
    }


  FUNC_18(VAR_15);

  return VAR_0;
}
