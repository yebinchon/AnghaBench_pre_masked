
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int refCount; int hits; } ;
typedef TYPE_1__ Path ;
typedef int * LstNode ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_5(void)
{
    LstNode VAR_7;
    Path *VAR_8;

    FUNC_4(VAR_2, "#*** Directory Cache:\n");
    FUNC_4(VAR_2, "# Stats: %d hits %d misses %d near misses %d losers (%d%%)\n",
       VAR_3, VAR_4, VAR_5, VAR_1,
       (VAR_3+VAR_1+VAR_5 ?
        VAR_3 * 100 / (VAR_3 + VAR_1 + VAR_5) : 0));
    FUNC_4(VAR_2, "# %-20s referenced\thits\n", "directory");
    if (FUNC_3(VAR_6) == VAR_0) {
 while ((VAR_7 = FUNC_2(VAR_6)) != ((void*)0)) {
     VAR_8 = (Path *)FUNC_1(VAR_7);
     FUNC_4(VAR_2, "# %-20s %10d\t%4d\n", VAR_8->name, VAR_8->refCount, VAR_8->hits);
 }
 FUNC_0(VAR_6);
    }
}
