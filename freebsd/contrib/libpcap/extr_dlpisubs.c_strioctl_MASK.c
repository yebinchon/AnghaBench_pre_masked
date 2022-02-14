
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strioctl {int ic_cmd; int ic_timout; int ic_len; char* ic_dp; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct strioctl*) ;

int
FUNC_1(int VAR_1, int VAR_2, int VAR_3, char *VAR_4)
{
 struct strioctl VAR_5;
 int VAR_6;

 VAR_5.ic_cmd = VAR_2;
 VAR_5.ic_timout = -1;
 VAR_5.ic_len = VAR_3;
 VAR_5.ic_dp = VAR_4;
 if ((VAR_6 = FUNC_0(VAR_1, VAR_0, &VAR_5)) < 0)
  return (VAR_6);

 return (VAR_5.ic_len);
}
