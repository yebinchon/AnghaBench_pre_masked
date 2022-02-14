
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lzh_stream {int avail_out; size_t total_out; TYPE_1__* ds; int ref_ptr; } ;
struct TYPE_2__ {int w_buff; } ;



__attribute__((used)) static void
FUNC_0(struct lzh_stream *VAR_0, size_t VAR_1)
{
 VAR_0->ref_ptr = VAR_0->ds->w_buff;
 VAR_0->avail_out = (int)VAR_1;
 VAR_0->total_out += VAR_1;
}
