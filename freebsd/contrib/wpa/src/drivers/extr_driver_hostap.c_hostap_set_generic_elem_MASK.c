
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostap_driver_data {size_t generic_ie_len; int * generic_ie; } ;


 int FUNC_0 (struct hostap_driver_data*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,size_t) ;

__attribute__((used)) static int FUNC_3(void *VAR_0,
       const u8 *VAR_1, size_t VAR_2)
{
 struct hostap_driver_data *VAR_3 = VAR_0;

 FUNC_1(VAR_3->generic_ie);
 VAR_3->generic_ie = ((void*)0);
 VAR_3->generic_ie_len = 0;
 if (VAR_1) {
  VAR_3->generic_ie = FUNC_2(VAR_1, VAR_2);
  if (VAR_3->generic_ie == ((void*)0))
   return -1;
  VAR_3->generic_ie_len = VAR_2;
 }

 return FUNC_0(VAR_3);
}
