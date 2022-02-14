
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twe_softc {TYPE_1__* twe_drive; int twe_dev; } ;
struct TYPE_2__ {int td_disk; } ;


 int VAR_0 ;
 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct twe_softc*,char*,int) ;

int
FUNC_6(struct twe_softc *VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    FUNC_0(VAR_1);
    FUNC_3(&VAR_0);
    VAR_3 = FUNC_2(VAR_1->twe_dev, VAR_1->twe_drive[VAR_2].td_disk);
    FUNC_4(&VAR_0);
    if (VAR_3 != 0) {
 FUNC_5(VAR_1, "failed to delete unit %d\n", VAR_2);
 return(VAR_3);
    }
    FUNC_1(&VAR_1->twe_drive[VAR_2], sizeof(VAR_1->twe_drive[VAR_2]));
    return(VAR_3);
}
