
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct envy24ht_spi_codec {scalar_t__ num; int info; TYPE_2__* parent; int cdti; int cclk; int cs; } ;
struct TYPE_4__ {TYPE_1__* cfg; int dev; } ;
struct TYPE_3__ {scalar_t__ type; int cif; int cdti; int cclk; int cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void *VAR_6)
{
 struct envy24ht_spi_codec *VAR_7 = VAR_6;
 if (VAR_7 == ((void*)0))
  return;



        VAR_7->cs = VAR_7->parent->cfg->cs;
 VAR_7->cclk = VAR_7->parent->cfg->cclk;
 VAR_7->cdti = VAR_7->parent->cfg->cdti;
 FUNC_5(VAR_7->info, VAR_7->parent->cfg->type);
 FUNC_2(VAR_7->info, VAR_7->parent->cfg->cif);
 if (VAR_7->parent->cfg->type == VAR_4 || VAR_7->parent->cfg->type == VAR_5) {

 FUNC_4(VAR_7->info,
     VAR_3 | VAR_2 | VAR_1);
 FUNC_3(VAR_7->info, VAR_0);
 }


 if (VAR_7->num == 0)
 FUNC_1(VAR_7->info);
}
