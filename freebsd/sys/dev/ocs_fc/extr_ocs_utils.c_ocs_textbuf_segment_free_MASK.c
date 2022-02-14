
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buffer_length; struct TYPE_4__* buffer; int user_allocated; } ;
typedef TYPE_1__ ocs_textbuf_segment_t ;
typedef int ocs_t ;


 int FUNC_0 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(ocs_t *VAR_0, ocs_textbuf_segment_t *VAR_1)
{
 if (VAR_1) {
  if (VAR_1->buffer && !VAR_1->user_allocated) {
   FUNC_0(VAR_0, VAR_1->buffer, VAR_1->buffer_length);
  }
  FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1));
 }
}
