
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ,int,struct resource*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{

 if (VAR_3 == VAR_0)
  return (FUNC_1(0, VAR_2, VAR_4, VAR_5));

 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
