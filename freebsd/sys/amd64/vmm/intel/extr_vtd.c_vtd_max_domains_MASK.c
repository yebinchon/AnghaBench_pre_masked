
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtdmap {int cap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct vtdmap *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->cap);

 switch (VAR_1) {
 case 0:
  return (16);
 case 1:
  return (64);
 case 2:
  return (256);
 case 3:
  return (1024);
 case 4:
  return (4 * 1024);
 case 5:
  return (16 * 1024);
 case 6:
  return (64 * 1024);
 default:
  FUNC_1("vtd_max_domains: invalid value of nd (0x%0x)", VAR_1);
 }
}
