
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ rmsg_head; scalar_t__ rmsg_tail; } ;



__attribute__((used)) static int FUNC_0(struct rsocket *VAR_0)
{
 return (VAR_0->rmsg_head != VAR_0->rmsg_tail);
}
