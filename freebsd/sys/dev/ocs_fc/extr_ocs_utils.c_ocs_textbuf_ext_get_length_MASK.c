
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_textbuf_t ;
struct TYPE_3__ {int buffer_length; } ;
typedef TYPE_1__ ocs_textbuf_segment_t ;
typedef int int32_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;

int32_t FUNC_1(ocs_textbuf_t *VAR_0, uint32_t VAR_1)
{
 ocs_textbuf_segment_t *VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0)) {
  return -1;
 }
 return VAR_2->buffer_length;
}
