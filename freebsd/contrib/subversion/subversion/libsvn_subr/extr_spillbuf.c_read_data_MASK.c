
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ spill_size; scalar_t__ blocksize; scalar_t__ spill_start; int * spill; int memory_size; struct memblock_t* head; struct memblock_t* tail; } ;
typedef TYPE_1__ svn_spillbuf_t ;
typedef int svn_error_t ;
struct memblock_t {scalar_t__ size; int data; struct memblock_t* next; } ;
typedef scalar_t__ apr_uint64_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct memblock_t* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct memblock_t*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ,scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(struct memblock_t **VAR_1,
          svn_spillbuf_t *VAR_2,
          apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4;


  if (VAR_2->head != ((void*)0))
    {
      *VAR_1 = VAR_2->head;
      if (VAR_2->tail == *VAR_1)
        VAR_2->head = VAR_2->tail = ((void*)0);
      else
        VAR_2->head = (*VAR_1)->next;



      VAR_2->memory_size -= (*VAR_1)->size;

      return VAR_0;
    }


  if (VAR_2->spill == ((void*)0))
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }




  *VAR_1 = FUNC_1(VAR_2);


  if ((apr_uint64_t)VAR_2->spill_size < (apr_uint64_t)VAR_2->blocksize)
    (*VAR_1)->size = (apr_size_t)VAR_2->spill_size;
  else
    (*VAR_1)->size = VAR_2->blocksize;
  (*VAR_1)->next = ((void*)0);


  VAR_4 = FUNC_5(VAR_2->spill, (*VAR_1)->data, &(*VAR_1)->size,
                         VAR_3);
  if (VAR_4)
    {
      FUNC_2(VAR_2, *VAR_1);
      return FUNC_3(VAR_4);
    }


  VAR_2->spill_start += (*VAR_1)->size;


  if ((VAR_2->spill_size -= (*VAR_1)->size) == 0)
    {

      FUNC_0(FUNC_4(VAR_2->spill, VAR_3));
      VAR_2->spill = ((void*)0);
      VAR_2->spill_start = 0;
    }


  return VAR_0;
}
