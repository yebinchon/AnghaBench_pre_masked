
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ maxsize; scalar_t__ memory_size; scalar_t__ spill_start; scalar_t__ blocksize; struct memblock_t* tail; struct memblock_t* head; int spill_size; int * spill; scalar_t__ spill_all_contents; int pool; scalar_t__ delete_on_close; int dirpath; int filename; } ;
typedef TYPE_1__ svn_spillbuf_t ;
typedef int svn_error_t ;
struct memblock_t {char const* data; scalar_t__ size; struct memblock_t* next; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct memblock_t* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,char const*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int *,int *) ;
 int FUNC_4 (int *,char const*,scalar_t__,int *,int *) ;
 int FUNC_5 (int **,int *,int ,int ,int ,int *) ;

svn_error_t *
FUNC_6(svn_spillbuf_t *VAR_4,
                    const char *VAR_5,
                    apr_size_t VAR_6,
                    apr_pool_t *VAR_7)
{
  struct memblock_t *VAR_8;




  if (VAR_4->spill == ((void*)0)
      && ((VAR_4->maxsize - VAR_4->memory_size) < VAR_6))
    {
      FUNC_0(FUNC_5(&VAR_4->spill,
                                       &VAR_4->filename,
                                       VAR_4->dirpath,
                                       (VAR_4->delete_on_close
                                        ? VAR_3
                                        : VAR_2),
                                       VAR_4->pool, VAR_7));


      if (VAR_4->spill_all_contents)
        {
          VAR_8 = VAR_4->head;
          while (VAR_8 != ((void*)0))
            {
              FUNC_0(FUNC_4(VAR_4->spill, VAR_8->data, VAR_8->size,
                                             ((void*)0), VAR_7));
              VAR_8 = VAR_8->next;
            }







          VAR_4->spill_start = VAR_4->memory_size;
        }
    }




  if (VAR_4->spill != ((void*)0))
    {
      apr_off_t VAR_9 = 0;



      FUNC_0(FUNC_3(VAR_4->spill,
                               VAR_0, &VAR_9,
                               VAR_7));

      FUNC_0(FUNC_4(VAR_4->spill, VAR_5, VAR_6,
                                     ((void*)0), VAR_7));
      VAR_4->spill_size += VAR_6;

      return VAR_1;
    }

  while (VAR_6 > 0)
    {
      apr_size_t VAR_10;

      if (VAR_4->tail == ((void*)0) || VAR_4->tail->size == VAR_4->blocksize)
        {


          VAR_8 = FUNC_1(VAR_4);
          VAR_8->size = 0;
          VAR_8->next = ((void*)0);
        }
      else
        {
          VAR_8 = VAR_4->tail;
        }


      VAR_10 = VAR_4->blocksize - VAR_8->size;
      if (VAR_10 > VAR_6)
        VAR_10 = VAR_6;


      FUNC_2(&VAR_8->data[VAR_8->size], VAR_5, VAR_10);
      VAR_8->size += VAR_10;
      VAR_5 += VAR_10;
      VAR_6 -= VAR_10;




      VAR_4->memory_size += VAR_10;



      if (VAR_4->tail == ((void*)0))
        {
          VAR_4->head = VAR_8;
          VAR_4->tail = VAR_8;
        }
      else if (VAR_8 != VAR_4->tail)
        {
          VAR_4->tail->next = VAR_8;
          VAR_4->tail = VAR_8;
        }
    }

  return VAR_1;
}
