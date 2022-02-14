
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* arg; } ;
typedef TYPE_1__ ins ;
struct TYPE_6__ {int cc; int r; int rp; int pr; int prp; scalar_t__ constant; int type; void* X_op; } ;
typedef TYPE_2__ argument ;


 scalar_t__ FUNC_0 (char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (char*,TYPE_1__*) ;
 int * FUNC_7 (char*,char) ;

__attribute__((used)) static void
FUNC_8 (char *VAR_17, ins * VAR_18)
{
  int VAR_19;
  argument *VAR_20 = VAR_18->arg + VAR_13;


  VAR_20->type = VAR_14;


  if ((FUNC_0 ("b")) && ((VAR_19 = FUNC_1 (VAR_17)) != -1))
    {
      VAR_20->type = VAR_2;
      VAR_20->cc = VAR_19;
      VAR_20->X_op = VAR_0;
      return;
    }


  if ((VAR_19 = FUNC_4 (VAR_17)) != VAR_16)
    {
      VAR_20->type = VAR_10;
      VAR_20->r = VAR_19;
      VAR_20->X_op = 0;
      return;
    }


  if ((VAR_17[0] == '(')
      && ((VAR_19 = FUNC_5 (VAR_17)) != VAR_16))
    {
      VAR_20->type = VAR_12;
      VAR_20->rp = VAR_19;
      VAR_20->X_op = VAR_0;
      return;
    }




  if (!(FUNC_0 ("lprd") || (FUNC_0 ("sprd")))
      && ((VAR_19 = FUNC_2 (VAR_17)) != VAR_15))
    {
      VAR_20->type = VAR_8;
      VAR_20->pr = VAR_19;
      VAR_20->X_op = VAR_0;
      return;
    }


  if ((VAR_19 = FUNC_3 (VAR_17)) != VAR_15)
    {
      VAR_20->type = VAR_9;
      VAR_20->prp = VAR_19;
      VAR_20->X_op = VAR_0;
      return;
    }


  switch (VAR_17[0])
    {
    case '$':
      if (FUNC_7 (VAR_17, '(') != ((void*)0))
 VAR_20->type = VAR_6;
      else
 VAR_20->type = VAR_5;
      goto set_params;
      break;

    case '(':
      VAR_20->type = VAR_11;
      goto set_params;
      break;

    case '[':
      VAR_20->type = VAR_7;
      goto set_params;
      break;

    default:
      break;
    }

  if (FUNC_7 (VAR_17, '(') != ((void*)0))
    {
      if (FUNC_7 (VAR_17, ',') != ((void*)0)
          && (FUNC_7 (VAR_17, ',') > FUNC_7 (VAR_17, '(')))
        VAR_20->type = VAR_4;
      else
        VAR_20->type = VAR_3;
    }
  else
    VAR_20->type = VAR_1;


 set_params:
  VAR_20->constant = 0;
  FUNC_6 (VAR_17, VAR_18);
}
