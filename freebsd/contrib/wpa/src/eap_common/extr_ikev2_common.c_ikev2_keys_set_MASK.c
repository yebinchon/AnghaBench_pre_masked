
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ikev2_keys {scalar_t__ SK_pr; scalar_t__ SK_pi; scalar_t__ SK_er; scalar_t__ SK_ei; scalar_t__ SK_ar; scalar_t__ SK_ai; scalar_t__ SK_d; } ;



int FUNC_0(struct ikev2_keys *VAR_0)
{
 return VAR_0->SK_d && VAR_0->SK_ai && VAR_0->SK_ar && VAR_0->SK_ei &&
  VAR_0->SK_er && VAR_0->SK_pi && VAR_0->SK_pr;
}
