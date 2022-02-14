
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct echoaudio {int meters_enabled; TYPE_1__* comm_page; } ;
typedef int s8 ;
struct TYPE_2__ {scalar_t__ peak_meter; scalar_t__ vu_meter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct echoaudio*,int ) ;

__attribute__((used)) static void FUNC_2(struct echoaudio *VAR_4, char VAR_5)
{
 if (VAR_5 && !VAR_4->meters_enabled) {
  FUNC_1(VAR_4, VAR_2);
  VAR_4->meters_enabled = 1;
 } else if (!VAR_5 && VAR_4->meters_enabled) {
  FUNC_1(VAR_4, VAR_1);
  VAR_4->meters_enabled = 0;
  FUNC_0((s8 *)VAR_4->comm_page->vu_meter, VAR_3,
         VAR_0);
  FUNC_0((s8 *)VAR_4->comm_page->peak_meter, VAR_3,
         VAR_0);
 }
}
