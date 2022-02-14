
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {TYPE_1__* sc; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_6__ {int write_in_progress; int * scr_map; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int **,int*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(scr_stat *VAR_1, u_char *VAR_2, int VAR_3)
{
 while (VAR_3 > 0) {
  ++VAR_1->sc->write_in_progress;
  FUNC_0(VAR_1, &VAR_2, &VAR_3, VAR_0 << 8);
      FUNC_1(VAR_1, VAR_1->sc->scr_map[0x20],
       VAR_0 << 8);
  --VAR_1->sc->write_in_progress;
 }
}
