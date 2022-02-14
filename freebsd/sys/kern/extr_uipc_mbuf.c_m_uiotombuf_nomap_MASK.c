
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
struct uio {int uio_resid; } ;
struct mbuf_ext_pgs {int npgs; int last_pg_len; int * pa; int flags; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_7__ {int ext_size; struct mbuf_ext_pgs* ext_pgs; } ;
struct mbuf {int m_len; TYPE_2__ m_pkthdr; TYPE_1__ m_ext; struct mbuf* m_next; } ;
typedef int ssize_t ;
struct TYPE_9__ {int flags; } ;


 int FUNC_0 (struct mbuf_ext_pgs*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (int) ;
 struct mbuf* FUNC_5 (int,int,int ) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_3__**,int ,int,struct uio*) ;
 TYPE_3__* FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct mbuf *
FUNC_9(struct uio *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 struct mbuf *VAR_15, *VAR_16, *VAR_17;
 struct mbuf_ext_pgs *VAR_18;
 vm_page_t VAR_19[VAR_1];
 int VAR_20, VAR_21, VAR_22, VAR_23;
 ssize_t VAR_24;
 int VAR_25 = FUNC_4(VAR_11) | VAR_7 | VAR_6 |
     VAR_8;





 if (VAR_12 > 0)
  VAR_24 = FUNC_1(VAR_10->uio_resid, VAR_12);
 else
  VAR_24 = VAR_10->uio_resid;

 if (VAR_13 == 0)
  VAR_13 = VAR_1 * VAR_4;




 VAR_15 = ((void*)0);
 while (VAR_24 > 0) {
  VAR_16 = FUNC_5(VAR_11, (VAR_14 & VAR_3),
      VAR_9);
  if (VAR_16 == ((void*)0))
   goto failed;
  if (VAR_15 == ((void*)0))
   VAR_15 = VAR_16;
  else
   VAR_17->m_next = VAR_16;
  VAR_17 = VAR_16;
  VAR_18 = VAR_16->m_ext.ext_pgs;
  VAR_18->flags = VAR_0;
  VAR_23 = VAR_21 = FUNC_1(VAR_13, VAR_24);
  for (VAR_22 = 0; VAR_23 > 0; VAR_22++, VAR_23 -= VAR_4) {
retry_page:
   VAR_19[VAR_22] = FUNC_7(((void*)0), 0, VAR_25);
   if (VAR_19[VAR_22] == ((void*)0)) {
    if (VAR_11 & VAR_2) {
     goto failed;
    } else {
     FUNC_8(((void*)0));
     goto retry_page;
    }
   }
   VAR_19[VAR_22]->flags &= ~VAR_5;
   VAR_18->pa[VAR_22] = FUNC_2(VAR_19[VAR_22]);
   VAR_18->npgs++;
  }
  VAR_18->last_pg_len = VAR_21 - VAR_4 * (VAR_18->npgs - 1);
  FUNC_0(VAR_18);
  VAR_24 -= VAR_21;
  VAR_20 = FUNC_6(VAR_19, 0, VAR_21, VAR_10);
  if (VAR_20 != 0)
   goto failed;
  VAR_16->m_len = VAR_21;
  VAR_16->m_ext.ext_size += VAR_4 * VAR_18->npgs;
  if (VAR_14 & VAR_3)
   VAR_15->m_pkthdr.len += VAR_21;
 }
 return (VAR_15);

failed:
 FUNC_3(VAR_15);
 return (((void*)0));
}
