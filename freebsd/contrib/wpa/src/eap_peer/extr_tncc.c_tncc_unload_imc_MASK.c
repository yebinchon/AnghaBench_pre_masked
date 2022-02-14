
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imc {size_t imcID; int imc_send; int supported_types; int path; int name; scalar_t__ dlhandle; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int ** VAR_0 ;
 int FUNC_3 (struct tnc_if_imc*) ;

__attribute__((used)) static void FUNC_4(struct tnc_if_imc *VAR_1)
{
 FUNC_3(VAR_1);
 VAR_0[VAR_1->imcID] = ((void*)0);

 if (VAR_1->dlhandle) {



  FUNC_1(VAR_1->dlhandle);

 }
 FUNC_2(VAR_1->name);
 FUNC_2(VAR_1->path);
 FUNC_2(VAR_1->supported_types);
 FUNC_2(VAR_1->imc_send);
}
