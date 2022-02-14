
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_info {int* left; int* right; TYPE_1__* cfg; int dev; } ;
struct TYPE_2__ {int subvendor; int subdevice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_2, unsigned VAR_3)
{



if (VAR_2->cfg->subvendor==0x153b && VAR_2->cfg->subdevice==0x1138 ) {
        FUNC_1(VAR_2, VAR_0, 16, 1);
        FUNC_1(VAR_2, VAR_1, 0x7f7f, 2);
        FUNC_1(VAR_2, VAR_0, 17, 1);
        FUNC_1(VAR_2, VAR_1, 0x7f7f, 2);
 }

 FUNC_1(VAR_2, VAR_0, VAR_3 * 2, 1);
 FUNC_1(VAR_2, VAR_1, 0x7f00 | VAR_2->left[VAR_3], 2);
 FUNC_1(VAR_2, VAR_0, VAR_3 * 2 + 1, 1);
 FUNC_1(VAR_2, VAR_1, (VAR_2->right[VAR_3] << 8) | 0x7f, 2);
}
