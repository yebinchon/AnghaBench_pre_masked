
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* constraint_t ;
typedef int constraint_graph_t ;
typedef int bitmap ;
struct TYPE_12__ {int solution; int is_special_var; } ;
struct TYPE_10__ {scalar_t__ type; unsigned int var; int offset; } ;
struct TYPE_9__ {scalar_t__ type; unsigned int var; } ;
struct TYPE_11__ {TYPE_2__ rhs; TYPE_1__ lhs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (int) ;
 TYPE_4__* FUNC_7 (unsigned int) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9 (constraint_graph_t VAR_5, constraint_t VAR_6, bitmap VAR_7)
{
  if (VAR_6->lhs.type == VAR_1)
    {
      if (VAR_6->rhs.type == VAR_0)
 {

   FUNC_2 (VAR_5, VAR_6, VAR_7);
 }
      else
 {

   FUNC_3 (VAR_6, VAR_7);
 }
    }
  else if (VAR_6->rhs.type == VAR_1)
    {

      if (!(FUNC_7 (VAR_6->lhs.var)->is_special_var))
 FUNC_4 (VAR_5, VAR_6, VAR_7);
    }
  else
    {
      bitmap VAR_8;
      bitmap VAR_9;
      bool VAR_10 = 0;
      unsigned int VAR_11;

      FUNC_6 (VAR_6->rhs.type == VAR_2 && VAR_6->lhs.type == VAR_2);
      VAR_11 = FUNC_5 (VAR_6->rhs.var);
      VAR_9 = FUNC_7 (VAR_11)->solution;
      VAR_11 = FUNC_5 (VAR_6->lhs.var);
      VAR_8 = FUNC_7 (VAR_11)->solution;

      VAR_10 = FUNC_8 (VAR_8, VAR_9, VAR_6->rhs.offset);

      if (VAR_10)
 {
   FUNC_7 (VAR_11)->solution = VAR_8;
   if (!FUNC_1 (VAR_3, VAR_11))
     {
       FUNC_0 (VAR_3, VAR_11);
       VAR_4++;
     }
 }
    }
}
