
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct dst_entry {struct dst_entry* next; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 struct dst_entry* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct net *VAR_2)
{
 struct dst_entry *VAR_3, *VAR_4;

 FUNC_1(&VAR_0);
 VAR_3 = VAR_1;
 VAR_1 = ((void*)0);
 FUNC_2(&VAR_0);

 while (VAR_3) {
  VAR_4 = VAR_3->next;
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 }
}
