
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int SYMBOL_REF_FLAGS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_10 () ;

rtx
FUNC_11 (void)
{
  rtx VAR_7;

  if (!VAR_5)
    {
      VAR_5 = FUNC_7 (VAR_0, "_GLOBAL_OFFSET_TABLE_");
      SYMBOL_REF_FLAGS (VAR_8) = VAR_1;
    }

  FUNC_10 ();

  if (VAR_2)
    {
      FUNC_1 (VAR_6, VAR_5);
    }
  else
    {
      rtx VAR_9;

      VAR_9 = FUNC_8 (VAR_0, FUNC_4 (1, VAR_5),
          VAR_4);
      VAR_9 = FUNC_5 (VAR_0, VAR_9);
      VAR_9 = FUNC_3 (VAR_0, VAR_9);

      FUNC_1 (VAR_6, VAR_9);

      VAR_9 = FUNC_8 (VAR_0, FUNC_4 (1, FUNC_0 (VAR_9, 0)),
          VAR_3);
      VAR_9 = FUNC_6 (VAR_0, VAR_6, VAR_9);

      FUNC_1 (VAR_6, VAR_9);
    }

  VAR_7 = FUNC_9 ();
  FUNC_2 ();
  return VAR_7;
}
