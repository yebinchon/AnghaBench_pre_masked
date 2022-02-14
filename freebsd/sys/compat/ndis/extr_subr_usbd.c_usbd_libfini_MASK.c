
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ipt_wrap; int * ipt_func; } ;
typedef TYPE_2__ image_patch_table ;
struct TYPE_5__ {int us_buf; } ;
struct TYPE_7__ {TYPE_1__ dro_drivername; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;

int
FUNC_2(void)
{
 image_patch_table *VAR_10;

 VAR_10 = VAR_2;
 while (VAR_10->ipt_func != ((void*)0)) {
  FUNC_1(VAR_10->ipt_wrap);
  VAR_10++;
 }

 FUNC_1(VAR_4);
 FUNC_1(VAR_3);
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 FUNC_1(VAR_5);
 FUNC_1(VAR_8);
 FUNC_1(VAR_9);

 FUNC_0(VAR_1.dro_drivername.us_buf, VAR_0);

 return (0);
}
