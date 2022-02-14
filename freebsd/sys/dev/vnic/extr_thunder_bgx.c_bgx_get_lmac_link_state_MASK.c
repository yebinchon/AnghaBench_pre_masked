
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmac {int last_speed; int last_duplex; int link_up; } ;
struct bgx_link_status {int speed; int duplex; int link_up; } ;
struct bgx {struct lmac* lmac; } ;


 int VAR_0 ;
 struct bgx** VAR_1 ;

void
FUNC_0(int VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{
 struct bgx_link_status *VAR_6 = (struct bgx_link_status *)VAR_5;
 struct bgx *VAR_7;
 struct lmac *VAR_8;

 VAR_7 = VAR_1[(VAR_2 * VAR_0) + VAR_3];
 if (VAR_7 == ((void*)0))
  return;

 VAR_8 = &VAR_7->lmac[VAR_4];
 VAR_6->link_up = VAR_8->link_up;
 VAR_6->duplex = VAR_8->last_duplex;
 VAR_6->speed = VAR_8->last_speed;
}
