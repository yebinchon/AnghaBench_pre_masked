
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_15__ {int atr; } ;
struct TYPE_14__ {int atr; } ;
struct TYPE_13__ {int atr; } ;
struct TYPE_12__ {int atr; } ;
struct TYPE_11__ {int atr; } ;
struct TYPE_10__ {int atr; } ;
struct TYPE_9__ {int atr; } ;
struct TYPE_16__ {TYPE_7__ item; TYPE_6__ item_selected; TYPE_5__ tag; TYPE_4__ tag_selected; TYPE_3__ check; TYPE_2__ check_selected; TYPE_1__ menubox; } ;


 scalar_t__ VAR_0 ;
 TYPE_8__ VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int * FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,scalar_t__) ;
 int FUNC_7 (int *,char*,char) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(WINDOW * VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;


 FUNC_5(VAR_4, VAR_1.menubox.atr);
 FUNC_6(VAR_4, VAR_5, 0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_3(VAR_4, ' ');

 FUNC_6(VAR_4, VAR_5, VAR_0);
 FUNC_5(VAR_4, VAR_6 ? VAR_1.check_selected.atr
   : VAR_1.check.atr);
 if (!FUNC_0(':'))
  FUNC_7(VAR_4, "(%c)", FUNC_0('X') ? 'X' : ' ');

 FUNC_5(VAR_4, VAR_6 ? VAR_1.tag_selected.atr : VAR_1.tag.atr);
 FUNC_2(VAR_4, VAR_5, VAR_2, FUNC_1()[0]);
 FUNC_5(VAR_4, VAR_6 ? VAR_1.item_selected.atr : VAR_1.item.atr);
 FUNC_4(VAR_4, (char *)FUNC_1() + 1);
 if (VAR_6) {
  FUNC_6(VAR_4, VAR_5, VAR_0 + 1);
  FUNC_8(VAR_4);
 }
}
