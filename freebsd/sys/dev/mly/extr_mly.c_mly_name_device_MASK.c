
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mly_softc {TYPE_1__** mly_btl; } ;
struct cam_periph {char* periph_name; int unit_number; } ;
struct TYPE_2__ {scalar_t__* mb_name; } ;


 int VAR_0 ;
 struct cam_periph* FUNC_0 (struct mly_softc*,int,int) ;
 int FUNC_1 (scalar_t__*,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct mly_softc *VAR_1, int VAR_2, int VAR_3)
{
    struct cam_periph *VAR_4;

    if ((VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3)) != ((void*)0)) {
 FUNC_1(VAR_1->mly_btl[VAR_2][VAR_3].mb_name, "%s%d", VAR_4->periph_name, VAR_4->unit_number);
 return(0);
    }
    VAR_1->mly_btl[VAR_2][VAR_3].mb_name[0] = 0;
    return(VAR_0);
}
