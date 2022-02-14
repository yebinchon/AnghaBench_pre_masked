
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_4__ {int db; int local_abspath; int wri_abspath; } ;
typedef TYPE_1__ merge_target_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const**,TYPE_1__ const*,int ,int ,int ,void*,int *,int *) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const**,char const**,int ,int *) ;
 int FUNC_4 (char const*,char const*,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,char const**,char const*,int ,int *,int *) ;
 int FUNC_6 (int *,char const**,char const*,char const*,char const*,int ,int *,int *) ;
 int FUNC_7 (char const**,int ,int ,int *,int *) ;
 int FUNC_8 (char const**,int ,int ,int *,int *) ;
 int FUNC_9 (int **,int ,int ,char const*,char const*,int *,int *) ;
 int FUNC_10 (int **,int ,char const*,char const*,int *,int *) ;
 int * FUNC_11 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_skel_t **VAR_3,
                         const char **VAR_4,
                         const char **VAR_5,
                         const char **VAR_6,
                         const merge_target_t *VAR_7,
                         const char *VAR_8,
                         const char *VAR_9,
                         const char *VAR_10,
                         const char *VAR_11,
                         const char *VAR_12,
                         const char *VAR_13,
                         svn_cancel_func_t VAR_14,
                         void *VAR_15,
                         apr_pool_t *VAR_16,
                         apr_pool_t *VAR_17)
{
  const char *VAR_18, *VAR_19, *VAR_20;
  const char *VAR_21, *VAR_22;
  const char *VAR_23, *VAR_24;
  svn_skel_t *VAR_25, *VAR_26 = ((void*)0);

  *VAR_3 = ((void*)0);

  FUNC_3(&VAR_21, &VAR_22, VAR_7->local_abspath,
                   VAR_17);

  FUNC_0(FUNC_7(&VAR_23, VAR_7->db, VAR_7->wri_abspath,
                                VAR_17, VAR_17));
  FUNC_0(FUNC_8(&VAR_24, VAR_7->db,
                                         VAR_7->wri_abspath,
                                         VAR_17, VAR_17));




  FUNC_0(FUNC_6(
            ((void*)0), VAR_4, VAR_21, VAR_22, VAR_10,
            VAR_2, VAR_16, VAR_17));
  FUNC_0(FUNC_6(
            ((void*)0), VAR_5, VAR_21, VAR_22, VAR_11,
            VAR_2, VAR_16, VAR_17));
  FUNC_0(FUNC_6(
            ((void*)0), VAR_6, VAR_21, VAR_22, VAR_12,
            VAR_2, VAR_16, VAR_17));
  if (! FUNC_2(VAR_23, VAR_8))
    {
      FUNC_0(FUNC_5(((void*)0), &VAR_18, VAR_24,
                                       VAR_2,
                                       VAR_17, VAR_17));
      FUNC_0(FUNC_4(VAR_8, VAR_18, VAR_1, VAR_17));


      FUNC_0(FUNC_10(&VAR_25, VAR_7->db, VAR_23,
                                           VAR_18,
                                           VAR_16, VAR_17));

      VAR_26 = FUNC_11(VAR_26, VAR_25, VAR_16);
    }
  else
    VAR_18 = VAR_8;

  if (! FUNC_2(VAR_23, VAR_9))
    {
      FUNC_0(FUNC_5(((void*)0), &VAR_19, VAR_24,
                                       VAR_2,
                                       VAR_17, VAR_17));
      FUNC_0(FUNC_4(VAR_9, VAR_19, VAR_1, VAR_17));


      FUNC_0(FUNC_10(&VAR_25, VAR_7->db, VAR_23,
                                           VAR_19,
                                           VAR_16, VAR_17));

      VAR_26 = FUNC_11(VAR_26, VAR_25, VAR_16);
    }
  else
    VAR_19 = VAR_9;
  FUNC_0(FUNC_9(&VAR_25,
                                                VAR_7->db, VAR_7->local_abspath,
                                                VAR_18, *VAR_4,
                                                VAR_16, VAR_17));
  *VAR_3 = FUNC_11(*VAR_3, VAR_25, VAR_16);

  FUNC_0(FUNC_9(&VAR_25,
                                                VAR_7->db, VAR_7->local_abspath,
                                                VAR_19, *VAR_5,
                                                VAR_16, VAR_17));
  *VAR_3 = FUNC_11(*VAR_3, VAR_25, VAR_16);



  FUNC_0(FUNC_1(&VAR_20, VAR_7, VAR_1,
                              VAR_7->local_abspath,
                              VAR_14, VAR_15,
                              VAR_17, VAR_17));

  FUNC_0(FUNC_9(&VAR_25,
                                                VAR_7->db, VAR_7->local_abspath,
                                                VAR_20,
                                                *VAR_6,
                                                VAR_16, VAR_17));
  *VAR_3 = FUNC_11(*VAR_3, VAR_25, VAR_16);


  FUNC_0(FUNC_10(&VAR_25, VAR_7->db, VAR_23,
                                       VAR_20,
                                       VAR_16, VAR_17));
  *VAR_3 = FUNC_11(*VAR_3, VAR_25, VAR_16);

  *VAR_3 = FUNC_11(*VAR_3, VAR_26, VAR_16);

  return VAR_0;
}
