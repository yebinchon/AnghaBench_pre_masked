
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {int header; int latch; } ;
typedef int edge ;


 int FUNC_0 (int ,int ) ;

edge
FUNC_1 (const struct loop *VAR_0)
{
  return FUNC_0 (VAR_0->latch, VAR_0->header);
}
