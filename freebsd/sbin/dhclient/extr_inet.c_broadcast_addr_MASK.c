
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iaddr {unsigned int len; int* iabuf; } ;



struct iaddr
FUNC_0(struct iaddr VAR_0, struct iaddr VAR_1)
{
 struct iaddr VAR_2;
 unsigned VAR_3;

 if (VAR_0.len != VAR_1.len) {
  VAR_2.len = 0;
  return (VAR_2);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0.len; VAR_3++)
  VAR_2.iabuf[VAR_3] = VAR_0.iabuf[VAR_3] | (~VAR_1.iabuf[VAR_3] & 255);
 VAR_2.len = VAR_0.len;

 return (VAR_2);
}
