
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; int uio_iovcnt; int uio_rw; scalar_t__ uio_offset; int uio_segflg; struct iovec* uio_iov; } ;
struct mbuf {int m_len; } ;
struct iovec {int iov_len; int iov_base; } ;
typedef int caddr_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf const*,int,struct uio*,int) ;

__attribute__((used)) static void
FUNC_2(const struct mbuf *VAR_2, int VAR_3, int VAR_4, caddr_t VAR_5)
{
 struct iovec VAR_6;
 struct uio VAR_7;
 int VAR_8;

 FUNC_0(VAR_3 >= 0, ("m_copyfromunmapped: negative off %d", VAR_3));
 FUNC_0(VAR_4 >= 0, ("m_copyfromunmapped: negative len %d", VAR_4));
 FUNC_0(VAR_3 < VAR_2->m_len,
     ("m_copyfromunmapped: len exceeds mbuf length"));
 VAR_6.iov_base = VAR_5;
 VAR_6.iov_len = VAR_4;
 VAR_7.uio_resid = VAR_4;
 VAR_7.uio_iov = &VAR_6;
 VAR_7.uio_segflg = VAR_1;
 VAR_7.uio_iovcnt = 1;
 VAR_7.uio_offset = 0;
 VAR_7.uio_rw = VAR_0;
 VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_7, VAR_4);
 FUNC_0(VAR_8 == 0, ("m_unmappedtouio failed: off %d, len %d", VAR_3,
    VAR_4));
}
