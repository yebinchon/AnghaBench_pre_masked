
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_spillbuf_t ;
typedef int * (* svn_spillbuf_read_t ) (scalar_t__*,void*,int ,int ,int *) ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct memblock_t {int size; int data; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,int *,int *) ;
 int FUNC_2 (struct memblock_t**,int *,int *) ;
 int FUNC_3 (int *,struct memblock_t*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

svn_error_t *
FUNC_8(svn_boolean_t *VAR_3,
                      svn_spillbuf_t *VAR_4,
                      svn_spillbuf_read_t VAR_5,
                      void *VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8 = VAR_0;
  apr_pool_t *VAR_9 = FUNC_6(VAR_7);

  *VAR_3 = VAR_0;

  while (VAR_2)
    {
      struct memblock_t *VAR_10;
      svn_error_t *VAR_11;
      svn_boolean_t VAR_12;

      FUNC_5(VAR_9);



      if (!VAR_8)
        FUNC_0(FUNC_1(&VAR_8, VAR_4, VAR_9));


      FUNC_0(FUNC_2(&VAR_10, VAR_4, VAR_9));
      if (VAR_10 == ((void*)0))
        {
          *VAR_3 = VAR_2;
          break;
        }

      VAR_11 = VAR_5(&VAR_12, VAR_6, VAR_10->data, VAR_10->size, VAR_9);

      FUNC_3(VAR_4, VAR_10);

      if (VAR_11)
        return FUNC_4(VAR_11);


      if (VAR_12)
        break;
    }

  FUNC_7(VAR_9);
  return VAR_1;
}
