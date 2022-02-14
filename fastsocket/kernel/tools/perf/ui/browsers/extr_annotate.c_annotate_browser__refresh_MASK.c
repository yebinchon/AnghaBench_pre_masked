
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_browser {scalar_t__ height; } ;
struct TYPE_2__ {scalar_t__ jump_arrows; } ;


 int VAR_0 ;
 int FUNC_0 (struct ui_browser*,int,int ,scalar_t__) ;
 int FUNC_1 (struct ui_browser*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct ui_browser*) ;
 int FUNC_3 (struct ui_browser*,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct ui_browser *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2);

 if (VAR_1.jump_arrows)
  FUNC_1(VAR_2);

 FUNC_3(VAR_2, VAR_0);
 FUNC_0(VAR_2, 7, 0, VAR_2->height - 1);
 return VAR_3;
}
