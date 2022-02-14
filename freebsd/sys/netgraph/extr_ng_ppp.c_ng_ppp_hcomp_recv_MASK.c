
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int * hook_p ;
struct TYPE_4__ {scalar_t__ enableVJDecompression; } ;
struct TYPE_5__ {int ** hooks; scalar_t__ vjCompHooked; TYPE_1__ conf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int ,int *) ;
 TYPE_2__* FUNC_1 (int ) ;


 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_2, item_p VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
 const priv_p VAR_6 = FUNC_1(VAR_2);

 if (VAR_6->conf.enableVJDecompression && VAR_6->vjCompHooked) {
  hook_p VAR_7 = ((void*)0);

  switch (VAR_4) {
      case 129:
   VAR_7 = VAR_6->hooks[VAR_0];
   break;
      case 128:
   VAR_7 = VAR_6->hooks[VAR_1];
   break;
  }

  if (VAR_7) {
   int VAR_8;


   FUNC_0(VAR_8, VAR_3, VAR_7);
   return (VAR_8);
  }
 }

 return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5));
}
