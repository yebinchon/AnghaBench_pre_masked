
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct twe_softc {char* twe_aen_buf; int * twe_dev; TYPE_1__* twe_drive; } ;
typedef int * device_t ;
struct TYPE_2__ {int * td_disk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int,...) ;
 char* FUNC_4 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_5(struct twe_softc *VAR_2, u_int16_t VAR_3)
{
    device_t VAR_4;
    char *VAR_5, *VAR_6;

    VAR_5 = FUNC_4(VAR_1, FUNC_0(VAR_3));
    VAR_6 = VAR_5 + 2;

    switch (*VAR_5) {
    case 'q':
 if (!VAR_0)
     return(((void*)0));

    case 'a':
 return(VAR_6);

    case 'c':
 if ((VAR_4 = VAR_2->twe_drive[FUNC_1(VAR_3)].td_disk) != ((void*)0)) {
     FUNC_3(VAR_2->twe_aen_buf, sizeof(VAR_2->twe_aen_buf), "twed%d: %s",
  FUNC_2(VAR_4), VAR_6);
 } else {
     FUNC_3(VAR_2->twe_aen_buf, sizeof(VAR_2->twe_aen_buf),
  "twe%d: %s for unknown unit %d", FUNC_2(VAR_2->twe_dev),
  VAR_6, FUNC_1(VAR_3));
 }
 return(VAR_2->twe_aen_buf);

    case 'p':
 FUNC_3(VAR_2->twe_aen_buf, sizeof(VAR_2->twe_aen_buf),
     "twe%d: port %d: %s", FUNC_2(VAR_2->twe_dev),
     FUNC_1(VAR_3), VAR_6);
 return(VAR_2->twe_aen_buf);


    case 'x':
    default:
 break;
    }
    FUNC_3(VAR_2->twe_aen_buf, sizeof(VAR_2->twe_aen_buf), "unknown AEN 0x%x", VAR_3);
    return(VAR_2->twe_aen_buf);
}
