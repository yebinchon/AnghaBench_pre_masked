
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iaddr {int len; int iabuf; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int*,int ,int,int) ;

int
FUNC_1(FILE *VAR_1, struct iaddr *VAR_2)
{
 VAR_2->len = 4;
 if (FUNC_0(VAR_1, VAR_2->iabuf,
     &VAR_2->len, VAR_0, 10, 8))
  return (1);
 return (0);
}
