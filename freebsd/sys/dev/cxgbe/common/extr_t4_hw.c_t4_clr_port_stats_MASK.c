
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int mps_bg_map; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct adapter*,int) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int,int ) ;

void FUNC_5(struct adapter *VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 u32 VAR_9 = FUNC_2(VAR_6, VAR_7)->mps_bg_map;
 u32 VAR_10;

 if (FUNC_3(VAR_6))
  VAR_10 = FUNC_0(VAR_7);
 else
  VAR_10 = FUNC_1(VAR_7);

 for (VAR_8 = VAR_2;
   VAR_8 <= VAR_3; VAR_8 += 8)
  FUNC_4(VAR_6, VAR_10 + VAR_8, 0);
 for (VAR_8 = VAR_0;
   VAR_8 <= VAR_1; VAR_8 += 8)
  FUNC_4(VAR_6, VAR_10 + VAR_8, 0);
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  if (VAR_9 & (1 << VAR_8)) {
   FUNC_4(VAR_6,
   VAR_4 + VAR_8 * 8, 0);
   FUNC_4(VAR_6,
   VAR_5 + VAR_8 * 8, 0);
  }
}
