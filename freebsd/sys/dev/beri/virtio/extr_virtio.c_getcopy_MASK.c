
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iovec* FUNC_0 (int,int ,int ) ;

struct iovec *
FUNC_1(struct iovec *VAR_2, int VAR_3)
{
 struct iovec *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3 * sizeof(struct iovec), VAR_0, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4[VAR_5].iov_base = VAR_2[VAR_5].iov_base;
  VAR_4[VAR_5].iov_len = VAR_2[VAR_5].iov_len;
 }

 return (VAR_4);
}
