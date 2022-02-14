
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_protocol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_protocol const** VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(const struct net_protocol *VAR_3, unsigned char VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_4 & (VAR_0 - 1);

 FUNC_0(&VAR_1);
 if (VAR_2[VAR_5]) {
  VAR_6 = -1;
 } else {
  VAR_2[VAR_5] = VAR_3;
  VAR_6 = 0;
 }
 FUNC_1(&VAR_1);

 return VAR_6;
}
