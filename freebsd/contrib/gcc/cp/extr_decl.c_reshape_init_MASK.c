
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__ cur; scalar_t__ end; } ;
typedef TYPE_1__ reshape_iter ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_0 ;
 int FUNC_6 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,TYPE_1__*,int) ;
 int VAR_3 ;

tree
FUNC_9 (tree VAR_4, tree VAR_5)
{
  FUNC_2(VAR_0, VAR_2) *VAR_3;
  reshape_iter VAR_6;
  tree VAR_7;

  FUNC_7 (FUNC_0 (VAR_5));

  VAR_3 = FUNC_1 (VAR_5);



  if (FUNC_3 (VAR_0, VAR_3))
    return VAR_5;


  VAR_6.cur = FUNC_4 (VAR_0, VAR_3, 0);
  VAR_6.end = VAR_6.cur + FUNC_5 (VAR_0, VAR_3);

  VAR_7 = FUNC_8 (VAR_4, &VAR_6, 1);
  if (VAR_7 == VAR_1)
    return VAR_1;



  if (VAR_6.cur != VAR_6.end)
    FUNC_6 ("too many initializers for %qT", VAR_4);

  return VAR_7;
}
