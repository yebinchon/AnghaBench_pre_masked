
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct l_iovec32 {int iov_len; int iov_base; } ;
struct iovec {int iov_len; int iov_base; } ;
typedef int l_ulong ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct l_iovec32*,struct l_iovec32*,int) ;
 int FUNC_2 (struct iovec*,int ) ;
 struct iovec* FUNC_3 (int,int ,int ) ;

int
FUNC_4(struct l_iovec32 *VAR_3, l_ulong VAR_4, struct iovec **VAR_5,
    int VAR_6)
{
 struct l_iovec32 VAR_7;
 struct iovec *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 *VAR_5 = ((void*)0);
 if (VAR_4 > VAR_2)
  return (VAR_6);
 VAR_9 = VAR_4 * sizeof(struct iovec);
 VAR_8 = FUNC_3(VAR_9, VAR_0, VAR_1);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_6 = FUNC_1(&VAR_3[VAR_10], &VAR_7, sizeof(struct l_iovec32));
  if (VAR_6) {
   FUNC_2(VAR_8, VAR_0);
   return (VAR_6);
  }
  VAR_8[VAR_10].iov_base = FUNC_0(VAR_7);
  VAR_8[VAR_10].iov_len = VAR_7;
 }
 *VAR_5 = VAR_8;
 return(0);

}
