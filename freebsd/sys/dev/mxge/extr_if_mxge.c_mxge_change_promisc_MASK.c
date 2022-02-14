
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ mxge_softc_t ;
typedef int mxge_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_2(mxge_softc_t *VAR_3, int VAR_4)
{
 mxge_cmd_t VAR_5;
 int VAR_6;

 if (VAR_2)
  VAR_4 = 1;

 if (VAR_4)
  VAR_6 = FUNC_1(VAR_3, VAR_1,
           &VAR_5);
 else
  VAR_6 = FUNC_1(VAR_3, VAR_0,
           &VAR_5);

 if (VAR_6) {
  FUNC_0(VAR_3->dev, "Failed to set promisc mode\n");
 }
}
