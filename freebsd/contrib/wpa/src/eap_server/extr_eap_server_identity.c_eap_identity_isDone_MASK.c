
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_identity_data {scalar_t__ state; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static Boolean FUNC_0(struct eap_sm *VAR_1, void *VAR_2)
{
 struct eap_identity_data *VAR_3 = VAR_2;
 return VAR_3->state != VAR_0;
}
