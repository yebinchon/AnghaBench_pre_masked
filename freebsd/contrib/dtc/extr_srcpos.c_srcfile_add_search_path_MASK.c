
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_path {struct search_path* next; int dirname; } ;


 struct search_path* VAR_0 ;
 struct search_path** VAR_1 ;
 struct search_path* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

void FUNC_2(const char *VAR_2)
{
 struct search_path *VAR_3;


 VAR_3 = FUNC_0(sizeof(*VAR_3));
 VAR_3->next = ((void*)0);
 VAR_3->dirname = FUNC_1(VAR_2);


 if (VAR_1)
  *VAR_1 = VAR_3;
 else
  VAR_0 = VAR_3;
 VAR_1 = &VAR_3->next;
}
