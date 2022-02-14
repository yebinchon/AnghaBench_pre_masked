
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_iovcnt; scalar_t__ uio_segflg; int uio_offset; int uio_resid; TYPE_1__* uio_iov; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int iov_len; char* iov_base; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (struct mbuf*) ;
 char* FUNC_5 (struct mbuf*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*,int) ;
 int FUNC_9 (struct mbuf*,struct mbuf*) ;
 int VAR_3 ;

struct mbuf *
FUNC_10(struct uio *VAR_4, int VAR_5, struct mbuf **VAR_6, char **VAR_7)
{
 char *VAR_8;
 struct mbuf *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 char *VAR_17;

 FUNC_0(VAR_4->uio_iovcnt == 1, ("nfsm_uiotombuf: iovcnt != 1"));

 if (VAR_5 > VAR_3)
  VAR_16 = 1;
 else
  VAR_16 = 0;
 if (VAR_16 != 0)
  FUNC_3(VAR_9, VAR_0);
 else
  FUNC_4(VAR_9);
 FUNC_8(VAR_9, 0);
 VAR_11 = VAR_10 = VAR_9;
 while (VAR_5 > 0) {
  VAR_13 = VAR_4->uio_iov->iov_len;
  VAR_8 = VAR_4->uio_iov->iov_base;
  if (VAR_13 > VAR_5)
   VAR_13 = VAR_5;
  VAR_15 = VAR_13;
  while (VAR_13 > 0) {
   VAR_14 = FUNC_1(VAR_9);
   if (VAR_14 == 0) {
    if (VAR_16)
     FUNC_3(VAR_9, VAR_0);
    else
     FUNC_4(VAR_9);
    FUNC_8(VAR_9, 0);
    FUNC_9(VAR_10, VAR_9);
    VAR_10 = VAR_9;
    VAR_14 = FUNC_1(VAR_9);
   }
   VAR_12 = (VAR_13 > VAR_14) ? VAR_14 : VAR_13;
   if (VAR_4->uio_segflg == VAR_1)
    FUNC_2(VAR_8, FUNC_5(VAR_9, VAR_2) +
        FUNC_7(VAR_9), VAR_12);
   else
    FUNC_6(VAR_8, FUNC_5(VAR_9, VAR_2) +
        FUNC_7(VAR_9), VAR_12);
   FUNC_8(VAR_9, FUNC_7(VAR_9) + VAR_12);
   VAR_13 -= VAR_12;
   VAR_8 += VAR_12;
   VAR_4->uio_offset += VAR_12;
   VAR_4->uio_resid -= VAR_12;
  }
  VAR_17 = (char *)VAR_4->uio_iov->iov_base;
  VAR_17 += VAR_15;
  VAR_4->uio_iov->iov_base = (void *)VAR_17;
  VAR_4->uio_iov->iov_len -= VAR_15;
  VAR_5 -= VAR_15;
 }
 if (VAR_7 != ((void*)0))
  *VAR_7 = FUNC_5(VAR_9, VAR_2) + FUNC_7(VAR_9);
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;
 return (VAR_11);
}
