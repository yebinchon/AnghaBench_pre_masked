
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ikev2_keys {int * SK_pr; int * SK_pi; int * SK_er; int * SK_ei; int * SK_ar; int * SK_ai; int * SK_d; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ikev2_keys *VAR_0)
{
 FUNC_0(VAR_0->SK_d);
 FUNC_0(VAR_0->SK_ai);
 FUNC_0(VAR_0->SK_ar);
 FUNC_0(VAR_0->SK_ei);
 FUNC_0(VAR_0->SK_er);
 FUNC_0(VAR_0->SK_pi);
 FUNC_0(VAR_0->SK_pr);
 VAR_0->SK_d = VAR_0->SK_ai = VAR_0->SK_ar = VAR_0->SK_ei = VAR_0->SK_er =
  VAR_0->SK_pi = VAR_0->SK_pr = ((void*)0);
}
