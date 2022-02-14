
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ active; } ;
struct TYPE_3__ {scalar_t__ active; } ;
struct sc_info {TYPE_2__ rch; TYPE_1__ pch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sc_info*,int ,int ,int) ;
 struct sc_info* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4)
{
 struct sc_info *VAR_5;

 VAR_5 = FUNC_1(VAR_4);


 if (VAR_5->pch.active) {
  FUNC_0(VAR_5, VAR_2, 0, 1);
  FUNC_0(VAR_5, VAR_1, VAR_0, 2);
 }

 if (VAR_5->rch.active) {
  FUNC_0(VAR_5, VAR_3, 0, 1);
 }
 return 0;
}
