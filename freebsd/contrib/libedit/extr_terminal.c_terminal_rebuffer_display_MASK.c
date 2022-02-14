
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* v; void* h; } ;
typedef TYPE_2__ coord_t ;
struct TYPE_7__ {TYPE_2__ t_size; } ;
struct TYPE_9__ {TYPE_1__ el_terminal; } ;
typedef TYPE_3__ EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(EditLine *VAR_2)
{
 coord_t *VAR_3 = &VAR_2->el_terminal.t_size;

 FUNC_2(VAR_2);

 VAR_3->h = FUNC_0(VAR_0);
 VAR_3->v = FUNC_0(VAR_1);

 if (FUNC_1(VAR_2) == -1)
  return -1;
 return 0;
}
