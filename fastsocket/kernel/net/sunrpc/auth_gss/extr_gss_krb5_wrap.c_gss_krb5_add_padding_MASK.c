
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {scalar_t__ len; struct kvec* head; struct kvec* tail; scalar_t__ page_len; } ;
struct kvec {int iov_len; char* iov_base; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static inline void
FUNC_2(struct xdr_buf *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2, VAR_0->len - VAR_1);
 char *VAR_4;
 struct kvec *VAR_5;

 if (VAR_0->page_len || VAR_0->tail[0].iov_len)
  VAR_5 = &VAR_0->tail[0];
 else
  VAR_5 = &VAR_0->head[0];
 VAR_4 = VAR_5->iov_base + VAR_5->iov_len;
 VAR_5->iov_len += VAR_3;
 VAR_0->len += VAR_3;
 FUNC_1(VAR_4, VAR_3, VAR_3);
}
