
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; int buffer; } ;
struct TYPE_3__ {int channel; int buffer; } ;
struct sb_info {TYPE_2__ rch; TYPE_1__ pch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sb_info*) ;
 int FUNC_2 (struct sb_info*,int ) ;
 int FUNC_3 (struct sb_info*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
     struct sb_info *VAR_2 = (struct sb_info *)VAR_1;

 FUNC_1(VAR_2);
     if (FUNC_4(VAR_2->pch.buffer) > 0) {
  FUNC_3(VAR_2);
  FUNC_0(VAR_2->pch.channel);
  FUNC_1(VAR_2);
 }

     if (FUNC_4(VAR_2->rch.buffer) > 0) {
  FUNC_3(VAR_2);
  FUNC_0(VAR_2->rch.channel);
  FUNC_1(VAR_2);
 }

 FUNC_2(VAR_2, VAR_0);
 FUNC_3(VAR_2);
}
