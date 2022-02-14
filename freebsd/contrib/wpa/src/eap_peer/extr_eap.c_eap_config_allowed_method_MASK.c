
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {struct eap_method_type* eap_methods; } ;
struct eap_method_type {int vendor; scalar_t__ method; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct eap_sm *VAR_2,
         struct eap_peer_config *VAR_3,
         int VAR_4, u32 VAR_5)
{
 int VAR_6;
 struct eap_method_type *VAR_7;

 if (VAR_3 == ((void*)0) || VAR_3->eap_methods == ((void*)0))
  return 1;

 VAR_7 = VAR_3->eap_methods;
 for (VAR_6 = 0; VAR_7[VAR_6].vendor != VAR_1 ||
       VAR_7[VAR_6].method != VAR_0; VAR_6++) {
  if (VAR_7[VAR_6].vendor == VAR_4 && VAR_7[VAR_6].method == VAR_5)
   return 1;
 }
 return 0;
}
