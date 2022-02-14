
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;
typedef int nfds_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (struct pollfd*,int ,int) ;

int
FUNC_1(struct pollfd VAR_2[], nfds_t VAR_3, int VAR_4)
{

 return (((int (*)(struct pollfd *, nfds_t, int))
     VAR_1[VAR_0])(VAR_2, VAR_3, VAR_4));
}
