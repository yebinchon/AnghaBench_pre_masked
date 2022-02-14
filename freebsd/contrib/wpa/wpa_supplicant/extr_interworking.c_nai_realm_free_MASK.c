
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct nai_realm {struct nai_realm* realm; struct nai_realm* eap; } ;


 int FUNC_0 (struct nai_realm*) ;

__attribute__((used)) static void FUNC_1(struct nai_realm *VAR_0, u16 VAR_1)
{
 u16 VAR_2;

 if (VAR_0 == ((void*)0))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0[VAR_2].eap);
  FUNC_0(VAR_0[VAR_2].realm);
 }
 FUNC_0(VAR_0);
}
