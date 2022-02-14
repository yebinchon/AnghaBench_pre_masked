
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redirtab {scalar_t__* renamed; struct redirtab* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct redirtab* VAR_1 ;

void
FUNC_1(void)
{
 struct redirtab *VAR_2;
 int VAR_3;

 for (VAR_2 = VAR_1 ; VAR_2 ; VAR_2 = VAR_2->next) {
  for (VAR_3 = 0 ; VAR_3 < 10 ; VAR_3++) {
   if (VAR_2->renamed[VAR_3] >= 0) {
    FUNC_0(VAR_2->renamed[VAR_3]);
   }
   VAR_2->renamed[VAR_3] = VAR_0;
  }
 }
}
