
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_list_entry {struct krping_stats* stats; } ;
struct stats_list {int dummy; } ;
struct krping_stats {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stats_list*,struct stats_list_entry*,int ) ;
 int FUNC_1 (struct stats_list_entry*,int ) ;
 int VAR_3 ;
 void* FUNC_2 (int,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct krping_stats *VAR_4, void *VAR_5)
{
 struct stats_list_entry *VAR_6;
 struct stats_list *VAR_7 = VAR_5;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);
 if (VAR_6 == ((void*)0))
  return;
 if (VAR_4 != ((void*)0)) {
  VAR_6->stats = FUNC_2(sizeof(*VAR_4), VAR_0, VAR_1 | VAR_2);
  if (VAR_6->stats == ((void*)0)) {
   FUNC_1(VAR_6, VAR_0);
   return;
  }
  *VAR_6->stats = *VAR_4;
 }
 FUNC_0(VAR_7, VAR_6, VAR_3);
}
