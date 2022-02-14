
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct iovec32 {int iov_len; int iov_base; } ;
struct iovec {int iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct iovec32*,struct iovec32*,int) ;
 int FUNC_2 (struct iovec*,int ) ;
 struct iovec* FUNC_3 (int,int ,int ) ;

int
FUNC_4(struct iovec32 *VAR_3, u_int VAR_4, struct iovec **VAR_5,
    int VAR_6)
{
 struct iovec32 VAR_7;
 struct iovec *VAR_8;
 u_int VAR_9;
 int VAR_10;

 *VAR_5 = ((void*)0);
 if (VAR_4 > VAR_2)
  return (VAR_6);
 VAR_9 = VAR_4 * sizeof(struct iovec);
 VAR_8 = FUNC_3(VAR_9, VAR_0, VAR_1);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_6 = FUNC_1(&VAR_3[VAR_10], &VAR_7, sizeof(struct iovec32));
  if (VAR_6) {
   FUNC_2(VAR_8, VAR_0);
   return (VAR_6);
  }
  VAR_8[VAR_10].iov_base = FUNC_0(VAR_7);
  VAR_8[VAR_10].iov_len = VAR_7;
 }
 *VAR_5 = VAR_8;
 return (0);
}
