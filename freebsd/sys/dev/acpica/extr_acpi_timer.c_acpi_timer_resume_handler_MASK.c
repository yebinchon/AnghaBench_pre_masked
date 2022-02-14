
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timecounter {int (* tc_get_timecount ) (struct timecounter*) ;int tc_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct timecounter*) ;
 int FUNC_2 (struct timecounter*) ;
 struct timecounter* VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct timecounter *VAR_3)
{
 struct timecounter *VAR_4;

 VAR_4 = VAR_2;
 if (VAR_4 != VAR_3) {
  if (VAR_1)
   FUNC_0(VAR_0,
       "restoring timecounter, %s -> %s\n",
       VAR_4->tc_name, VAR_3->tc_name);
  (void)VAR_3->tc_get_timecount(VAR_3);
  (void)VAR_3->tc_get_timecount(VAR_3);
  VAR_2 = VAR_3;
 }
}
