
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee802_1x_mka_participant {TYPE_1__* kay; } ;
struct ieee802_1x_mka_icv_body {int dummy; } ;
struct TYPE_4__ {scalar_t__ icv_len; } ;
struct TYPE_3__ {size_t mka_algindex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct ieee802_1x_mka_participant *VAR_2)
{
 int VAR_3;


 if (VAR_1[VAR_2->kay->mka_algindex].icv_len !=
     VAR_0)
  VAR_3 = sizeof(struct ieee802_1x_mka_icv_body);
 else
  VAR_3 = 0;
 VAR_3 += VAR_1[VAR_2->kay->mka_algindex].icv_len;

 return FUNC_0(VAR_3);
}
