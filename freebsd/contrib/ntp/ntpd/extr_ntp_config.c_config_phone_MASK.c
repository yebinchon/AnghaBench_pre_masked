
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; struct TYPE_5__* link; } ;
typedef TYPE_1__ string_node ;
struct TYPE_6__ {int phone; } ;
typedef TYPE_2__ config_tree ;


 int FUNC_0 (int **) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int ** VAR_1 ;

__attribute__((used)) static void
FUNC_4(
 config_tree *VAR_2
 )
{
 size_t VAR_3;
 string_node * VAR_4;

 VAR_3 = 0;
 VAR_4 = FUNC_1(VAR_2->phone);
 for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->link) {

  if (VAR_3 < FUNC_0(VAR_1) - 1) {
   VAR_1[VAR_3++] = FUNC_2(VAR_4->s);
   VAR_1[VAR_3] = ((void*)0);
  } else {
   FUNC_3(VAR_0,
    "phone: Number of phone entries exceeds %zu. Ignoring phone %s...",
    (FUNC_0(VAR_1) - 1), VAR_4->s);
  }
 }
}
