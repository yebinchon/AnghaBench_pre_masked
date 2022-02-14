
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int **** wint_t ;
struct TYPE_6__ {int v; scalar_t__ h; } ;
typedef TYPE_2__ coord_t ;
struct TYPE_5__ {TYPE_2__ t_size; } ;
struct TYPE_7__ {TYPE_1__ el_terminal; } ;
typedef TYPE_3__ EditLine ;


 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (int ******) ;

__attribute__((used)) static wint_t **
FUNC_2(EditLine *VAR_0)
{
 wint_t **VAR_1;
 coord_t *VAR_2 = &VAR_0->el_terminal.t_size;
 int VAR_3;

 VAR_1 = FUNC_0((size_t)(VAR_2->v + 1), sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_2->v; VAR_3++) {
  VAR_1[VAR_3] = FUNC_0((size_t)(VAR_2->h + 1), sizeof(**VAR_1));
  if (VAR_1[VAR_3] == ((void*)0)) {
   while (--VAR_3 >= 0)
    FUNC_1(&VAR_1[VAR_3]);
   FUNC_1(VAR_1);
   return ((void*)0);
  }
 }
 VAR_1[VAR_2->v] = ((void*)0);
 return VAR_1;
}
