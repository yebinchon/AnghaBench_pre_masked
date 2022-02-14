
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nlist; int * list; } ;
typedef int Char ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,size_t,int,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
    size_t VAR_3, VAR_4;

    VAR_1++;

    FUNC_2(VAR_2.list, VAR_2.nlist, sizeof(Char *), VAR_0);


    for (VAR_4 = 0, VAR_3 = 0; VAR_4 + 1 < VAR_2.nlist; VAR_4++) {
 if (FUNC_0(VAR_2.list[VAR_4], VAR_2.list[VAR_4 + 1]) == 0)
     VAR_3++;
 else if (VAR_3)
     VAR_2.list[VAR_4 - VAR_3] = VAR_2.list[VAR_4];
    }

    if (VAR_3)
 VAR_2.list[VAR_4 - VAR_3] = VAR_2.list[VAR_4];
    VAR_2.nlist -= VAR_3;
    FUNC_1(&VAR_1);
}
