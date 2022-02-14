
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int sbitmap ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__ value; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,char*) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (FILE *VAR_5, tree VAR_6)
{
  tree VAR_7;
  sbitmap VAR_8;

  FUNC_6 (VAR_5, VAR_6, VAR_3);

  if (FUNC_3 (VAR_6) != VAR_1)
    return;

  VAR_8 = FUNC_7 (VAR_4);
  FUNC_9 (VAR_8);
  FUNC_0 (VAR_8, FUNC_1 (VAR_6));

  FUNC_4 (VAR_5, " copy-of chain: ");

  VAR_7 = VAR_6;
  FUNC_6 (VAR_5, VAR_7, 0);
  FUNC_4 (VAR_5, " ");
  while (VAR_2[FUNC_1 (VAR_7)].value)
    {
      FUNC_4 (VAR_5, "-> ");
      VAR_7 = VAR_2[FUNC_1 (VAR_7)].value;
      FUNC_6 (VAR_5, VAR_7, 0);
      FUNC_4 (VAR_5, " ");
      if (FUNC_2 (VAR_8, FUNC_1 (VAR_7)))
        break;
      FUNC_0 (VAR_8, FUNC_1 (VAR_7));
    }

  VAR_7 = FUNC_5 (VAR_6)->value;
  if (VAR_7 == VAR_0)
    FUNC_4 (VAR_5, "[UNDEFINED]");
  else if (VAR_7 != VAR_6)
    FUNC_4 (VAR_5, "[COPY]");
  else
    FUNC_4 (VAR_5, "[NOT A COPY]");

  FUNC_8 (VAR_8);
}
