
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mvs_channel {scalar_t__ pm_level; int r_mem; scalar_t__ pm_present; TYPE_1__* user; } ;
typedef int device_t ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mvs_channel* FUNC_2 (int ) ;
 int FUNC_3 (struct mvs_channel*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_9)
{
 struct mvs_channel *VAR_10 = FUNC_2(VAR_9);
 int VAR_11;
 uint32_t VAR_12;

 VAR_11 = VAR_10->user[VAR_10->pm_present ? 15 : 0].revision;
 if (VAR_11 == 1)
  VAR_12 = VAR_6;
 else if (VAR_11 == 2)
  VAR_12 = VAR_7;
 else if (VAR_11 == 3)
  VAR_12 = VAR_8;
 else
  VAR_12 = 0;
 FUNC_0(VAR_10->r_mem, VAR_0,
     VAR_3 | VAR_12 |
     VAR_4 | VAR_5);
 FUNC_1(1000);
 FUNC_0(VAR_10->r_mem, VAR_0,
     VAR_2 | VAR_12 | ((VAR_10->pm_level > 0) ? 0 :
     (VAR_4 | VAR_5)));
 if (!FUNC_3(VAR_10)) {
  if (VAR_10->pm_level > 0)
   FUNC_0(VAR_10->r_mem, VAR_0, VAR_1);
  return (0);
 }
 return (1);
}
