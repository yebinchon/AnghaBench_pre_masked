
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_priv_d {int np_kloop_state; int * np_si; struct netmap_adapter* np_na; int * np_nifp; } ;
struct netmap_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (struct netmap_adapter*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;

int
FUNC_7(struct netmap_priv_d *VAR_4)
{
 struct netmap_adapter *VAR_5;
 bool VAR_6 = 1;
 int VAR_7 = 0;

 if (VAR_4->np_nifp == ((void*)0)) {
  return VAR_0;
 }
 FUNC_3();

 VAR_5 = VAR_4->np_na;
 if (!FUNC_4(VAR_5)) {
  return VAR_0;
 }


 FUNC_0();
 VAR_4->np_kloop_state |= VAR_2;
 FUNC_1();




 FUNC_5(VAR_4->np_si[VAR_3]);


 while (VAR_6) {
  FUNC_6(1000, 1500);
  FUNC_0();
  VAR_6 = (FUNC_2(VAR_4->np_kloop_state)
    & VAR_1);
  FUNC_1();
 }

 return VAR_7;
}
