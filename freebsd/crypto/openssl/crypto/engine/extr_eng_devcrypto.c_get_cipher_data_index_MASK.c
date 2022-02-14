
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nid; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static size_t FUNC_2(int VAR_1)
{
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
        if (VAR_1 == VAR_0[VAR_2].nid)
            return VAR_2;






    FUNC_1("Code that never should be reached" == ((void*)0));
    return -1;
}
