
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selname {char* msglist_sel; scalar_t__ msglist_len; struct selname* next; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 struct selname* VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(void)
{
  struct selname *VAR_3 =
    (struct selname *) FUNC_0 (sizeof (struct selname));

  VAR_3->next = VAR_2;
  VAR_3->msglist_len = VAR_0;
  VAR_3->msglist_sel = VAR_1;
  VAR_0 = 0;
  VAR_1 = (char *)FUNC_0(1);
  *VAR_1 = 0;
  VAR_2 = VAR_3;
}
