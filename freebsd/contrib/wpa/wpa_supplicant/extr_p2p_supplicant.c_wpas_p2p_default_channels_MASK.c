
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct p2p_channels {int reg_classes; TYPE_2__* reg_class; } ;
struct TYPE_4__ {int reg_class; scalar_t__ channels; } ;
struct TYPE_3__ {int p2p_24ghz_social_channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_channels*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_1,
         struct p2p_channels *VAR_2,
         struct p2p_channels *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 VAR_1->global->p2p_24ghz_social_channels = 1;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 FUNC_1(VAR_0, "P2P: Enable operating classes for 2.4 GHz "
     "band");


 VAR_2->reg_class[VAR_5].reg_class = 81;
 VAR_2->reg_class[VAR_5].channels = 0;
 for (VAR_4 = 0; VAR_4 < 11; VAR_4++) {
  if (!FUNC_3(VAR_1->global, 2412 + VAR_4 * 5))
   FUNC_2(&VAR_2->reg_class[VAR_5], VAR_4 + 1);
 }
 if (VAR_2->reg_class[VAR_5].channels)
  VAR_5++;

 FUNC_1(VAR_0, "P2P: Enable operating classes for lower 5 GHz "
     "band");


 VAR_2->reg_class[VAR_5].reg_class = 115;
 VAR_2->reg_class[VAR_5].channels = 0;
 if (!FUNC_3(VAR_1->global, 5000 + 36 * 5))
  FUNC_2(&VAR_2->reg_class[VAR_5], 36);
 if (!FUNC_3(VAR_1->global, 5000 + 40 * 5))
  FUNC_2(&VAR_2->reg_class[VAR_5], 40);
 if (!FUNC_3(VAR_1->global, 5000 + 44 * 5))
  FUNC_2(&VAR_2->reg_class[VAR_5], 44);
 if (!FUNC_3(VAR_1->global, 5000 + 48 * 5))
  FUNC_2(&VAR_2->reg_class[VAR_5], 48);
 if (VAR_2->reg_class[VAR_5].channels)
  VAR_5++;

 FUNC_1(VAR_0, "P2P: Enable operating classes for higher 5 GHz "
     "band");


 VAR_2->reg_class[VAR_5].reg_class = 124;
 VAR_2->reg_class[VAR_5].channels = 0;
 if (!FUNC_3(VAR_1->global, 5000 + 149 * 5))
  FUNC_2(&VAR_2->reg_class[VAR_5], 149);
 if (!FUNC_3(VAR_1->global, 5000 + 153 * 5))
  FUNC_2(&VAR_2->reg_class[VAR_5], 153);
 if (!FUNC_3(VAR_1->global, 5000 + 156 * 5))
  FUNC_2(&VAR_2->reg_class[VAR_5], 157);
 if (!FUNC_3(VAR_1->global, 5000 + 161 * 5))
  FUNC_2(&VAR_2->reg_class[VAR_5], 161);
 if (VAR_2->reg_class[VAR_5].channels)
  VAR_5++;

 VAR_2->reg_classes = VAR_5;
 return 0;
}
