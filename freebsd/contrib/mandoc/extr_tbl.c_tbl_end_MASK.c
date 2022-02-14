
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_span {struct tbl_span* next; int * first; } ;
struct tbl_node {scalar_t__ part; int pos; int line; struct tbl_span* first_span; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;

int
FUNC_1(struct tbl_node *VAR_4, int VAR_5)
{
 struct tbl_span *VAR_6;

 if (VAR_5)
  FUNC_0(VAR_0, VAR_4->line, VAR_4->pos, "TS");
 else if (VAR_4->part == VAR_3)
  FUNC_0(VAR_1, VAR_4->line, VAR_4->pos, "TE");

 VAR_6 = VAR_4->first_span;
 while (VAR_6 != ((void*)0) && VAR_6->first == ((void*)0))
  VAR_6 = VAR_6->next;
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_2, VAR_4->line, VAR_4->pos, ((void*)0));
  return 0;
 }
 return 1;
}
