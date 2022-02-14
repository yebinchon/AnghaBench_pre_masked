
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tnc_if_imv {scalar_t__ imvID; struct tnc_if_imv* next; } ;
struct TYPE_2__ {struct tnc_if_imv* imv; } ;
typedef scalar_t__ TNC_IMVID ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static struct tnc_if_imv * FUNC_0(TNC_IMVID VAR_2)
{
 struct tnc_if_imv *VAR_3;

 if (VAR_2 >= VAR_0 || VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_3 = VAR_1->imv;
 while (VAR_3) {
  if (VAR_3->imvID == VAR_2)
   return VAR_3;
  VAR_3 = VAR_3->next;
 }
 return ((void*)0);
}
