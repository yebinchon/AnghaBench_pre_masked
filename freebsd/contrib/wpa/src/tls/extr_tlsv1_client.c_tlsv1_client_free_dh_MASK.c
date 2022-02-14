
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_client {int * dh_ys; int * dh_g; int * dh_p; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct tlsv1_client *VAR_0)
{
 FUNC_0(VAR_0->dh_p);
 FUNC_0(VAR_0->dh_g);
 FUNC_0(VAR_0->dh_ys);
 VAR_0->dh_p = VAR_0->dh_g = VAR_0->dh_ys = ((void*)0);
}
