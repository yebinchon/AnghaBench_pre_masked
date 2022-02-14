
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int call_lock; int version; int dev; } ;
typedef TYPE_1__ ig4iic_softc_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(ig4iic_softc_t *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4->dev);

 FUNC_4(&VAR_4->call_lock);
 FUNC_3(VAR_4, 0);
 if (FUNC_0(VAR_4->version)) {



  FUNC_2(VAR_4, VAR_1, VAR_0);





  FUNC_2(VAR_4, VAR_2, VAR_3);
 }
 FUNC_5(&VAR_4->call_lock);

 return (VAR_5);
}
