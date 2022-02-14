
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct envy24ht_spi_codec {int cs; int cclk; int cdti; TYPE_1__* parent; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 u_int32_t VAR_4 = 0;
 struct envy24ht_spi_codec *VAR_5 = VAR_0;




 VAR_4 = FUNC_1(VAR_5->parent);
 VAR_4 &= ~(VAR_5->cs | VAR_5->cclk | VAR_5->cdti);
 if (VAR_1) VAR_4 += VAR_5->cs;
 if (VAR_2) VAR_4 += VAR_5->cclk;
 if (VAR_3) VAR_4 += VAR_5->cdti;
 FUNC_2(VAR_5->parent, VAR_4);
 return;
}
