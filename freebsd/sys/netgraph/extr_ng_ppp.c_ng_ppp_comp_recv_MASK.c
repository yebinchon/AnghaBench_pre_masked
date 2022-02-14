
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
struct TYPE_4__ {scalar_t__ enableDecompression; } ;
struct TYPE_5__ {int ** hooks; TYPE_1__ conf; } ;
typedef struct mbuf* NGI_M ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct mbuf* FUNC_4 (struct mbuf*,int,int ) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_4, item_p VAR_5, uint16_t VAR_6, uint16_t VAR_7)
{
 const priv_p VAR_8 = FUNC_3(VAR_4);

 if (VAR_6 < 0x4000 &&
     ((VAR_6 == VAR_3 && VAR_8->conf.enableDecompression) ||
     VAR_8->conf.enableDecompression == VAR_2) &&
     VAR_8->hooks[VAR_1] != ((void*)0)) {
  int VAR_9;

  if (VAR_8->conf.enableDecompression == VAR_2) {
   struct mbuf *VAR_10;
   FUNC_0(VAR_5, VAR_10);
   if ((VAR_10 = FUNC_4(VAR_10, VAR_6, 0)) == ((void*)0)) {
    FUNC_1(VAR_5);
    return (VAR_0);
   }
   NGI_M(VAR_11) = VAR_10;
  }


  FUNC_2(VAR_9, VAR_5,
      VAR_8->hooks[VAR_1]);
  return (VAR_9);
 } else if (VAR_6 == VAR_3) {


  return (FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7));
 }

 return (FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7));
}
