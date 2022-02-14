
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int options; int addr; } ;
typedef TYPE_1__ addr_opts_node ;
typedef TYPE_1__ addr_opts_fifo ;


 int FUNC_0 (TYPE_1__*,TYPE_1__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(
 addr_opts_fifo * VAR_1
 )
{
 addr_opts_node * VAR_2;

 if (VAR_1 != ((void*)0)) {
  for (;;) {
   FUNC_0(VAR_2, *VAR_1, VAR_0);
   if (VAR_2 == ((void*)0))
    break;
   FUNC_1(VAR_2->addr);
   FUNC_2(VAR_2->options);
   FUNC_3(VAR_2);
  }
  FUNC_3(VAR_1);
 }
}
