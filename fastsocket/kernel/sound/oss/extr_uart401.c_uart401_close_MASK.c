
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ opened; } ;
typedef TYPE_1__ uart401_devc ;
struct TYPE_5__ {scalar_t__ devc; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 uart401_devc *VAR_2 = (uart401_devc *) VAR_0[VAR_1]->devc;

 FUNC_0(VAR_2);
 VAR_2->opened = 0;
}
