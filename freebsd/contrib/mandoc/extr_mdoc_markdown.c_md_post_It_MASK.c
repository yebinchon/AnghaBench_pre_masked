
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roff_node {scalar_t__ type; TYPE_3__* norm; struct roff_node* prev; int * next; TYPE_1__* parent; } ;
struct TYPE_5__ {int type; int ncols; int * cols; } ;
struct TYPE_6__ {TYPE_2__ Bl; } ;
struct TYPE_4__ {struct roff_node* parent; } ;


 int VAR_0 ;







 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (char) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct roff_node *VAR_10)
{
 struct roff_node *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_10->type != VAR_2)
  return;

 VAR_11 = VAR_10->parent->parent;
 switch (VAR_11->norm->Bl.type) {
 case 134:
 case 132:
 case 129:
 case 131:
  FUNC_1((char)-1);
  if (VAR_4 || VAR_9)
   VAR_6--;
  break;
 case 128:
 case 130:
  FUNC_0(VAR_10);
  break;

 case 133:
  if (VAR_10->next == ((void*)0))
   break;



  VAR_12 = 0;
  while ((VAR_10 = VAR_10->prev) != ((void*)0) && VAR_10->type != VAR_3)
   VAR_12++;







  VAR_13 = VAR_11->norm->Bl.ncols;
  VAR_12 = VAR_12 < VAR_13 ? FUNC_3(VAR_11->norm->Bl.cols[VAR_12]) - VAR_7 +
      (VAR_13 < 5 ? 4 : VAR_13 == 5 ? 3 : 1) : 1;
  if (VAR_12 < 1)
   VAR_12 = 1;
  while (VAR_12-- > 0)
   FUNC_2(' ');

  VAR_8 &= ~VAR_1;
  VAR_5 &= ~VAR_0;
  VAR_7 = 0;
  break;

 default:
  break;
 }
}
