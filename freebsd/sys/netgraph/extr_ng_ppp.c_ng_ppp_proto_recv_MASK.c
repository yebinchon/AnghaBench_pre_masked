
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct mbuf {int dummy; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int * hook_p ;
struct TYPE_4__ {int enableIPX; int enableAtalk; int enableIPv6; int enableIP; } ;
struct TYPE_5__ {int ** hooks; TYPE_1__ conf; } ;
typedef struct mbuf* NGI_M ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct mbuf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct mbuf*,int *) ;
 TYPE_2__* FUNC_4 (int ) ;




 int VAR_6 ;
 struct mbuf* FUNC_5 (struct mbuf*,int ) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*,int ) ;
 int FUNC_8 (int ,struct mbuf*,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(node_p VAR_8, item_p VAR_9, uint16_t VAR_10, uint16_t VAR_11)
{
 const priv_p VAR_12 = FUNC_4(VAR_8);
 hook_p VAR_13 = ((void*)0);
 int VAR_14;
 switch (VAR_10) {
     case 130:
  if (VAR_12->conf.enableIP)
      VAR_13 = VAR_12->hooks[VAR_2];
  break;
     case 129:
  if (VAR_12->conf.enableIPv6)
      VAR_13 = VAR_12->hooks[VAR_3];
  break;
     case 131:
  if (VAR_12->conf.enableAtalk)
      VAR_13 = VAR_12->hooks[VAR_1];
  break;
     case 128:
  if (VAR_12->conf.enableIPX)
      VAR_13 = VAR_12->hooks[VAR_4];
  break;
 }

 if (VAR_13 == ((void*)0))
  return (FUNC_8(VAR_8, VAR_9, VAR_10, VAR_11));


 FUNC_3(VAR_14, VAR_9, VAR_13);
 return (VAR_14);
}
