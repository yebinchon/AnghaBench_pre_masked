
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timecounter {int tc_flags; int tc_name; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,struct timecounter*,int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 struct timecounter VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int VAR_7 ;
 struct timecounter* VAR_8 ;

__attribute__((used)) static void
FUNC_5(struct timecounter *VAR_9)
{
 struct timecounter *VAR_10;


 if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_7, VAR_3);
  VAR_3 = ((void*)0);
 }

 if ((VAR_8->tc_flags & VAR_1) != 0) {




  return;
 }

 FUNC_2(VAR_9 == &VAR_5,
     ("acpi_timer_suspend_handler: wrong timecounter"));

 VAR_10 = VAR_8;
 if (VAR_10 != VAR_9) {
  if (VAR_6)
   FUNC_4(VAR_2,
       "switching timecounter, %s -> %s\n",
       VAR_10->tc_name, VAR_9->tc_name);
  (void)FUNC_3();
  (void)FUNC_3();
  VAR_8 = VAR_9;
  VAR_3 = FUNC_1(VAR_7,
      VAR_4, VAR_10, VAR_0);
 }
}
