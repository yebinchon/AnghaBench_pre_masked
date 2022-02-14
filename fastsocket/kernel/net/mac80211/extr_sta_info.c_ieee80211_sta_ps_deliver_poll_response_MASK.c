
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int uapsd_queues; } ;
struct sta_info {TYPE_1__ sta; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sta_info*,int,int,int ) ;

void FUNC_2(struct sta_info *VAR_2)
{
 u8 VAR_3 = VAR_2->sta.uapsd_queues;






 if (VAR_3 == FUNC_0(VAR_1) - 1)
  VAR_3 = 0;

 FUNC_1(VAR_2, 1, VAR_3,
       VAR_0);
}
