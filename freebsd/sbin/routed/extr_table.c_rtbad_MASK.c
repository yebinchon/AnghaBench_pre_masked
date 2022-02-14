
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_spare {int rts_metric; } ;
struct rt_entry {int rt_state; struct rt_spare* rt_spares; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt_entry*,int,struct rt_spare*,int ) ;
 int FUNC_1 (struct rt_entry*,int ) ;

__attribute__((used)) static void
FUNC_2(struct rt_entry *VAR_4)
{
 struct rt_spare VAR_5;


 VAR_5 = VAR_4->rt_spares[0];
 VAR_5.rts_metric = VAR_0;
 FUNC_0(VAR_4, VAR_4->rt_state & ~(VAR_1 | VAR_2 | VAR_3), &VAR_5, 0);
 FUNC_1(VAR_4, 0);
}
