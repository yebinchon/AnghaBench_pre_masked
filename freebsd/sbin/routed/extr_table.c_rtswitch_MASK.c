
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_spare {scalar_t__ rts_metric; } ;
struct rt_entry {int rt_state; struct rt_spare* rt_spares; } ;


 int FUNC_0 (struct rt_entry*,struct rt_spare*,struct rt_spare*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rt_entry*,int,struct rt_spare*,char*) ;
 struct rt_spare* FUNC_2 (struct rt_entry*) ;
 struct rt_spare VAR_6 ;
 int FUNC_3 (char*,char*,int) ;

void
FUNC_4(struct rt_entry *VAR_7,
  struct rt_spare *VAR_8)
{
 struct rt_spare VAR_9;
 char VAR_10[10];



 if (0 != (VAR_7->rt_state & (VAR_2 | VAR_5 | VAR_4
      | VAR_3 | VAR_1)))
  return;


 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_2(VAR_7);



 if (!FUNC_0(VAR_7, VAR_8, VAR_7->rt_spares))
  return;

 VAR_9 = VAR_7->rt_spares[0];
 (void)FUNC_3(VAR_10, "Use #%d", (int)(VAR_8 - VAR_7->rt_spares));
 FUNC_1(VAR_7, VAR_7->rt_state & ~(VAR_3 | VAR_4), VAR_8, VAR_10);
 if (VAR_9.rts_metric == VAR_0) {
  *VAR_8 = VAR_6;
 } else {
  *VAR_8 = VAR_9;
 }
}
