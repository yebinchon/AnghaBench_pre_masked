
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_33__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_34__ {TYPE_1__* vtable; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_35__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
struct TYPE_36__ {int has_props; int * last_author; int time; int created_rev; int size; scalar_t__ kind; } ;
typedef TYPE_5__ svn_dirent_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_32__ {TYPE_4__* (* stat ) (TYPE_3__*,char const*,int ,TYPE_5__**,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,char const*,int ,TYPE_5__**,int *) ;
 TYPE_5__* FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_4__*) ;
 void* FUNC_9 (int *,char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char const*,char const*,int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 TYPE_4__* FUNC_14 (TYPE_3__**,TYPE_3__*,char const*,int *,int *) ;
 TYPE_4__* FUNC_15 (TYPE_3__*,char const*,int ,scalar_t__*,int *) ;
 TYPE_4__* FUNC_16 (TYPE_3__*,int **,int *,int **,char*,int ,int ,int *) ;
 TYPE_4__* FUNC_17 (TYPE_3__*,char const**,int *) ;
 TYPE_4__* FUNC_18 (TYPE_3__*,char const**,int *) ;
 TYPE_4__* FUNC_19 (TYPE_3__*,int ,int **,int *) ;
 int FUNC_20 (char const*) ;
 TYPE_4__* FUNC_21 (int *,int ,int *) ;
 int FUNC_22 (char const**,char const**,char const*,int *) ;

svn_error_t *FUNC_23(svn_ra_session_t *VAR_7,
                         const char *VAR_8,
                         svn_revnum_t VAR_9,
                         svn_dirent_t **VAR_10,
                         apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12;
  FUNC_1(FUNC_20(VAR_8));
  VAR_12 = VAR_7->vtable->stat(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);



  if (VAR_12 && VAR_12->apr_err == VAR_1)
    {


      apr_pool_t *VAR_13 = FUNC_13(VAR_11);
      svn_node_kind_t VAR_14;

      FUNC_8(VAR_12);

      FUNC_0(FUNC_15(VAR_7, VAR_8, VAR_9, &VAR_14, VAR_13));

      if (VAR_14 != VAR_6)
        {
          const char *VAR_15;
          const char *VAR_16;

          FUNC_0(FUNC_17(VAR_7, &VAR_15,
                                         VAR_13));
          FUNC_0(FUNC_18(VAR_7, &VAR_16,
                                         VAR_13));

          if (!FUNC_10(VAR_8))
            VAR_16 = FUNC_11(VAR_16, VAR_8,
                                                      VAR_13);

          if (FUNC_5(VAR_16, VAR_15) != 0)
            {
              svn_ra_session_t *VAR_17;
              apr_hash_t *VAR_18;
              const char *VAR_19, *VAR_20;



              FUNC_22(&VAR_19, &VAR_20, VAR_16,
                            VAR_13);

              FUNC_0(FUNC_14(&VAR_17, VAR_7, VAR_19,
                                          VAR_13, VAR_13));


              FUNC_0(FUNC_16(VAR_17, &VAR_18, ((void*)0),
                                      ((void*)0), "", VAR_9, VAR_0,
                                      VAR_13));


              *VAR_10 = FUNC_9(VAR_18, VAR_20);

              if (*VAR_10)
                *VAR_10 = FUNC_7(*VAR_10, VAR_11);
            }
          else
            {
              apr_hash_t *VAR_21;
              const svn_string_t *VAR_22;





              *VAR_10 = FUNC_3(VAR_11, sizeof(**VAR_10));
              (*VAR_10)->kind = VAR_14;
              (*VAR_10)->size = VAR_2;

              FUNC_0(FUNC_16(VAR_7, ((void*)0), ((void*)0), &VAR_21,
                                      "", VAR_9, 0 ,
                                      VAR_13));
              (*VAR_10)->has_props = (FUNC_2(VAR_21) != 0);

              (*VAR_10)->created_rev = VAR_9;

              FUNC_0(FUNC_19(VAR_7, VAR_9, &VAR_21,
                                          VAR_13));

              VAR_22 = FUNC_9(VAR_21, VAR_5);
              if (VAR_22)
                FUNC_0(FUNC_21(&(*VAR_10)->time, VAR_22->data,
                                              VAR_13));

              VAR_22 = FUNC_9(VAR_21, VAR_4);
              (*VAR_10)->last_author = VAR_22 ? FUNC_4(VAR_11, VAR_22->data)
                                           : ((void*)0);
            }
        }
      else
        *VAR_10 = ((void*)0);

      FUNC_12(VAR_13);
    }
  else
    FUNC_0(VAR_12);

  return VAR_3;
}
