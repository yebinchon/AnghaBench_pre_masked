
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_membuffer_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_allocator_t ;
struct TYPE_4__ {scalar_t__ cache_size; } ;
struct TYPE_3__ {int single_threaded; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int *,int *,int *) ;
 TYPE_2__ VAR_3 ;
 int * FUNC_5 (int **,int ,int ,int ,int,int ,int *) ;
 TYPE_1__* FUNC_6 () ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_4, apr_pool_t *VAR_5)
{
  svn_membuffer_t **VAR_6 = VAR_4;
  svn_membuffer_t *VAR_7 = ((void*)0);




  apr_uint64_t VAR_8 = FUNC_0(VAR_3.cache_size,
                                (apr_uint64_t)VAR_1 / 2);


  if (VAR_8)
    {
      svn_error_t *VAR_9;


      apr_allocator_t *VAR_10 = ((void*)0);
      apr_pool_t *VAR_11 = ((void*)0);

      if (FUNC_1(&VAR_10))
        return VAR_2;
      FUNC_2(VAR_10, 1);





      FUNC_4(&VAR_11, ((void*)0), ((void*)0), VAR_10);
      if (VAR_11 == ((void*)0))
        return VAR_2;
      FUNC_3(VAR_10, VAR_11);

      VAR_9 = FUNC_5(
          &VAR_7,
          (apr_size_t)VAR_8,
          (apr_size_t)(VAR_8 / 5),
          0,
          ! FUNC_6()->single_threaded,
          VAR_0,
          VAR_11);




      if (VAR_9)
        {

          FUNC_8(VAR_11);


          VAR_3.cache_size = 0;

          return FUNC_7(VAR_9);
        }


      *VAR_6 = VAR_7;
    }

  return VAR_2;
}
