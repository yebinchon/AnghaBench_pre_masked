
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ sqe_avail; scalar_t__ sq_size; } ;



__attribute__((used)) static int FUNC_0(struct rsocket *VAR_0)
{
 return VAR_0->sqe_avail == VAR_0->sq_size;
}
