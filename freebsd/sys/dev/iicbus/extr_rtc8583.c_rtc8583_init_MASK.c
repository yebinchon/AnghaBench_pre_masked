
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc8583_softc {int dev; int init_hook; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct rtc8583_softc *VAR_2;

 VAR_2 = (struct rtc8583_softc*)VAR_1;
 FUNC_2(&VAR_2->init_hook);




 FUNC_0(VAR_2->dev, 1000000, VAR_0);
 FUNC_1(VAR_2->dev, 1);
 return;
}
