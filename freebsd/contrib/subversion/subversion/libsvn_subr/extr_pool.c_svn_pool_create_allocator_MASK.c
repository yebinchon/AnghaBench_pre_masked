
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_boolean_t ;
typedef int apr_thread_mutex_t ;
typedef int apr_pool_t ;
typedef int apr_allocator_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int **,int ,int *) ;
 int * FUNC_8 (int *,int *) ;

apr_allocator_t *
FUNC_9(svn_boolean_t VAR_3)
{
  apr_allocator_t *VAR_4;
  apr_pool_t *VAR_5;




  if (FUNC_2(&VAR_4))
    FUNC_1(VAR_1);

  FUNC_3(VAR_4, VAR_2);



  VAR_5 = FUNC_8(((void*)0), VAR_4);
  FUNC_5(VAR_4, VAR_5);
  FUNC_0(VAR_4 != ((void*)0));

  return VAR_4;
}
