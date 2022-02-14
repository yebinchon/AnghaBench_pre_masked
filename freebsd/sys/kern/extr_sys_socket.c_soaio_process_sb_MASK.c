
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_vnet; } ;
struct sockbuf {int sb_flags; int sb_aiojobq; } ;
struct kaiocb {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sockbuf*) ;
 int FUNC_3 (struct sockbuf*) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (int *) ;
 struct kaiocb* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct kaiocb*,int ) ;
 int FUNC_8 (struct kaiocb*) ;
 int VAR_2 ;
 int FUNC_9 (struct socket*,struct sockbuf*,struct kaiocb*) ;
 scalar_t__ FUNC_10 (struct socket*,struct sockbuf*) ;
 int FUNC_11 (struct socket*) ;

__attribute__((used)) static void
FUNC_12(struct socket *VAR_3, struct sockbuf *VAR_4)
{
 struct kaiocb *VAR_5;

 FUNC_1(VAR_3->so_vnet);
 FUNC_2(VAR_4);
 while (!FUNC_5(&VAR_4->sb_aiojobq) && FUNC_10(VAR_3, VAR_4)) {
  VAR_5 = FUNC_6(&VAR_4->sb_aiojobq);
  FUNC_7(&VAR_4->sb_aiojobq, VAR_5, VAR_2);
  if (!FUNC_8(VAR_5))
   continue;

  FUNC_9(VAR_3, VAR_4, VAR_5);
 }






 if (!FUNC_5(&VAR_4->sb_aiojobq))
  VAR_4->sb_flags |= VAR_0;
 VAR_4->sb_flags &= ~VAR_1;
 FUNC_3(VAR_4);

 FUNC_4(VAR_3);
 FUNC_11(VAR_3);
 FUNC_0();
}
