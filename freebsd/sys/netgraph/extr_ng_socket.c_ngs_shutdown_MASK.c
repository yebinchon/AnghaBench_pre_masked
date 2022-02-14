
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngsock {int * node; struct ngpcb* ctlsock; struct ngpcb* datasock; int mtx; } ;
struct ngpcb {int ng_socket; } ;
typedef int node_p ;


 struct ngsock* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ngsock* const) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_0)
{
 struct ngsock *const VAR_1 = FUNC_0(VAR_0);
 struct ngpcb *VAR_2, *VAR_3;

 FUNC_3(&VAR_1->mtx);
 VAR_2 = VAR_1->datasock;
 VAR_3 = VAR_1->ctlsock;

 if (VAR_2 != ((void*)0))
  FUNC_5(VAR_2->ng_socket);

 if (VAR_3 != ((void*)0))
  FUNC_5(VAR_3->ng_socket);

 VAR_1->node = ((void*)0);
 FUNC_1(VAR_0, ((void*)0));
 FUNC_4(VAR_1);

 FUNC_2(VAR_0);
 return (0);
}
