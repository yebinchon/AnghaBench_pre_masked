
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int ifp; } ;


 int VAR_0 ;
 size_t const FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mbuf**) ;
 int FUNC_3 (struct xnb_pkt*,size_t const,int ) ;
 struct mbuf* FUNC_4 (struct xnb_pkt*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(char *VAR_2, size_t VAR_3)
{
 const size_t VAR_4 = VAR_0 - 1;
 struct xnb_pkt VAR_5;
 struct mbuf *VAR_6;

 FUNC_3(&VAR_5, VAR_4, 0);

 VAR_6 = FUNC_4(&VAR_5, VAR_1.ifp);
 FUNC_1(FUNC_0(VAR_6) >= VAR_4);
 FUNC_2(&VAR_6);
}
