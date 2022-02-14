
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_ikev2_data {scalar_t__ state; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static Boolean FUNC_0(struct eap_sm *VAR_2, void *VAR_3)
{
 struct eap_ikev2_data *VAR_4 = VAR_3;
 return VAR_4->state == VAR_0 || VAR_4->state == VAR_1;
}
