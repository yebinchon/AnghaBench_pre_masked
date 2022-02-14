
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_len; int iov_base; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_1(int VAR_0, const struct iovec *VAR_1, int VAR_2, int VAR_3)
{
 return FUNC_0(VAR_0, VAR_1[0].iov_base, VAR_1[0].iov_len, VAR_3);
}
