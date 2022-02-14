
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * pool; int abspath; int * db; scalar_t__ closed; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
struct TYPE_10__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int **,int *,int ,scalar_t__,int *,int *) ;
 TYPE_2__* FUNC_7 (int *,int ,int *) ;
 TYPE_2__* FUNC_8 (int *,int **,int *,int ,int ,int *,int *) ;

__attribute__((used)) static apr_status_t
FUNC_9(void *VAR_3)
{
  svn_wc_adm_access_t *VAR_4 = VAR_3;
  apr_uint64_t VAR_5;
  svn_skel_t *VAR_6;
  svn_error_t *VAR_7;

  if (VAR_4->closed)
    return VAR_0;


  if (FUNC_5(VAR_4->db))
    {
      apr_pool_t *VAR_8;
      svn_wc__db_t *VAR_9;

      VAR_4->closed = VAR_2;



      if (!FUNC_4(VAR_4->abspath, VAR_4->pool))
        return VAR_0;







      VAR_8 = FUNC_2(VAR_4->pool);

      VAR_7 = FUNC_6(&VAR_9, ((void*)0) , VAR_1, VAR_2,
                            VAR_8, VAR_8);
      if (!VAR_7)
        {
          VAR_7 = FUNC_8(&VAR_5, &VAR_6, VAR_9, VAR_4->abspath, 0,
                                         VAR_8, VAR_8);
          if (!VAR_7 && VAR_6 == ((void*)0))
            {


              VAR_7 = FUNC_7(VAR_9, VAR_4->abspath, VAR_8);
            }
        }
      FUNC_1(VAR_7);


      FUNC_3(VAR_8);

      return VAR_0;
    }


  VAR_7 = FUNC_8(&VAR_5, &VAR_6, VAR_4->db, VAR_4->abspath, 0,
                                 VAR_4->pool, VAR_4->pool);


  if (!VAR_7)
    VAR_7 = FUNC_0(VAR_4,
                       VAR_6 != ((void*)0) ,
                       VAR_4->pool);

  if (VAR_7)
    {
      apr_status_t VAR_10 = VAR_7->apr_err;
      FUNC_1(VAR_7);
      return VAR_10;
    }

  return VAR_0;
}
