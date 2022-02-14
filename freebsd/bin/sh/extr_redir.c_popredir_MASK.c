
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redirtab {scalar_t__* renamed; scalar_t__ empty_redirs; struct redirtab* next; int fd0_redirected; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct redirtab*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct redirtab* VAR_5 ;

void
FUNC_3(void)
{
 struct redirtab *VAR_6 = VAR_5;
 int VAR_7;

 VAR_1;
 if (VAR_3 > 0) {
  VAR_3--;
  VAR_2;
  return;
 }
 for (VAR_7 = 0 ; VAR_7 < 10 ; VAR_7++) {
  if (VAR_6->renamed[VAR_7] != VAR_0) {
   if (VAR_6->renamed[VAR_7] >= 0) {
    FUNC_2(VAR_6->renamed[VAR_7], VAR_7);
    FUNC_1(VAR_6->renamed[VAR_7]);
   } else {
    FUNC_1(VAR_7);
   }
  }
 }
 VAR_4 = VAR_6->fd0_redirected;
 VAR_3 = VAR_6->empty_redirs;
 VAR_5 = VAR_6->next;
 FUNC_0(VAR_6);
 VAR_2;
}
