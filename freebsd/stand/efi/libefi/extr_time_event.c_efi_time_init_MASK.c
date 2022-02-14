
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* SetTimer ) (int ,int ,int) ;int (* CreateEvent ) (int,int ,int ,int ,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_2(void)
{


 VAR_0->CreateEvent(VAR_2 | VAR_1, VAR_3,
     VAR_6, 0, &VAR_5);

 VAR_0->SetTimer(VAR_5, VAR_4, 100000);
}
