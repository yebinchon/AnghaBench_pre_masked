
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_iovcnt; scalar_t__ uio_segflg; int uio_offset; int uio_resid; TYPE_1__* uio_iov; } ;
struct nfsrv_descript {char* nd_dpos; int * nd_md; } ;
typedef int * mbuf_t ;
struct TYPE_2__ {int iov_len; char* iov_base; int (* iov_op ) (char*,char*,int) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,struct nfsrv_descript*) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (struct nfsrv_descript*,long,int) ;
 int FUNC_10 (char*,char*,int) ;

int
FUNC_11(struct nfsrv_descript *VAR_3, struct uio *VAR_4, int VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 mbuf_t VAR_11;
 long VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_11 = VAR_3->nd_md;
 VAR_6 = VAR_3->nd_dpos;
 VAR_10 = FUNC_4(VAR_11, VAR_2) + FUNC_7(VAR_11) - VAR_6;
 VAR_13 = FUNC_5(VAR_5) - VAR_5;
 while (VAR_5 > 0) {
  if (VAR_4->uio_iovcnt <= 0 || VAR_4->uio_iov == ((void*)0)) {
   VAR_14 = VAR_0;
   goto out;
  }
  VAR_9 = VAR_4->uio_iov->iov_len;
  VAR_7 = VAR_4->uio_iov->iov_base;
  if (VAR_9 > VAR_5)
   VAR_9 = VAR_5;
  VAR_12 = VAR_9;
  while (VAR_9 > 0) {
   while (VAR_10 == 0) {
    VAR_11 = FUNC_8(VAR_11);
    if (VAR_11 == ((void*)0)) {
     VAR_14 = VAR_0;
     goto out;
    }
    VAR_6 = FUNC_4(VAR_11, VAR_2);
    VAR_10 = FUNC_7(VAR_11);
    FUNC_1(VAR_10 >= 0,
        ("len %d, corrupted mbuf?", VAR_10));
   }
   VAR_8 = (VAR_9 > VAR_10) ? VAR_10 : VAR_9;







   if (VAR_4->uio_segflg == VAR_1)
    FUNC_2(VAR_6, VAR_7, VAR_8);
   else
    FUNC_6(VAR_6, FUNC_0(VAR_7), VAR_8);
   VAR_9 -= VAR_8;
   VAR_10 -= VAR_8;
   VAR_6 += VAR_8;
   VAR_7 += VAR_8;
   VAR_4->uio_offset += VAR_8;
   VAR_4->uio_resid -= VAR_8;
  }
  if (VAR_4->uio_iov->iov_len <= VAR_5) {
   VAR_4->uio_iovcnt--;
   VAR_4->uio_iov++;
  } else {
   VAR_4->uio_iov->iov_base = (void *)
    ((char *)VAR_4->uio_iov->iov_base + VAR_12);
   VAR_4->uio_iov->iov_len -= VAR_12;
  }
  VAR_5 -= VAR_12;
 }
 VAR_3->nd_dpos = VAR_6;
 VAR_3->nd_md = VAR_11;
 if (VAR_13 > 0) {
  if (VAR_10 < VAR_13)
   VAR_14 = FUNC_9(VAR_3, VAR_13, VAR_10);
  else
   VAR_3->nd_dpos += VAR_13;
 }

out:
 FUNC_3(VAR_14, VAR_3);
 return (VAR_14);
}
