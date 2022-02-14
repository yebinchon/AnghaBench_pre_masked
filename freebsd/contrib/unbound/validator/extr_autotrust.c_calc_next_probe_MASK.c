
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct module_env {scalar_t__* now; int rnd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,long) ;

__attribute__((used)) static time_t
FUNC_1(struct module_env* VAR_1, time_t VAR_2)
{

 time_t VAR_3, VAR_4;
 if(!VAR_0) {
  if(VAR_2 < 3600)
   VAR_2 = 3600;
 } else {
  if(VAR_2 == 0) VAR_2 = 1;
 }
 VAR_3 = VAR_2/10;
 VAR_4 = VAR_2-VAR_3;
 VAR_3 = (time_t)FUNC_0(VAR_1->rnd, (long int)VAR_3);
 return (time_t)(*VAR_1->now + VAR_4 + VAR_3);
}
