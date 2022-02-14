
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int L; int b; } ;
typedef int TString ;
typedef TYPE_1__ LoadState ;


 int FUNC_0 (TYPE_1__*,char*,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int * FUNC_2 (int ,char*,size_t) ;
 char* FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static TString* FUNC_4(LoadState* VAR_0)
{
 size_t VAR_1;
 FUNC_1(VAR_0,VAR_1);
 if (VAR_1==0)
  return ((void*)0);
 else
 {
  char* VAR_2=FUNC_3(VAR_0->L,VAR_0->b,VAR_1);
  FUNC_0(VAR_0,VAR_2,VAR_1*sizeof(char));
  return FUNC_2(VAR_0->L,VAR_2,VAR_1-1);
 }
}
