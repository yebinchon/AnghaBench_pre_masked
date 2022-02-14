
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hda_cvt_setup {scalar_t__ nid; } ;
struct TYPE_3__ {int used; } ;
struct hda_codec {TYPE_1__ cvt_setups; } ;
typedef scalar_t__ hda_nid_t ;


 struct hda_cvt_setup* FUNC_0 (TYPE_1__*,int) ;
 struct hda_cvt_setup* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static struct hda_cvt_setup *
FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct hda_cvt_setup *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->cvt_setups.used; VAR_3++) {
  VAR_2 = FUNC_0(&VAR_0->cvt_setups, VAR_3);
  if (VAR_2->nid == VAR_1)
   return VAR_2;
 }
 VAR_2 = FUNC_1(&VAR_0->cvt_setups);
 if (VAR_2)
  VAR_2->nid = VAR_1;
 return VAR_2;
}
