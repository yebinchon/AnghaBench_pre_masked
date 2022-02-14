
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_vcc {int flags; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 struct atm_vcc* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct atm_vcc *VAR_6)
{
 if (VAR_3) return -VAR_2;
 FUNC_0("sigd_attach\n");
 VAR_3 = VAR_6;
 VAR_6->dev = &VAR_4;
 FUNC_3(FUNC_2(VAR_6));
 FUNC_1(VAR_0,&VAR_6->flags);
 FUNC_1(VAR_1,&VAR_6->flags);



 return 0;
}
