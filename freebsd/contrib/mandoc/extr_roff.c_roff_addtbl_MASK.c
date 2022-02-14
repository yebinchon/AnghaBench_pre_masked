
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tbl_span {int dummy; } ;
struct tbl_node {int dummy; } ;
struct roff_node {int flags; struct tbl_span* span; } ;
struct TYPE_2__ {scalar_t__ macroset; } ;
struct roff_man {int next; TYPE_1__ meta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct roff_man*,int ) ;
 struct roff_node* FUNC_1 (struct roff_man*,int,int ,int ,int ) ;
 int FUNC_2 (struct roff_man*,struct roff_node*) ;
 struct tbl_span* FUNC_3 (struct tbl_node*) ;

__attribute__((used)) static void
FUNC_4(struct roff_man *VAR_7, int VAR_8, struct tbl_node *VAR_9)
{
 struct roff_node *VAR_10;
 struct tbl_span *VAR_11;

 if (VAR_7->meta.macroset == VAR_0)
  FUNC_0(VAR_7, VAR_5);
 while ((VAR_11 = FUNC_3(VAR_9)) != ((void*)0)) {
  VAR_10 = FUNC_1(VAR_7, VAR_8, 0, VAR_3, VAR_6);
  VAR_10->span = VAR_11;
  FUNC_2(VAR_7, VAR_10);
  VAR_10->flags |= VAR_2 | VAR_1;
  VAR_7->next = VAR_4;
 }
}
