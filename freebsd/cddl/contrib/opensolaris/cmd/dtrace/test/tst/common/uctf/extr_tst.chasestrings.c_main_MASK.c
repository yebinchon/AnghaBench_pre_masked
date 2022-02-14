
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* zi_gamename; int zi_ndungeons; char* zi_villain; int zi_haszelda; } ;
typedef TYPE_1__ zelda_info_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

int
FUNC_4(void)
{
 zelda_info_t VAR_0;
 zelda_info_t VAR_1;
 zelda_info_t VAR_2;

 VAR_0.zi_gamename = "Ocarina of Time";
 VAR_0.zi_ndungeons = 10;
 VAR_0.zi_villain = "Ganondorf";
 VAR_0.zi_haszelda = 1;

 VAR_1.zi_gamename = "Link's Awakening";
 VAR_1.zi_ndungeons = 9;
 VAR_1.zi_villain = "Nightmare";
 VAR_1.zi_haszelda = 0;

 VAR_2.zi_gamename = "A Link to the Past";
 VAR_2.zi_ndungeons = 12;
 VAR_2.zi_villain = "Ganon";
 VAR_2.zi_haszelda = 1;

 for (;;) {
  (void) FUNC_1(&VAR_0);
  (void) FUNC_0(&VAR_1);
  (void) FUNC_2(&VAR_2);
  FUNC_3(1);
 }

 return (0);
}
