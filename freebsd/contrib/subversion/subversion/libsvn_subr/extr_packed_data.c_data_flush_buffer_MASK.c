
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t buffer_used; void** buffer; TYPE_2__* private_data; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
struct TYPE_6__ {size_t item_count; int * packed; int pool; scalar_t__ is_signed; scalar_t__ diff; void* last_value; TYPE_3__* next; TYPE_3__* current_substream; } ;
typedef TYPE_2__ packed_int_private_t ;
typedef void* apr_uint64_t ;
typedef size_t apr_size_t ;
struct TYPE_7__ {TYPE_2__* private_data; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (TYPE_3__*,void*) ;
 int FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (int,int ) ;
 unsigned char* FUNC_4 (unsigned char*,void*) ;

__attribute__((used)) static void
FUNC_5(svn_packed__int_stream_t *VAR_1)
{
  packed_int_private_t *VAR_2 = VAR_1->private_data;
  apr_size_t VAR_3;


  if (VAR_2->current_substream)
    for (VAR_3 = 0; VAR_3 < VAR_1->buffer_used; ++VAR_3)
      {
        packed_int_private_t *VAR_4
          = VAR_2->current_substream->private_data;

        FUNC_1(VAR_2->current_substream,
                             VAR_1->buffer[VAR_3]);
        VAR_2->current_substream = VAR_4->next;
      }
  else
    {



      unsigned char VAR_5[10 * VAR_0];
      unsigned char *VAR_6 = VAR_5;



      if (VAR_2->diff)
        {
          apr_uint64_t VAR_7 = VAR_2->last_value;
          for (VAR_3 = 0; VAR_3 < VAR_1->buffer_used; ++VAR_3)
            {
              apr_uint64_t VAR_8 = VAR_1->buffer[VAR_3];
              VAR_1->buffer[VAR_3] = FUNC_0(VAR_8 - VAR_7);
              VAR_7 = VAR_8;
            }

          VAR_2->last_value = VAR_7;
        }





      if (!VAR_2->diff && VAR_2->is_signed)
        for (VAR_3 = 0; VAR_3 < VAR_1->buffer_used; ++VAR_3)
          VAR_1->buffer[VAR_3] = FUNC_0(VAR_1->buffer[VAR_3]);



      if (VAR_2->packed == ((void*)0))
        VAR_2->packed
          = FUNC_3(256, VAR_2->pool);


      for (VAR_3 = 0; VAR_3 < VAR_1->buffer_used; ++VAR_3)
        VAR_6 = FUNC_4(VAR_6, VAR_1->buffer[VAR_3]);


      FUNC_2(VAR_2->packed,
                                (char *)VAR_5,
                                VAR_6 - VAR_5);
    }


  VAR_2->item_count += VAR_1->buffer_used;
  VAR_1->buffer_used = 0;
}
