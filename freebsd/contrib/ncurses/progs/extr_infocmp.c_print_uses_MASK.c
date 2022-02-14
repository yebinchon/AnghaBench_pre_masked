
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int nuses; TYPE_1__* uses; } ;
struct TYPE_4__ {char* name; } ;
typedef int FILE ;
typedef TYPE_2__ ENTRY ;


 int FUNC_0 (char*,int *) ;

__attribute__((used)) static void
FUNC_1(ENTRY * VAR_0, FILE *VAR_1)

{
    unsigned VAR_2;

    if (!VAR_0->nuses)
 FUNC_0("NULL", VAR_1);
    else
 for (VAR_2 = 0; VAR_2 < VAR_0->nuses; VAR_2++) {
     FUNC_0(VAR_0->uses[VAR_2].name, VAR_1);
     if (VAR_2 < VAR_0->nuses - 1)
  FUNC_0(" ", VAR_1);
 }
}
