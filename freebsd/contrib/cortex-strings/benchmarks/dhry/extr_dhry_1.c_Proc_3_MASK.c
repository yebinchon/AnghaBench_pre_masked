
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Int_Comp; } ;
struct TYPE_6__ {TYPE_1__ var_1; } ;
struct TYPE_7__ {TYPE_2__ variant; int Ptr_Comp; } ;
typedef int Rec_Pointer ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int,int ,int *) ;
 TYPE_3__* VAR_2 ;

void FUNC_1 (Rec_Pointer *VAR_3)




 {
   if (VAR_2 != VAR_1)

     *VAR_3 = VAR_2->Ptr_Comp;
   FUNC_0 (10, VAR_0, &VAR_2->variant.var_1.Int_Comp);
 }
