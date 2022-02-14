
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ active; } ;
struct TYPE_4__ {scalar_t__ active; } ;
struct sc_info {TYPE_1__ rch; TYPE_2__ pch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sc_info*,int,int,int) ;
 struct sc_info* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_8)
{
 struct sc_info *VAR_9;

 VAR_9 = FUNC_3(VAR_8);
 FUNC_2(VAR_9, 0, 0x11, 1);
 FUNC_2(VAR_9, 0x214, 0, 2);


     if (FUNC_1(VAR_8) == -1) {
  FUNC_0(VAR_8, "unable to reinitialize the mixer\n");
  return VAR_0;
 }

 if (VAR_9->pch.active) {
  FUNC_2(VAR_9, VAR_3, VAR_4 |
     VAR_2, 1);
  FUNC_2(VAR_9, VAR_1, 0, 2);
 }

 if (VAR_9->rch.active) {
  FUNC_2(VAR_9, VAR_6, VAR_7 |
     VAR_5, 1);
 }
 return 0;
}
