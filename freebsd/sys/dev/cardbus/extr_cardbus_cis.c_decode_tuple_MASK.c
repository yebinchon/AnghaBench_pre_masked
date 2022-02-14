
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {int id; int (* func ) (int ,int ,int,int,int *,int ,int *,struct tuple_callbacks*,void*) ;} ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int *,int ,int *,struct tuple_callbacks*,void*) ;
 int FUNC_1 (int ,int ,int,int,int *,int ,int *,struct tuple_callbacks*,void*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    uint8_t *VAR_5, uint32_t VAR_6, uint32_t *VAR_7,
    struct tuple_callbacks *VAR_8, void *VAR_9)
{
 int VAR_10;
 for (VAR_10 = 0; VAR_8[VAR_10].id != VAR_0; VAR_10++) {
  if (VAR_3 == VAR_8[VAR_10].id)
   return (VAR_8[VAR_10].func(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7, &VAR_8[VAR_10], VAR_9));
 }
 return (VAR_8[VAR_10].func(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, ((void*)0), VAR_9));
}
