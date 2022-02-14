
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tdData; } ;
typedef TYPE_1__ tiRoot_t ;
struct TYPE_7__ {int tdsaAllShared; } ;
typedef TYPE_2__ tdsaRoot_t ;
struct TYPE_8__ {int CardID; int CardIDString; } ;
typedef TYPE_3__ tdsaContext_t ;
typedef int bit32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

bit32 FUNC_5(tiRoot_t *VAR_2)
{
  tdsaRoot_t *VAR_3 = (tdsaRoot_t *) VAR_2->tdData;
  tdsaContext_t *VAR_4 = (tdsaContext_t *)&(VAR_3->tdsaAllShared);
  bit32 VAR_5 = VAR_0;
  bit32 VAR_6 = FUNC_4(VAR_2);
  char VAR_7[10];

  FUNC_1(("tdsaGetCardIDString: start\n"));

  FUNC_1(("tdsaGetCardIDString: thisCardID 0x%x\n", VAR_6));


  if (VAR_6 == 0xFFFFFFFF)
  {
    FUNC_0(("tdGetCardIDString: No more CardIDs available\n"));
    VAR_5 = VAR_0;
  }
  else
  {
    VAR_4->CardID = VAR_6;
    FUNC_2(VAR_7,"CardNum%d", VAR_6);
    FUNC_1(("tdsaGetCardIDString: CardNum is %s\n", VAR_7));
    FUNC_3(VAR_4->CardIDString, VAR_7);
    FUNC_1(("tdsaGetCardIDString: tdsaAllShared->CardIDString is %s\n", VAR_4->CardIDString));
    VAR_5 = VAR_1;

  }
  return VAR_5;
}
