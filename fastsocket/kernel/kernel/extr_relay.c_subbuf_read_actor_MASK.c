
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rchan_buf {void* start; } ;
struct TYPE_4__ {int data; int buf; } ;
struct TYPE_5__ {int written; int count; TYPE_1__ arg; int error; } ;
typedef TYPE_2__ read_descriptor_t ;
typedef int read_actor_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_1(size_t VAR_1,
        struct rchan_buf *VAR_2,
        size_t VAR_3,
        read_descriptor_t *VAR_4,
        read_actor_t VAR_5)
{
 void *VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_2->start + VAR_1;
 VAR_7 = VAR_3;
 if (FUNC_0(VAR_4->arg.buf, VAR_6, VAR_3)) {
  VAR_4->error = -VAR_0;
  VAR_7 = 0;
 }
 VAR_4->arg.data += VAR_7;
 VAR_4->written += VAR_7;
 VAR_4->count -= VAR_7;

 return VAR_7;
}
