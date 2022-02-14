
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
typedef struct mbuf* item_p ;
typedef int hook_p ;
struct TYPE_4__ {int enableCompression; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;
typedef struct mbuf* NGI_M ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,struct mbuf*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int const) ;


 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const,struct mbuf*,int ) ;
 struct mbuf* FUNC_6 (struct mbuf*,int *) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_3, item_p VAR_4)
{
 const node_p VAR_5 = FUNC_2(VAR_3);
 const priv_p VAR_6 = FUNC_3(VAR_5);
 uint16_t VAR_7;

 switch (VAR_6->conf.enableCompression) {
     case 128:
  FUNC_1(VAR_4);
  return (VAR_1);
     case 129:
  {
   struct mbuf *VAR_8;

   FUNC_0(VAR_4, VAR_8);
   if ((VAR_8 = FUNC_6(VAR_8, &VAR_7)) == ((void*)0)) {
    FUNC_1(VAR_4);
    return (VAR_0);
   }
   NGI_M(VAR_9) = VAR_8;
   if (!FUNC_4(VAR_7)) {
    FUNC_1(VAR_9);
    return (VAR_0);
   }
  }
  break;
     default:
  VAR_7 = VAR_2;
  break;
 }
 return (FUNC_5(VAR_5, VAR_4, VAR_7));
}
