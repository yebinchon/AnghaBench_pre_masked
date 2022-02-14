
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sb_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ td_intr_nesting_level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct sb_info*,int ) ;
 int FUNC_3 (struct sb_info*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct sb_info *VAR_3, u_char VAR_4)
{
     int VAR_5;

     for (VAR_5 = 0; VAR_5 < 1000; VAR_5++) {
  if ((FUNC_2(VAR_3, VAR_1) & 0x80))
       FUNC_0((VAR_5 > 100)? 1000 : 10);
      else {
   FUNC_3(VAR_3, VAR_0, VAR_4);
   return 1;
  }
     }
 if (VAR_2->td_intr_nesting_level == 0)
  FUNC_1("sb_dspwr(0x%02x) timed out.\n", VAR_4);
     return 0;
}
