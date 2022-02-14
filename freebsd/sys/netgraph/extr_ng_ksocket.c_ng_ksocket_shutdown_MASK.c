
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_10__ {int so_snd; int so_rcv; } ;
struct TYPE_9__ {int flags; int node; int embryos; TYPE_2__* so; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__* const,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__* const,int) ;
 int FUNC_9 (TYPE_1__* const,int ) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_13(node_p VAR_5)
{
 const priv_p VAR_6 = FUNC_3(VAR_5);
 priv_p VAR_7;


 if (VAR_6->so != ((void*)0)) {
  FUNC_6(&VAR_6->so->so_rcv);
  FUNC_12(VAR_6->so, VAR_2);
  FUNC_7(&VAR_6->so->so_rcv);
  FUNC_6(&VAR_6->so->so_snd);
  FUNC_12(VAR_6->so, VAR_3);
  FUNC_7(&VAR_6->so->so_snd);
  FUNC_11(VAR_6->so);
  VAR_6->so = ((void*)0);
 }


 if (VAR_6->flags & VAR_0) {
  FUNC_2(VAR_6, VAR_4);
  VAR_6->flags &= ~VAR_0;
 }


 while (!FUNC_0(&VAR_6->embryos)) {
  VAR_7 = FUNC_1(&VAR_6->embryos);
  FUNC_10(VAR_7->node);
 }


 FUNC_8(VAR_6, sizeof(*VAR_6));
 FUNC_9(VAR_6, VAR_1);
 FUNC_4(VAR_5, ((void*)0));
 FUNC_5(VAR_5);
 return (0);
}
