
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;


 unsigned long long FUNC_0 (struct pevent*,void const*) ;
 unsigned long long FUNC_1 (struct pevent*,void const*) ;
 unsigned long long FUNC_2 (struct pevent*,void const*) ;

unsigned long long FUNC_3(struct pevent *VAR_0,
          const void *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 1:
  return *(unsigned char *)VAR_1;
 case 2:
  return FUNC_0(VAR_0, VAR_1);
 case 4:
  return FUNC_1(VAR_0, VAR_1);
 case 8:
  return FUNC_2(VAR_0, VAR_1);
 default:

  return 0;
 }
}
