
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct ieee802_1x_mka_participant {TYPE_1__ ckn; } ;
struct ieee802_1x_mka_basic_body {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct ieee802_1x_mka_participant *VAR_0)
{
 int VAR_1;

 VAR_1 = sizeof(struct ieee802_1x_mka_basic_body);
 VAR_1 += VAR_0->ckn.len;
 return FUNC_0(VAR_1);
}
