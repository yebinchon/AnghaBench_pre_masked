
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {int esc; int cur_attr; int num_param; } ;
typedef TYPE_2__ term_stat ;
struct TYPE_11__ {TYPE_1__* sc; TYPE_2__* ts; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_9__ {int write_in_progress; int * scr_map; } ;


 int FUNC_0 (TYPE_3__*,int **,int*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(scr_stat *VAR_0, u_char *VAR_1, int VAR_2)
{
 term_stat *VAR_3;

 VAR_3 = VAR_0->ts;
outloop:
 VAR_0->sc->write_in_progress++;

 if (VAR_3->esc) {
  FUNC_2(VAR_0, VAR_3, *VAR_1);
  VAR_1++;
  VAR_2--;
 } else {
  switch (*VAR_1) {
  case 0x1b:
   VAR_3->esc = 1;
   VAR_3->num_param = 0;
   VAR_1++;
   VAR_2--;
   break;
  default:
   FUNC_0(VAR_0, &VAR_1, &VAR_2, VAR_3->cur_attr);
   break;
  }
 }

 FUNC_1(VAR_0, VAR_0->sc->scr_map[0x20], VAR_3->cur_attr);

 VAR_0->sc->write_in_progress--;
 if (VAR_2)
  goto outloop;
}
