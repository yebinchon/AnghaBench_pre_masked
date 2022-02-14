
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_pidcomm {struct per_pidcomm* next; void* comm; } ;
struct per_pid {struct per_pidcomm* all; struct per_pidcomm* current; } ;


 int FUNC_0 (int ) ;
 struct per_pid* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*,char*) ;
 void* FUNC_3 (char*) ;
 struct per_pidcomm* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(int VAR_0, char *VAR_1)
{
 struct per_pid *VAR_2;
 struct per_pidcomm *VAR_3;
 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = VAR_2->all;
 while (VAR_3) {
  if (VAR_3->comm && FUNC_2(VAR_3->comm, VAR_1) == 0) {
   VAR_2->current = VAR_3;
   return;
  }
  if (!VAR_3->comm) {
   VAR_3->comm = FUNC_3(VAR_1);
   VAR_2->current = VAR_3;
   return;
  }
  VAR_3 = VAR_3->next;
 }
 VAR_3 = FUNC_4(sizeof(*VAR_3));
 FUNC_0(VAR_3 != ((void*)0));
 VAR_3->comm = FUNC_3(VAR_1);
 VAR_2->current = VAR_3;
 VAR_3->next = VAR_2->all;
 VAR_2->all = VAR_3;
}
