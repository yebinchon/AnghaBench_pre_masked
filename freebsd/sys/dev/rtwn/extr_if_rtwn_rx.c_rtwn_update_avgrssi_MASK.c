
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct rtwn_node {int avg_pwdb; int id; } ;
typedef int int8_t ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*,int ,char*,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_1, struct rtwn_node *VAR_2, int8_t VAR_3,
    int VAR_4)
{
 int VAR_5;


 if (VAR_3 <= -100 || VAR_3 >= 20)
  VAR_5 = 0;
 else if (VAR_3 >= 0)
  VAR_5 = 100;
 else
  VAR_5 = 100 + VAR_3;
 if (VAR_4) {

  VAR_5 += 6;
  if (VAR_5 > 100)
   VAR_5 = 100;
  if (VAR_5 <= 14)
   VAR_5 -= 4;
  else if (VAR_5 <= 26)
   VAR_5 -= 8;
  else if (VAR_5 <= 34)
   VAR_5 -= 6;
  else if (VAR_5 <= 42)
   VAR_5 -= 2;
 }

 if (VAR_2->avg_pwdb == -1)
  VAR_2->avg_pwdb = VAR_5;
 else if (VAR_2->avg_pwdb < VAR_5)
  VAR_2->avg_pwdb = ((VAR_2->avg_pwdb * 19 + VAR_5) / 20) + 1;
 else
  VAR_2->avg_pwdb = ((VAR_2->avg_pwdb * 19 + VAR_5) / 20);

 FUNC_0(VAR_1, VAR_0,
     "MACID %d, PWDB %d, EMA %d\n", VAR_2->id, VAR_5, VAR_2->avg_pwdb);
}
