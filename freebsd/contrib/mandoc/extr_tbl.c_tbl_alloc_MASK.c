
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char tab; char decimal; } ;
struct tbl_node {int line; int pos; TYPE_1__ opts; int part; struct tbl_node* next; } ;


 int VAR_0 ;
 struct tbl_node* FUNC_0 (int,int) ;

struct tbl_node *
FUNC_1(int VAR_1, int VAR_2, struct tbl_node *VAR_3)
{
 struct tbl_node *VAR_4;

 VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 if (VAR_3 != ((void*)0))
  VAR_3->next = VAR_4;
 VAR_4->line = VAR_2;
 VAR_4->pos = VAR_1;
 VAR_4->part = VAR_0;
 VAR_4->opts.tab = '\t';
 VAR_4->opts.decimal = '.';
 return VAR_4;
}
