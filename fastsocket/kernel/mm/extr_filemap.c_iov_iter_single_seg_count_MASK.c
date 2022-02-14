
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {scalar_t__ iov_len; } ;
struct iov_iter {int nr_segs; size_t count; scalar_t__ iov_offset; struct iovec* iov; } ;


 size_t FUNC_0 (size_t,scalar_t__) ;

size_t FUNC_1(const struct iov_iter *VAR_0)
{
 const struct iovec *VAR_1 = VAR_0->iov;
 if (VAR_0->nr_segs == 1)
  return VAR_0->count;
 else
  return FUNC_0(VAR_0->count, VAR_1->iov_len - VAR_0->iov_offset);
}
