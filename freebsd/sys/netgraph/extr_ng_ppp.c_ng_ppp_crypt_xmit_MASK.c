
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
struct TYPE_4__ {scalar_t__ enableEncryption; } ;
struct TYPE_5__ {int ** hooks; TYPE_1__ conf; } ;
typedef struct mbuf* NGI_M ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct mbuf*,int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_2 ;
 struct mbuf* FUNC_4 (struct mbuf*,int,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_3, item_p VAR_4, uint16_t VAR_5)
{
 const priv_p VAR_6 = FUNC_3(VAR_3);

 if (VAR_6->conf.enableEncryption &&
     VAR_5 < 0x4000 &&
     VAR_5 != VAR_2 &&
     VAR_6->hooks[VAR_1] != ((void*)0)) {
  struct mbuf *VAR_7;
  int VAR_8;

  FUNC_0(VAR_4, VAR_7);
  if ((VAR_7 = FUNC_4(VAR_7, VAR_5, 0)) == ((void*)0)) {
   FUNC_1(VAR_4);
   return (VAR_0);
  }
  NGI_M(VAR_9) = VAR_7;


  FUNC_2(VAR_8, VAR_9, VAR_6->hooks[VAR_1]);
  return (VAR_8);
 }

 return (FUNC_5(VAR_3, VAR_4, VAR_5));
}
