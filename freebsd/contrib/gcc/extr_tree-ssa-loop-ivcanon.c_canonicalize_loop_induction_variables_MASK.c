
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
struct loops {int dummy; } ;
struct loop {int num; TYPE_1__* single_exit; } ;
typedef enum unroll_level { ____Placeholder_unroll_level } unroll_level ;
typedef TYPE_1__* edge ;
struct TYPE_6__ {int src; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct loop*,TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct loop*,TYPE_1__**) ;
 int FUNC_6 (struct loop*,TYPE_1__**) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__,char*,...) ;
 int FUNC_9 (struct loop*,int ) ;
 int FUNC_10 (struct loop*) ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_12 (struct loops*,struct loop*,TYPE_1__*,int ,int) ;

__attribute__((used)) static bool
FUNC_13 (struct loops *VAR_6, struct loop *VAR_7,
           bool VAR_8, enum unroll_level VAR_9,
           bool VAR_10)
{
  edge VAR_11 = ((void*)0);
  tree VAR_12;

  VAR_12 = FUNC_10 (VAR_7);
  if (FUNC_0 (VAR_12) == VAR_0)
    {
      VAR_11 = VAR_7->single_exit;
      if (!FUNC_9 (VAR_7, VAR_11->src))
 return 0;




      VAR_12 = FUNC_7 (VAR_1, FUNC_1 (VAR_12), VAR_12,
      FUNC_2 (FUNC_1 (VAR_12), 1));
    }
  else
    {


      if (!VAR_7->single_exit)
 VAR_12 = FUNC_5 (VAR_7, &VAR_11);


      if (VAR_10
   && (FUNC_3 (VAR_12)
       || FUNC_0 (VAR_12) != VAR_0))
 VAR_12 = FUNC_6 (VAR_7, &VAR_11);

      if (FUNC_3 (VAR_12)
   || FUNC_0 (VAR_12) != VAR_0)
 return 0;
    }

  if (VAR_4 && (VAR_5 & VAR_2))
    {
      FUNC_8 (VAR_4, "Loop %d iterates ", VAR_7->num);
      FUNC_11 (VAR_4, VAR_12, VAR_3);
      FUNC_8 (VAR_4, " times.\n");
    }

  if (FUNC_12 (VAR_6, VAR_7, VAR_11, VAR_12, VAR_9))
    return 1;

  if (VAR_8)
    FUNC_4 (VAR_7, VAR_11, VAR_12);

  return 0;
}
