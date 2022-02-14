
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {struct rfcomm_dev* owner; } ;
struct rfcomm_dev {int id; int list; struct rfcomm_dlc* dlc; } ;


 int FUNC_0 (char*,struct rfcomm_dev*,struct rfcomm_dlc*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct rfcomm_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (struct rfcomm_dlc*) ;
 int FUNC_7 (struct rfcomm_dlc*) ;
 int VAR_1 ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct rfcomm_dev *VAR_2)
{
 struct rfcomm_dlc *VAR_3 = VAR_2->dlc;

 FUNC_0("dev %p dlc %p", VAR_2, VAR_3);




 FUNC_1(!FUNC_3(&VAR_2->list));

 FUNC_5(VAR_3);

 if (VAR_3->owner == VAR_2)
  VAR_3->owner = ((void*)0);
 FUNC_7(VAR_3);

 FUNC_6(VAR_3);

 FUNC_8(VAR_1, VAR_2->id);

 FUNC_2(VAR_2);



 FUNC_4(VAR_0);
}
