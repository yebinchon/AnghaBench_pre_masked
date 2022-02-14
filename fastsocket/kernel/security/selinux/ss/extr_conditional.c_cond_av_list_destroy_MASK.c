
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_av_list {struct cond_av_list* next; } ;


 int FUNC_0 (struct cond_av_list*) ;

__attribute__((used)) static void FUNC_1(struct cond_av_list *VAR_0)
{
 struct cond_av_list *VAR_1, *VAR_2;
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;

  FUNC_0(VAR_1);
 }
}
