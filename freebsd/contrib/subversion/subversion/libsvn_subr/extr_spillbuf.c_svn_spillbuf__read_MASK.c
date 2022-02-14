
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct memblock_t* out_for_reading; } ;
typedef TYPE_1__ svn_spillbuf_t ;
typedef int svn_error_t ;
struct memblock_t {char* data; int size; } ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (struct memblock_t**,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,struct memblock_t*) ;

svn_error_t *
FUNC_4(const char **VAR_1,
                   apr_size_t *VAR_2,
                   svn_spillbuf_t *VAR_3,
                   apr_pool_t *VAR_4)
{
  struct memblock_t *VAR_5;


  FUNC_0(FUNC_1(((void*)0), VAR_3, VAR_4));

  FUNC_0(FUNC_2(&VAR_5, VAR_3, VAR_4));
  if (VAR_5 == ((void*)0))
    {
      *VAR_1 = ((void*)0);
      *VAR_2 = 0;
    }
  else
    {
      *VAR_1 = VAR_5->data;
      *VAR_2 = VAR_5->size;


      if (VAR_3->out_for_reading != ((void*)0))
        FUNC_3(VAR_3, VAR_3->out_for_reading);


      VAR_3->out_for_reading = VAR_5;
    }

  return VAR_0;
}
