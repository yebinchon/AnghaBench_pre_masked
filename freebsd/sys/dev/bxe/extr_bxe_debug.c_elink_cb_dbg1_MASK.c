
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint32_t ;
typedef int tmp ;
struct bxe_softc {int debug; int dev; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,char*) ;

void
FUNC_3(struct bxe_softc *VAR_1,
              char *VAR_2,
              uint32_t VAR_3)
{
    char VAR_4[128], VAR_5[128];
    if (FUNC_0(VAR_1->debug & VAR_0)) {
        FUNC_2(VAR_4, sizeof(VAR_4), "ELINK: %s", VAR_2);
        FUNC_2(VAR_5, sizeof(VAR_5), VAR_4, VAR_3);
        FUNC_1(VAR_1->dev, "%s", VAR_5);
    }
}
