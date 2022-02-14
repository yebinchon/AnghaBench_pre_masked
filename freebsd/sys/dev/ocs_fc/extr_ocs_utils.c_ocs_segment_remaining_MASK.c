
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer_written; scalar_t__ buffer_length; } ;
typedef TYPE_1__ ocs_textbuf_segment_t ;
typedef scalar_t__ int32_t ;



__attribute__((used)) static int32_t
FUNC_0(ocs_textbuf_segment_t *VAR_0)
{
 return VAR_0->buffer_length - VAR_0->buffer_written;
}
