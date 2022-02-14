
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ichwd_device {scalar_t__ device; int * desc; } ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 struct ichwd_device* VAR_1 ;
 int * FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static device_t
FUNC_6(device_t VAR_2, struct ichwd_device **VAR_3)
{
 struct ichwd_device *VAR_4;
 device_t VAR_5, VAR_6;
 uint16_t VAR_7;






 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_1(FUNC_4(VAR_5), FUNC_2(VAR_5), 31, 4);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 if (FUNC_5(VAR_6) != VAR_0)
  return (((void*)0));
 VAR_7 = FUNC_3(VAR_6);
 for (VAR_4 = VAR_1; VAR_4->desc != ((void*)0); ++VAR_4) {
  if (VAR_7 == VAR_4->device) {
   if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_4;
   return (VAR_6);
  }
 }

 return (((void*)0));
}
