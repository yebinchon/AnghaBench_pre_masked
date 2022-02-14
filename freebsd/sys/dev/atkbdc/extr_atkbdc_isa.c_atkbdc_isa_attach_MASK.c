
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_4__ {int retry; int * irq; int * port1; int * port0; } ;
typedef TYPE_1__ atkbdc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,TYPE_1__*,int *,int *) ;
 TYPE_1__* FUNC_1 (int) ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 atkbdc_softc_t *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(VAR_5);
 VAR_6 = *(atkbdc_softc_t **)FUNC_6(VAR_5);
 if (VAR_6 == ((void*)0)) {







  VAR_6 = FUNC_1(VAR_7);
  if (VAR_6 == ((void*)0))
   return VAR_0;
 }

 VAR_9 = 0;
 VAR_6->retry = 5000;
 VAR_6->port0 = FUNC_2(VAR_5, VAR_3, &VAR_9,
        VAR_2);
 if (VAR_6->port0 == ((void*)0))
  return VAR_1;
 VAR_9 = 1;
 VAR_6->port1 = FUNC_2(VAR_5, VAR_3, &VAR_9,
        VAR_2);
 if (VAR_6->port1 == ((void*)0)) {
  FUNC_5(VAR_5, VAR_3, 0, VAR_6->port0);
  return VAR_1;
 }






 VAR_9 = 0;
 VAR_6->irq = FUNC_2(VAR_5, VAR_4, &VAR_9, VAR_2);

 VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_6->port0, VAR_6->port1);
 if (VAR_8) {
  FUNC_5(VAR_5, VAR_3, 0, VAR_6->port0);
  FUNC_5(VAR_5, VAR_3, 1, VAR_6->port1);
  if (VAR_6->irq != ((void*)0))
   FUNC_5(VAR_5, VAR_4, 0, VAR_6->irq);
  return VAR_8;
 }
 *(atkbdc_softc_t **)FUNC_6(VAR_5) = VAR_6;

 FUNC_4(VAR_5);
 FUNC_3(VAR_5);

 return 0;
}
