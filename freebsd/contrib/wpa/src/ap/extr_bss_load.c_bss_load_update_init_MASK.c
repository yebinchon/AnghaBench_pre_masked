
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dummy; } ;


 int FUNC_0 (unsigned int,unsigned int,int ,struct hostapd_data*,int *) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,unsigned int*,unsigned int*) ;
 int VAR_0 ;

int FUNC_2(struct hostapd_data *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 if (FUNC_1(VAR_1, &VAR_2, &VAR_3) < 0)
  return -1;

 FUNC_0(VAR_2, VAR_3, VAR_0, VAR_1,
          ((void*)0));
 return 0;
}
