
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iovec {scalar_t__ iov_len; } ;



__attribute__((used)) static inline int FUNC_0(struct iovec const *VAR_0, u32 VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 += VAR_0[VAR_3].iov_len;
 return VAR_2;
}
