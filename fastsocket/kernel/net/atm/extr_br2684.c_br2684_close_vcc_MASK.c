
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct br2684_vcc {TYPE_1__* atmvcc; int (* old_push ) (TYPE_1__*,int *) ;int brvccs; int device; } ;
struct TYPE_2__ {int * user_back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct br2684_vcc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct br2684_vcc*,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct br2684_vcc *VAR_2)
{
 FUNC_3("removing VCC %p from dev %p\n", VAR_2, VAR_2->device);
 FUNC_5(&VAR_1);
 FUNC_1(&VAR_2->brvccs);
 FUNC_6(&VAR_1);
 VAR_2->atmvcc->user_back = ((void*)0);
 VAR_2->old_push(VAR_2->atmvcc, ((void*)0));
 FUNC_0(VAR_2);
 FUNC_2(VAR_0);
}
