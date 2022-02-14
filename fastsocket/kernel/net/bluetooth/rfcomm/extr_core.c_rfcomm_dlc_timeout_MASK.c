
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int flags; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rfcomm_dlc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct rfcomm_dlc *VAR_3 = (void *) VAR_2;

 FUNC_0("dlc %p state %ld", VAR_3, VAR_3->state);

 FUNC_3(VAR_1, &VAR_3->flags);
 FUNC_1(VAR_3);
 FUNC_2(VAR_0);
}
