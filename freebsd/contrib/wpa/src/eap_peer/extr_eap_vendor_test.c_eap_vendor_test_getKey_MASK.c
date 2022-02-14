
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_vendor_test_data {scalar_t__ state; } ;
struct eap_sm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int const) ;
 int FUNC_1 (int *,int,int const) ;

__attribute__((used)) static u8 * FUNC_2(struct eap_sm *VAR_1, void *VAR_2, size_t *VAR_3)
{
 struct eap_vendor_test_data *VAR_4 = VAR_2;
 u8 *VAR_5;
 const int VAR_6 = 64;

 if (VAR_4->state != VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_6);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_5, 0x11, VAR_6 / 2);
 FUNC_1(VAR_5 + VAR_6 / 2, 0x22, VAR_6 / 2);
 *VAR_3 = VAR_6;

 return VAR_5;
}
