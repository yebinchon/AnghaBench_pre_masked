
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct hdaa_widget {scalar_t__ enable; int nid; TYPE_1__* devinfo; } ;
struct TYPE_2__ {int dev; } ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_8 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_9(struct hdaa_widget *VAR_5, uint32_t VAR_6)
{

 FUNC_8(VAR_5->devinfo->dev, "%2d %08x %-2d %-2d "
     "%-13s %-5s %-7s %-10s %-7s %d%s\n",
     VAR_5->nid, VAR_6,
     FUNC_0(VAR_6),
     FUNC_7(VAR_6),
     VAR_3[FUNC_4(VAR_6)],
     VAR_2[FUNC_3(VAR_6)],
     VAR_1[FUNC_2(VAR_6)],
     VAR_4[FUNC_5(VAR_6)],
     VAR_0[FUNC_1(VAR_6)],
     FUNC_6(VAR_6),
     (VAR_5->enable == 0)?" DISA":"");
}
