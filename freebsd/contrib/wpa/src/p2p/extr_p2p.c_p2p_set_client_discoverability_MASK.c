
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int dev_capab; } ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,char*) ;

void FUNC_1(struct p2p_data *VAR_1, int VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_1, "Client discoverability enabled");
  VAR_1->dev_capab |= VAR_0;
 } else {
  FUNC_0(VAR_1, "Client discoverability disabled");
  VAR_1->dev_capab &= ~VAR_0;
 }
}
