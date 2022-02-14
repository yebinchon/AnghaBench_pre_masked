
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int se_rssi; int se_chan; int se_capinfo; } ;
struct sta_entry {int se_fails; TYPE_1__ base; } ;
typedef int int8_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(const struct sta_entry *VAR_2, const struct sta_entry *VAR_3)
{




 int VAR_4, VAR_5;
 int8_t VAR_6, VAR_7;
 int VAR_8;


 do { if (((VAR_2->base.se_capinfo) ^ (VAR_3->base.se_capinfo)) & (VAR_0)) return ((VAR_2->base.se_capinfo) & (VAR_0)) ? 1 : -1; } while (0);



 VAR_8 = VAR_3->se_fails - VAR_2->se_fails;
 if (FUNC_3(VAR_8) > 1)
  return VAR_8;
 VAR_6 = FUNC_1(VAR_2->base.se_rssi, VAR_1);
 VAR_7 = FUNC_1(VAR_3->base.se_rssi, VAR_1);
 if (FUNC_3(VAR_7 - VAR_6) < 5) {

  VAR_4 = FUNC_4(&VAR_2->base);
  VAR_5 = FUNC_4(&VAR_3->base);
  if (VAR_4 != VAR_5)
   return VAR_4 - VAR_5;


  do { if (((FUNC_0(VAR_2->base.se_chan)) ^ (FUNC_0(VAR_3->base.se_chan))) & (1)) return ((FUNC_0(VAR_2->base.se_chan)) & (1)) ? 1 : -1; } while (0);

 }

 return VAR_2->base.se_rssi - VAR_3->base.se_rssi;

}
