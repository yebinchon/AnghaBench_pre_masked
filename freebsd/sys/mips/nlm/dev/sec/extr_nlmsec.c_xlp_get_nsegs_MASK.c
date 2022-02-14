
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; scalar_t__ uio_iov; } ;
struct mbuf {struct mbuf* m_next; int m_len; } ;
struct iovec {int iov_len; } ;
struct cryptop {int crp_flags; int crp_ilen; scalar_t__ crp_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct cryptop *VAR_2, unsigned int *VAR_3)
{

 if (VAR_2->crp_flags & VAR_0) {
  struct mbuf *VAR_4 = ((void*)0);

  VAR_4 = (struct mbuf *)VAR_2->crp_buf;
  while (VAR_4 != ((void*)0)) {
   *VAR_3 += FUNC_0(VAR_4->m_len);
   VAR_4 = VAR_4->m_next;
  }
 } else if (VAR_2->crp_flags & VAR_1) {
  struct uio *VAR_5 = ((void*)0);
  struct iovec *VAR_6 = ((void*)0);
  int VAR_7 = 0;

  VAR_5 = (struct uio *)VAR_2->crp_buf;
  VAR_6 = (struct iovec *)VAR_5->uio_iov;
  VAR_7 = VAR_5->uio_iovcnt;
  while (VAR_7 > 0) {
   *VAR_3 += FUNC_0(VAR_6->iov_len);
   VAR_7--;
   VAR_6++;
  }
 } else {
  *VAR_3 = FUNC_0(VAR_2->crp_ilen);
 }
 return (0);
}
