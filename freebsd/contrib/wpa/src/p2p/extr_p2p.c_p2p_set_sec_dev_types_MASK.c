
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {size_t num_sec_dev_types; int sec_dev_type; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int const**,size_t) ;

int FUNC_1(struct p2p_data *VAR_1, const u8 VAR_2[][8],
     size_t VAR_3)
{
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 VAR_1->cfg->num_sec_dev_types = VAR_3;
 FUNC_0(VAR_1->cfg->sec_dev_type, VAR_2, VAR_3 * 8);
 return 0;
}
