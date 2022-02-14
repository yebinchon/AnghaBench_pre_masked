
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int uas; int dm; int bpv; int fse; int crce; int rcrce; int es; int les; int ses; int bes; int oofs; int css; } ;
struct TYPE_4__ {int uas; int dm; int bpv; int fse; int crce; int rcrce; int es; int les; int ses; int bes; int oofs; int css; } ;
struct e1_statistics {int cursec; int totsec; TYPE_3__* interval; TYPE_2__ total; int status; TYPE_1__ currnt; } ;
struct TYPE_6__ {int uas; int dm; int bpv; int fse; int crce; int rcrce; int es; int les; int ses; int bes; int oofs; int css; } ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ,struct e1_statistics*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4 (int VAR_3, int VAR_4)
{
 struct e1_statistics VAR_5;
 int VAR_6, VAR_7;

 if (VAR_4)
  FUNC_3 ("Chan\t Unav/Degr  Bpv/Fsyn  CRC/RCRC  Err/Lerr  Sev/Bur   Oof/Slp  Status\n");

 if (FUNC_1 (VAR_3, VAR_0, &VAR_5) < 0)
  return;
 FUNC_3 ("%s\t", VAR_1);


 FUNC_2 (0, VAR_5.currnt.uas, VAR_5.cursec);
 FUNC_2 (1, 60 * VAR_5.currnt.dm, VAR_5.cursec);


 FUNC_2 (0, VAR_5.currnt.bpv, VAR_5.cursec);
 FUNC_2 (1, VAR_5.currnt.fse, VAR_5.cursec);


 FUNC_2 (0, VAR_5.currnt.crce, VAR_5.cursec);
 FUNC_2 (1, VAR_5.currnt.rcrce, VAR_5.cursec);


 FUNC_2 (0, VAR_5.currnt.es, VAR_5.cursec);
 FUNC_2 (1, VAR_5.currnt.les, VAR_5.cursec);


 FUNC_2 (0, VAR_5.currnt.ses, VAR_5.cursec);
 FUNC_2 (1, VAR_5.currnt.bes, VAR_5.cursec);


 FUNC_2 (0, VAR_5.currnt.oofs, VAR_5.cursec);
 FUNC_2 (1, VAR_5.currnt.css, VAR_5.cursec);

 FUNC_3 (" %s\n", FUNC_0 (VAR_5.status));

 if (VAR_2) {

  FUNC_3 ("\t");
  FUNC_2 (0, VAR_5.total.uas, VAR_5.totsec);
  FUNC_2 (1, 60 * VAR_5.total.dm, VAR_5.totsec);

  FUNC_2 (0, VAR_5.total.bpv, VAR_5.totsec);
  FUNC_2 (1, VAR_5.total.fse, VAR_5.totsec);

  FUNC_2 (0, VAR_5.total.crce, VAR_5.totsec);
  FUNC_2 (1, VAR_5.total.rcrce, VAR_5.totsec);

  FUNC_2 (0, VAR_5.total.es, VAR_5.totsec);
  FUNC_2 (1, VAR_5.total.les, VAR_5.totsec);

  FUNC_2 (0, VAR_5.total.ses, VAR_5.totsec);
  FUNC_2 (1, VAR_5.total.bes, VAR_5.totsec);

  FUNC_2 (0, VAR_5.total.oofs, VAR_5.totsec);
  FUNC_2 (1, VAR_5.total.css, VAR_5.totsec);

  FUNC_3 (" -- Total\n");


  VAR_7 = (VAR_5.totsec - VAR_5.cursec) / 900;
  if (VAR_7 > 48)
   VAR_7 = 48;
  for (VAR_6=0; VAR_6<VAR_7; ++VAR_6) {
   FUNC_3 ("       ");
   FUNC_2 (0, VAR_5.interval[VAR_6].uas, 15*60);
   FUNC_2 (1, 60 * VAR_5.interval[VAR_6].dm, 15*60);

   FUNC_2 (0, VAR_5.interval[VAR_6].bpv, 15*60);
   FUNC_2 (1, VAR_5.interval[VAR_6].fse, 15*60);

   FUNC_2 (0, VAR_5.interval[VAR_6].crce, 15*60);
   FUNC_2 (1, VAR_5.interval[VAR_6].rcrce, 15*60);

   FUNC_2 (0, VAR_5.interval[VAR_6].es, 15*60);
   FUNC_2 (1, VAR_5.interval[VAR_6].les, 15*60);

   FUNC_2 (0, VAR_5.interval[VAR_6].ses, 15*60);
   FUNC_2 (1, VAR_5.interval[VAR_6].bes, 15*60);

   FUNC_2 (0, VAR_5.interval[VAR_6].oofs, 15*60);
   FUNC_2 (1, VAR_5.interval[VAR_6].css, 15*60);

   if (VAR_6 < 3)
    FUNC_3 (" -- %dm\n", (VAR_6+1)*15);
   else
    FUNC_3 (" -- %dh %dm\n", (VAR_6+1)/4, (VAR_6+1)%4*15);
  }
 }
}
