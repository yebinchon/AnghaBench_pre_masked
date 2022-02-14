
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ocs_t ;
struct TYPE_3__ {size_t textbuf_base; size_t textbuf_count; int cur_textbuf_idx; int * textbufs; } ;
typedef TYPE_1__ ocs_ramlog_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(ocs_t *VAR_0, ocs_ramlog_t *VAR_1, int VAR_2, int VAR_3)
{
 uint32_t VAR_4;

 if (VAR_3) {
  for (VAR_4 = VAR_1->textbuf_base; VAR_4 < VAR_1->textbuf_count; VAR_4 ++) {
   FUNC_0(&VAR_1->textbufs[VAR_4]);
  }
  VAR_1->cur_textbuf_idx = 1;
 }
 if (VAR_2 && VAR_1->textbuf_base) {
  FUNC_0(&VAR_1->textbufs[0]);



  VAR_1->textbuf_base = 0;
 }
}
