
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct symfile {int symbolcnt; TYPE_1__* symbollist; } ;
struct TYPE_3__ {int name; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct symfile *VAR_0, char * VAR_1)
{
 VAR_0->symbollist =
          FUNC_0(VAR_0->symbollist, (VAR_0->symbolcnt + 1) * sizeof(char *));
 VAR_0->symbollist[VAR_0->symbolcnt++].name = FUNC_1(VAR_1);
}
