
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


struct TYPE_19__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_skel_t ;
struct TYPE_20__ {TYPE_4__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_21__ {scalar_t__ kind; int path; } ;
typedef TYPE_3__ change_t ;
struct TYPE_22__ {TYPE_15__* changes; } ;
typedef TYPE_4__ base_fs_data_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_23__ {int size; int data; } ;
struct TYPE_18__ {int (* cursor ) (TYPE_15__*,int ,int **,int ) ;} ;
typedef TYPE_5__ DBT ;
typedef int DBC ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,void const*,int ,int *) ;
 int FUNC_8 (int *,void const**,int *,int *) ;
 int * FUNC_9 (int *,int *,TYPE_3__*) ;
 int FUNC_10 (TYPE_15__*,int ,int **,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_5__*,TYPE_5__*,int ) ;
 int * FUNC_13 (int ,int *,int ,char const*) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_3__**,int *,int *) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*,char const*) ;
 int FUNC_18 (TYPE_5__*,int *) ;
 int FUNC_19 (TYPE_1__*,char*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_20 (int ,void const*) ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int * FUNC_24 (int ,int ,int *) ;

svn_error_t *
FUNC_25(apr_hash_t **VAR_7,
                          svn_fs_t *VAR_8,
                          const char *VAR_9,
                          trail_t *VAR_10,
                          apr_pool_t *VAR_11)
{
  base_fs_data_t *VAR_12 = VAR_8->fsap_data;
  DBC *VAR_13;
  DBT VAR_14, VAR_15;
  int VAR_16 = 0, VAR_17 = 0;
  svn_error_t *VAR_18 = VAR_4;
  apr_hash_t *VAR_19 = FUNC_5(VAR_11);
  apr_pool_t *VAR_20 = FUNC_22(VAR_11);
  apr_pool_t *VAR_21 = FUNC_22(VAR_11);
  apr_hash_t *VAR_22 = FUNC_5(VAR_20);



  FUNC_19(VAR_10, "changes", "cursor");
  FUNC_2(FUNC_0(VAR_8, FUNC_1("creating cursor for reading changes"),
                   VAR_12->changes->cursor(VAR_12->changes, VAR_10->db_txn,
                                        &VAR_13, 0)));


  FUNC_17(&VAR_14, VAR_9);
  FUNC_16(&VAR_15);
  VAR_16 = FUNC_12(VAR_13, &VAR_14, &VAR_15, VAR_2);
  if (! VAR_16)
    FUNC_18(&VAR_15, VAR_11);

  while (! VAR_16)
    {
      change_t *VAR_23;
      svn_skel_t *VAR_24;


      FUNC_21(VAR_21);



      VAR_24 = FUNC_24(VAR_15.data, VAR_15.size, VAR_21);
      if (! VAR_24)
        {
          VAR_18 = FUNC_13(VAR_3, ((void*)0),
                                  FUNC_3("Error reading changes for key '%s'"),
                                  VAR_9);
          goto cleanup;
        }
      VAR_18 = FUNC_15(&VAR_23, VAR_24, VAR_21);
      if (VAR_18)
        goto cleanup;


      VAR_18 = FUNC_9(VAR_19, VAR_22, VAR_23);
      if (VAR_18)
        goto cleanup;
      if ((VAR_23->kind == VAR_5)
          || (VAR_23->kind == VAR_6))
        {
          apr_hash_index_t *VAR_25;

          for (VAR_25 = FUNC_4(VAR_21, VAR_19);
               VAR_25;
               VAR_25 = FUNC_6(VAR_25))
            {

              const void *VAR_26;
              apr_ssize_t VAR_27;
              const char *VAR_28;

              FUNC_8(VAR_25, &VAR_26, &VAR_27, ((void*)0));



              VAR_28 = FUNC_20(VAR_23->path, VAR_26);
              if (VAR_28 && *VAR_28)
                FUNC_7(VAR_19, VAR_26, VAR_27, ((void*)0));
            }
        }



      FUNC_16(&VAR_15);
      VAR_16 = FUNC_12(VAR_13, &VAR_14, &VAR_15, VAR_0);
      if (! VAR_16)
        FUNC_18(&VAR_15, VAR_11);
    }


  FUNC_23(VAR_21);
  FUNC_23(VAR_20);




  if (VAR_16 && (VAR_16 != VAR_1))
    VAR_18 = FUNC_0(VAR_8, FUNC_1("fetching changes"), VAR_16);

 cleanup:

  VAR_17 = FUNC_11(VAR_13);


  if (VAR_18)
    return FUNC_14(VAR_18);



  if (VAR_17)
    FUNC_2(FUNC_0(VAR_8, FUNC_1("closing changes cursor"), VAR_17));


  *VAR_7 = VAR_19;
  return VAR_4;
}
