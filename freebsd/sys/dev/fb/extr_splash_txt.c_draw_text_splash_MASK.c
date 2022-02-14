
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef size_t u_char ;
struct TYPE_6__ {int * scr_map; TYPE_1__* cur_scp; } ;
typedef TYPE_2__ sc_softc_t ;
struct TYPE_7__ {size_t* data; } ;
struct TYPE_5__ {scalar_t__ xsize; int scr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ,int) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(sc_softc_t *VAR_3)
{
 u_int VAR_4, VAR_5;
 u_char VAR_6, VAR_7;
 u_char *VAR_8 = VAR_2.data;


 if (VAR_2.data == ((void*)0))
  return;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   VAR_6 = *VAR_8++;
   VAR_7 = *VAR_8++;
   FUNC_0(&VAR_3->cur_scp->scr,
       (VAR_5 * VAR_3->cur_scp->xsize) + VAR_4,
       VAR_3->scr_map[VAR_6], (int)VAR_7 << 8);
  }
 }
}
