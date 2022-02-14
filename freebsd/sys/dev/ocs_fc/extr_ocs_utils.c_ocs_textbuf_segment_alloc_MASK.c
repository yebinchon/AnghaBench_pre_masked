
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int allocation_length; scalar_t__ total_allocation_length; scalar_t__ max_allocation_length; int ocs; scalar_t__ extendable; int segment_list; } ;
typedef TYPE_1__ ocs_textbuf_t ;
struct TYPE_8__ {int buffer_length; scalar_t__ buffer_written; int * buffer; } ;
typedef TYPE_2__ ocs_textbuf_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 void* FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static ocs_textbuf_segment_t *
FUNC_3(ocs_textbuf_t *VAR_2)
{
 ocs_textbuf_segment_t *VAR_3 = ((void*)0);

 if (VAR_2->extendable) {
  VAR_3 = FUNC_1(VAR_2->ocs, sizeof(*VAR_3), VAR_1 | VAR_0);
  if (VAR_3 != ((void*)0)) {
   VAR_3->buffer = FUNC_1(VAR_2->ocs, VAR_2->allocation_length, VAR_1 | VAR_0);
   if (VAR_3->buffer != ((void*)0)) {
    VAR_3->buffer_length = VAR_2->allocation_length;
    VAR_3->buffer_written = 0;
    FUNC_0(&VAR_2->segment_list, VAR_3);
    VAR_2->total_allocation_length += VAR_2->allocation_length;


    if (VAR_2->total_allocation_length >= VAR_2->max_allocation_length) {
     VAR_2->extendable = 0;
    }

   } else {
    FUNC_2(VAR_2->ocs, VAR_3);
    VAR_3 = ((void*)0);
   }
  }
 }
 return VAR_3;
}
