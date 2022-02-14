
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {scalar_t__ header; } ;
typedef int block_stmt_iterator ;
typedef scalar_t__ basic_block ;
typedef int LOC ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct loop*) ;

LOC
FUNC_10 (struct loop *VAR_2)
{
  tree VAR_3 = VAR_0;
  basic_block VAR_4;
  block_stmt_iterator VAR_5;

  if (!VAR_2)
    return VAR_1;

  VAR_3 = FUNC_9 (VAR_2);

  if (VAR_3 && FUNC_4 (VAR_3) && FUNC_1 (VAR_3)
      && FUNC_0 (VAR_3) && FUNC_2 (VAR_3))
    return FUNC_3 (VAR_3);




  if (!VAR_2->header)
    return VAR_1;

  VAR_4 = VAR_2->header;

  for (VAR_5 = FUNC_7 (VAR_4); !FUNC_5 (VAR_5); FUNC_6 (&VAR_5))
    {
      VAR_3 = FUNC_8 (VAR_5);
      if (VAR_3 && FUNC_4 (VAR_3) && FUNC_1 (VAR_3))
        return FUNC_3 (VAR_3);
    }

  return VAR_1;
}
