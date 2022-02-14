
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int * static_chain_decl; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 unsigned long FUNC_5 (int ) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,scalar_t__) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static unsigned long
FUNC_8 (void)
{
  unsigned long VAR_15 = VAR_4;
  tree VAR_16;
  tree VAR_17;

  FUNC_6 (FUNC_1 (VAR_11) == VAR_6);





  if (VAR_14 > 0
      && (FUNC_2 (VAR_11)
          || !(VAR_13
               || (VAR_12 && !VAR_9)))
      && FUNC_3 (VAR_11))
    VAR_15 |= VAR_5;

  if (VAR_10->static_chain_decl != ((void*)0))
    VAR_15 |= VAR_2;

  VAR_17 = FUNC_0 (VAR_11);

  VAR_16 = FUNC_7 ("naked", VAR_17);
  if (VAR_16 != VAR_7)
    VAR_15 |= VAR_1;

  VAR_16 = FUNC_7 ("isr", VAR_17);
  if (VAR_16 == VAR_7)
    VAR_16 = FUNC_7 ("interrupt", VAR_17);

  if (VAR_16 == VAR_7)
    VAR_15 |= VAR_8 ? VAR_0 : VAR_3;
  else
    VAR_15 |= FUNC_5 (FUNC_4 (VAR_16));

  return VAR_15;
}
