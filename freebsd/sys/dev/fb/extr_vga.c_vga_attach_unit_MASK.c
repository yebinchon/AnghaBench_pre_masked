
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* probe ) (int,int *,int *,int) ;int (* init ) (int,int ,int) ;} ;
typedef TYPE_1__ video_switch_t ;
struct TYPE_6__ {int adp; } ;
typedef TYPE_2__ vga_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int *,int) ;
 int FUNC_1 (int,int ,int) ;
 TYPE_1__* FUNC_2 (int ) ;

int
FUNC_3(int VAR_2, vga_softc_t *VAR_3, int VAR_4)
{
 video_switch_t *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 == ((void*)0))
  return VAR_0;

 VAR_6 = (*VAR_5->probe)(VAR_2, &VAR_3->adp, ((void*)0), VAR_4);
 if (VAR_6)
  return VAR_6;
 return (*VAR_5->init)(VAR_2, VAR_3->adp, VAR_4);
}
