
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
struct TYPE_4__ {scalar_t__ enableVJCompression; } ;
struct TYPE_5__ {int * hooks; scalar_t__ vjCompHooked; TYPE_1__ conf; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_2, item_p VAR_3, uint16_t VAR_4)
{
 const priv_p VAR_5 = FUNC_1(VAR_2);

 if (VAR_4 == VAR_1 &&
     VAR_5->conf.enableVJCompression &&
     VAR_5->vjCompHooked) {
  int VAR_6;


  FUNC_0(VAR_6, VAR_3, VAR_5->hooks[VAR_0]);
  return (VAR_6);
 }

 return (FUNC_2(VAR_2, VAR_3, VAR_4));
}
