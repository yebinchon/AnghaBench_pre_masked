
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int,struct resource*) ;
 int FUNC_2 (int ,int ,int,int,struct resource*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 if (VAR_4 == VAR_1)
  return (FUNC_1(VAR_0 -
      FUNC_0(VAR_2), VAR_3, VAR_5, VAR_6));
 return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
}
