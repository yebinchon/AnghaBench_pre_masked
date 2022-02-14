
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int adp; } ;
typedef TYPE_1__ vga_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_8 (int,TYPE_1__*,int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 vga_softc_t *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(VAR_6);
 VAR_7 = FUNC_5(VAR_6);

 VAR_9 = 0;
 FUNC_1(VAR_6, VAR_2, &VAR_9,
      VAR_0 | VAR_1);
 VAR_9 = 0;
 FUNC_1(VAR_6, VAR_3, &VAR_9,
     VAR_0 | VAR_1);

 VAR_10 = FUNC_8(VAR_8, VAR_7, FUNC_4(VAR_6));
 if (VAR_10)
  return (VAR_10);
 if (0 && VAR_4)
  FUNC_9(VAR_7->adp, VAR_4);






 return (0);
}
