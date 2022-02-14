
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 struct resource* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int*,int*,int *) ;
 int FUNC_1 (int ,struct resource*,int ,int *,int*,int*,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, struct resource *VAR_3,
    uint32_t VAR_4, uint32_t *VAR_5, int *VAR_6, int *VAR_7,
    uint8_t *VAR_8)
{
 if (VAR_3 == VAR_0)
  return (FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8));
 return (FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8));
}
