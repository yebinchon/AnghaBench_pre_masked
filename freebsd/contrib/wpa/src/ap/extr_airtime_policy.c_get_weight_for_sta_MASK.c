
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_1__* conf; } ;
struct airtime_sta_weight {int weight; struct airtime_sta_weight* next; int addr; } ;
struct TYPE_2__ {int airtime_weight; struct airtime_sta_weight* airtime_weight_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_1, const u8 *VAR_2)
{
 struct airtime_sta_weight *VAR_3;

 VAR_3 = VAR_1->conf->airtime_weight_list;
 while (VAR_3 && FUNC_0(VAR_3->addr, VAR_2, VAR_0) != 0)
  VAR_3 = VAR_3->next;

 return VAR_3 ? VAR_3->weight : VAR_1->conf->airtime_weight;
}
