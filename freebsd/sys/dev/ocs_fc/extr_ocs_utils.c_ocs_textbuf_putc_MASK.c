
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int segment_list; } ;
typedef TYPE_1__ ocs_textbuf_t ;
struct TYPE_9__ {int buffer_written; int * buffer; } ;
typedef TYPE_2__ ocs_textbuf_segment_t ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(ocs_textbuf_t *VAR_0, uint8_t VAR_1)
{
 ocs_textbuf_segment_t *VAR_2;

 if (FUNC_2(VAR_0)) {
  VAR_2 = FUNC_0(&VAR_0->segment_list);

  if (FUNC_1(VAR_2)) {
   *(VAR_2->buffer + VAR_2->buffer_written++) = VAR_1;
  }
  if (FUNC_1(VAR_2) == 0) {
   FUNC_3(VAR_0);
  }
 }
}
