
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ Path ;
typedef int * LstNode ;
typedef scalar_t__ Boolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;

void
FUNC_7(void)
{
    LstNode VAR_8;
    Path *VAR_9;
    Boolean VAR_10 = VAR_0;

    FUNC_6(".PATH", VAR_3);

    if (FUNC_4(VAR_5) == VAR_1) {
 if ((VAR_8 = FUNC_2(VAR_5)) != ((void*)0)) {
     VAR_9 = (Path *)FUNC_1(VAR_8);
     if (VAR_9 == VAR_7) {
  VAR_10 = VAR_2;
  FUNC_5(".PATH", VAR_7->name, VAR_3);
     }
 }

 if (!VAR_10) {
     if (VAR_6)
  FUNC_5(".PATH", VAR_6->name, VAR_3);
     if (VAR_4)
  FUNC_5(".PATH", VAR_4->name, VAR_3);
 }

 while ((VAR_8 = FUNC_3(VAR_5)) != ((void*)0)) {
     VAR_9 = (Path *)FUNC_1(VAR_8);
     if (VAR_9 == VAR_7)
  continue;
     if (VAR_9 == VAR_6 && VAR_10)
  continue;
     FUNC_5(".PATH", VAR_9->name, VAR_3);
 }

 if (VAR_10) {
     if (VAR_6)
  FUNC_5(".PATH", VAR_6->name, VAR_3);
     if (VAR_4)
  FUNC_5(".PATH", VAR_4->name, VAR_3);
 }
 FUNC_0(VAR_5);
    }
}
