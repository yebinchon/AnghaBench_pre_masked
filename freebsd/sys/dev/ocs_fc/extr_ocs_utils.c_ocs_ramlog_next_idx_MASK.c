
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ textbuf_count; scalar_t__ textbuf_base; } ;
typedef TYPE_1__ ocs_ramlog_t ;



__attribute__((used)) static uint32_t
FUNC_0(ocs_ramlog_t *VAR_0, uint32_t VAR_1)
{
 VAR_1 = VAR_1 + 1;

 if (VAR_1 >= VAR_0->textbuf_count) {
  VAR_1 = VAR_0->textbuf_base;
 }

 return VAR_1;
}
