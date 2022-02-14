
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int device_t ;
struct TYPE_7__ {int * irq; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int *,int ,int ,TYPE_1__*,void**) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 sc_p VAR_3;
 void *VAR_4;

 VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_3, sizeof(*VAR_3));

 VAR_3->dev = VAR_2;
 if (FUNC_0(VAR_3)) {
  FUNC_4(VAR_3);
  return (VAR_0);
 }

 if (VAR_3->irq != ((void*)0))
  FUNC_5(VAR_2, VAR_3->irq, 0, VAR_1, VAR_3, &VAR_4);
 FUNC_1(VAR_2);

 return (0);
}
