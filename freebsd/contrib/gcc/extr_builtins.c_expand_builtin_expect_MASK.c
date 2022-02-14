
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef int NOTE_EXPECTED_VALUE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static rtx
FUNC_10 (tree VAR_10, rtx VAR_11)
{
  tree VAR_12, VAR_13;
  rtx VAR_14, VAR_15;

  if (VAR_10 == VAR_5
      || FUNC_2 (VAR_10) == VAR_5)
    return VAR_7;
  VAR_12 = FUNC_4 (VAR_10);
  VAR_13 = FUNC_4 (FUNC_2 (VAR_10));

  if (FUNC_3 (VAR_13) != VAR_2)
    {
      FUNC_6 ("second argument to %<__builtin_expect%> must be a constant");
      VAR_13 = VAR_9;
    }

  VAR_11 = FUNC_7 (VAR_12, VAR_11, VAR_6, VAR_1);


  if (VAR_8 && FUNC_0 (VAR_11) != VAR_0)
    {



      VAR_11 = FUNC_8 (FUNC_1 (VAR_11), VAR_11);

      VAR_15 = FUNC_7 (VAR_13, VAR_4, FUNC_1 (VAR_11), VAR_1);

      VAR_14 = FUNC_5 (VAR_3);
      NOTE_EXPECTED_VALUE (VAR_16) = FUNC_9 (VAR_6, VAR_11, VAR_15);
    }

  return VAR_11;
}
