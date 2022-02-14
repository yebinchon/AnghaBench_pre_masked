
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct vm_guest_paging {int dummy; } ;
struct iovec {int iov_len; void* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (struct vmctx*,int,struct vm_guest_paging*,int,int,int*,int*) ;
 void* FUNC_3 (struct vmctx*,int,int) ;

int
FUNC_4(struct vmctx *VAR_3, int VAR_4, struct vm_guest_paging *VAR_5,
    uint64_t VAR_6, size_t VAR_7, int VAR_8, struct iovec *VAR_9, int VAR_10,
    int *VAR_11)
{
 void *VAR_12;
 uint64_t VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_9[VAR_15].iov_base = 0;
  VAR_9[VAR_15].iov_len = 0;
 }

 while (VAR_7) {
  FUNC_0(VAR_10 > 0);
  VAR_14 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, &VAR_13, VAR_11);
  if (VAR_14 || *VAR_11)
   return (VAR_14);

  VAR_17 = VAR_13 & VAR_1;
  VAR_16 = FUNC_1(VAR_7, VAR_2 - VAR_17);

  VAR_12 = FUNC_3(VAR_3, VAR_13, VAR_16);
  if (VAR_12 == ((void*)0))
   return (VAR_0);

  VAR_9->iov_base = VAR_12;
  VAR_9->iov_len = VAR_16;
  VAR_9++;
  VAR_10--;

  VAR_6 += VAR_16;
  VAR_7 -= VAR_16;
 }
 return (0);
}
