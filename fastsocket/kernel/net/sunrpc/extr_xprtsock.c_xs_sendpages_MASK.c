
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {unsigned int len; unsigned int page_len; TYPE_1__* tail; TYPE_1__* head; } ;
struct socket {int flags; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {unsigned int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct socket*,struct sockaddr*,int,TYPE_1__*,unsigned int,int) ;
 int FUNC_3 (struct socket*,struct xdr_buf*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_2, struct sockaddr *VAR_3, int VAR_4, struct xdr_buf *VAR_5, unsigned int VAR_6, bool VAR_7)
{
 unsigned int VAR_8 = VAR_5->len - VAR_6;
 int VAR_9, VAR_10 = 0;

 if (FUNC_1(!VAR_2))
  return -VAR_0;

 FUNC_0(VAR_1, &VAR_2->flags);
 if (VAR_6 != 0) {
  VAR_3 = ((void*)0);
  VAR_4 = 0;
 }

 if (VAR_6 < VAR_5->head[0].iov_len || VAR_3 != ((void*)0)) {
  unsigned int VAR_11 = VAR_5->head[0].iov_len - VAR_6;
  VAR_8 -= VAR_11;
  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_5->head[0], VAR_6, VAR_8 != 0);
  if (VAR_8 == 0 || VAR_9 != VAR_11)
   goto out;
  VAR_10 += VAR_9;
  VAR_6 = 0;
 } else
  VAR_6 -= VAR_5->head[0].iov_len;

 if (VAR_6 < VAR_5->page_len) {
  unsigned int VAR_12 = VAR_5->page_len - VAR_6;
  VAR_8 -= VAR_12;
  VAR_9 = FUNC_3(VAR_2, VAR_5, VAR_6, VAR_8 != 0, VAR_7);
  if (VAR_8 == 0 || VAR_9 != VAR_12)
   goto out;
  VAR_10 += VAR_9;
  VAR_6 = 0;
 } else
  VAR_6 -= VAR_5->page_len;

 if (VAR_6 >= VAR_5->tail[0].iov_len)
  return VAR_10;
 VAR_9 = FUNC_2(VAR_2, ((void*)0), 0, &VAR_5->tail[0], VAR_6, 0);
out:
 if (VAR_10 == 0)
  return VAR_9;
 if (VAR_9 > 0)
  VAR_10 += VAR_9;
 return VAR_10;
}
