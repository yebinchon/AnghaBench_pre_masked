
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int options; } ;
typedef TYPE_1__ filegen_node ;
typedef TYPE_1__ filegen_fifo ;


 int FUNC_0 (TYPE_1__*,TYPE_1__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(
 filegen_fifo * VAR_1
 )
{
 filegen_node * VAR_2;

 if (VAR_1 != ((void*)0)) {
  for (;;) {
   FUNC_0(VAR_2, *VAR_1, VAR_0);
   if (VAR_2 == ((void*)0))
    break;
   FUNC_1(VAR_2->options);
   FUNC_2(VAR_2);
  }
  FUNC_2(VAR_1);
 }
}
