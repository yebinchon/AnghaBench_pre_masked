
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int keyboard_t ;
typedef int device_t ;
struct TYPE_3__ {int * intr; int ih; } ;
typedef TYPE_1__ atkbd_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int **,int ,int) ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int ,int *,int ,int *,int ,int *,int *) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 atkbd_softc_t *VAR_7;
 keyboard_t *VAR_8;
 u_long VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_7 = FUNC_6(VAR_6);

 VAR_11 = VAR_2;
 VAR_9 = FUNC_2(VAR_6, VAR_4, VAR_11);
 VAR_10 = FUNC_5(VAR_6);
 VAR_12 = FUNC_0(VAR_6, &VAR_8, VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;


 VAR_7->intr = FUNC_1(VAR_6, VAR_4, &VAR_11, VAR_3);
 if (VAR_7->intr == ((void*)0))
  return VAR_0;
 VAR_12 = FUNC_4(VAR_6, VAR_7->intr, VAR_1, ((void*)0), VAR_5,
          VAR_8, &VAR_7->ih);
 if (VAR_12)
  FUNC_3(VAR_6, VAR_4, VAR_11, VAR_7->intr);

 return VAR_12;
}
