
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int nuses; TYPE_1__* uses; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_2__ ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1(ENTRY * VAR_2, ENTRY * VAR_3)

{
    unsigned VAR_4, VAR_5;

    if (VAR_2->nuses != VAR_3->nuses)
 return (VAR_0);


    for (VAR_4 = 0; VAR_4 < VAR_2->nuses; VAR_4++) {
 bool VAR_6 = VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_3->nuses; VAR_5++)
     if (!FUNC_0(VAR_2->uses[VAR_4].name, VAR_3->uses[VAR_5].name)) {
  VAR_6 = VAR_1;
  break;
     }

 if (!VAR_6)
     return (VAR_0);
    }

    return (VAR_1);
}
