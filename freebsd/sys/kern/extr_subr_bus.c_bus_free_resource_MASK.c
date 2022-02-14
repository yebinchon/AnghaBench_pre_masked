
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int ,struct resource*) ;
 int FUNC_1 (struct resource*) ;

int
FUNC_2(device_t VAR_0, int VAR_1, struct resource *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return (0);
 return (FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_2), VAR_2));
}
