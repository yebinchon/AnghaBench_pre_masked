
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_data {int busy; int lastdata; int timeout; int * pps; int ppbus; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,void (*) (void*),struct pps_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct pps_data *VAR_3 = VAR_2;
 int VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_0(VAR_3->busy & ~1, ("pps polling w/o opened devices"));
 VAR_4 = FUNC_2(VAR_3->ppbus);
 if (VAR_4 == VAR_3->lastdata)
  return;
 VAR_7 = VAR_3->lastdata ^ VAR_4;
 VAR_6 = 1;
 for (VAR_5 = 1; VAR_5 < 9; VAR_5 ++) {
  if (VAR_7 & VAR_6) {
   FUNC_3(&VAR_3->pps[VAR_5]);
   FUNC_4(&VAR_3->pps[VAR_5],
       VAR_4 & VAR_6 ? VAR_0 : VAR_1);
  }
  VAR_6 += VAR_6;
 }
 VAR_3->lastdata = VAR_4;
 FUNC_1(&VAR_3->timeout, 1, FUNC_5, VAR_3);
}
