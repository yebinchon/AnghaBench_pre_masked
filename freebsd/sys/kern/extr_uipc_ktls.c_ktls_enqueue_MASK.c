
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct mbuf_ext_pgs {int enc_cnt; TYPE_2__* tls; struct socket* so; struct mbuf* mbuf; } ;
struct TYPE_3__ {struct mbuf_ext_pgs* ext_pgs; } ;
struct mbuf {int m_flags; TYPE_1__ m_ext; } ;
struct ktls_wq {int running; int mtx; int head; } ;
struct TYPE_4__ {scalar_t__ mode; size_t wq_index; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf_ext_pgs*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 struct ktls_wq* VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (struct ktls_wq*) ;

void
FUNC_6(struct mbuf *VAR_6, struct socket *VAR_7, int VAR_8)
{
 struct mbuf_ext_pgs *VAR_9;
 struct ktls_wq *VAR_10;
 bool VAR_11;

 FUNC_0(((VAR_6->m_flags & (VAR_0 | VAR_1)) ==
     (VAR_0 | VAR_1)),
     ("ktls_enqueue: %p not unready & nomap mbuf\n", VAR_6));
 FUNC_0(VAR_8 != 0, ("enqueueing TLS mbuf with zero page count"));

 VAR_9 = VAR_6->m_ext.ext_pgs;

 FUNC_0(VAR_9->tls->mode == VAR_2, ("!SW TLS mbuf"));

 VAR_9->enc_cnt = VAR_8;
 VAR_9->mbuf = VAR_6;





 VAR_9->so = VAR_7;

 VAR_10 = &VAR_4[VAR_9->tls->wq_index];
 FUNC_3(&VAR_10->mtx);
 FUNC_1(&VAR_10->head, VAR_9, VAR_5);
 VAR_11 = VAR_10->running;
 FUNC_4(&VAR_10->mtx);
 if (!VAR_11)
  FUNC_5(VAR_10);
 FUNC_2(VAR_3, 1);
}
