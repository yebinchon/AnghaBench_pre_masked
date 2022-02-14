
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {struct iovec* iov_base; } ;


 int FUNC_0 (struct iovec*) ;

void
FUNC_1(struct iovec **VAR_0, int *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < *VAR_1; VAR_2++)
  FUNC_0((*VAR_0)[VAR_2].iov_base);
 FUNC_0(*VAR_0);
}
