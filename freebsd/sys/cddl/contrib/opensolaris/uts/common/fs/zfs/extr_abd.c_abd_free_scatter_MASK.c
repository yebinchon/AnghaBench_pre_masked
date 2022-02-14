
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * abd_chunks; } ;
struct TYPE_8__ {TYPE_1__ abd_scatter; } ;
struct TYPE_9__ {size_t abd_size; int abd_children; TYPE_2__ abd_u; } ;
typedef TYPE_3__ abd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(abd_t *VAR_4)
{
 size_t VAR_5 = FUNC_4(VAR_4);
 for (int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_2(VAR_4->abd_u.abd_scatter.abd_chunks[VAR_6]);
 }

 FUNC_5(&VAR_4->abd_children);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2, -(int)VAR_4->abd_size);
 FUNC_1(VAR_0,
     VAR_4->abd_size - VAR_5 * VAR_3);

 FUNC_3(VAR_4);
}
