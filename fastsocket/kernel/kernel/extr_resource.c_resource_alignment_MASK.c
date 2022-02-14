
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; } ;
typedef int resource_size_t ;




 int FUNC_0 (struct resource*) ;

resource_size_t FUNC_1(struct resource *VAR_0)
{
 switch (VAR_0->flags & (129 | 128)) {
 case 129:
  return FUNC_0(VAR_0);
 case 128:
  return VAR_0->start;
 default:
  return 0;
 }
}
