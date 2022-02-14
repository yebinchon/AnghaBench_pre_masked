
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
struct iovec {scalar_t__ iov_len; char* iov_base; } ;
typedef int ssize_t ;
typedef int f ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct iovec*,struct iovec const*,size_t) ;
 int FUNC_1 (struct pollfd*,int,int) ;
 ssize_t FUNC_2 (int,struct iovec const*,int) ;

size_t
FUNC_3(ssize_t (*VAR_10) (int, const struct iovec *, int), int VAR_11,
    const struct iovec *VAR_12, int VAR_13,
    int (*VAR_14)(void *, size_t), void *VAR_15)
{
 size_t VAR_16 = 0, VAR_17;
 ssize_t VAR_18;
 struct iovec VAR_19[VAR_6], *VAR_20 = VAR_19;
 struct pollfd VAR_21;

 if (VAR_13 < 0 || VAR_13 > VAR_6) {
  VAR_9 = VAR_3;
  return 0;
 }

 FUNC_0(VAR_20, VAR_12, (size_t)VAR_13 * sizeof(*VAR_12));


 VAR_21.fd = VAR_11;
 VAR_21.events = VAR_10 == FUNC_2 ? VAR_7 : VAR_8;

 for (; VAR_13 > 0 && VAR_20[0].iov_len > 0;) {
  VAR_18 = (VAR_10) (VAR_11, VAR_20, VAR_13);
  switch (VAR_18) {
  case -1:
   if (VAR_9 == VAR_2)
    continue;
   if (VAR_9 == VAR_0 || VAR_9 == VAR_5) {

    (void)FUNC_1(&VAR_21, 1, -1);

    continue;
   }
   return 0;
  case 0:
   VAR_9 = VAR_4;
   return VAR_16;
  default:
   VAR_17 = (size_t)VAR_18;
   VAR_16 += VAR_17;

   while (VAR_13 > 0 && VAR_17 >= VAR_20[0].iov_len) {
    VAR_17 -= VAR_20[0].iov_len;
    VAR_20++;
    VAR_13--;
   }

   if (VAR_17 > 0 && (VAR_13 <= 0 || VAR_17 > VAR_20[0].iov_len)) {
    VAR_9 = VAR_1;
    return 0;
   }
   if (VAR_13 == 0)
    break;

   VAR_20[0].iov_base = ((char *)VAR_20[0].iov_base) + VAR_17;
   VAR_20[0].iov_len -= VAR_17;
  }
  if (VAR_14 != ((void*)0) && VAR_14(VAR_15, (size_t)VAR_18) == -1) {
   VAR_9 = VAR_2;
   return VAR_16;
  }
 }
 return VAR_16;
}
