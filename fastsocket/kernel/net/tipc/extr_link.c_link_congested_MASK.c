
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {scalar_t__ out_queue_size; scalar_t__* queue_limit; } ;



__attribute__((used)) static int FUNC_0(struct link *VAR_0)
{
 return (VAR_0->out_queue_size >= VAR_0->queue_limit[0]);
}
