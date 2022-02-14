
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct eap_ikev2_data {scalar_t__ state; scalar_t__ keymat_ok; TYPE_1__ ikev2; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static Boolean FUNC_0(struct eap_sm *VAR_2, void *VAR_3)
{
 struct eap_ikev2_data *VAR_4 = VAR_3;
 return VAR_4->state == VAR_0 && VAR_4->ikev2.state == VAR_1 &&
  VAR_4->keymat_ok;
}
