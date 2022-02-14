
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int ** dac; int ** adc; int dev; } ;
struct envy24ht_spi_codec {int dir; int num; struct sc_info* parent; int * info; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_4 ;
 int FUNC_1 (struct envy24ht_spi_codec*,int ) ;
 struct envy24ht_spi_codec* FUNC_2 (int,int ,int ) ;
 int * FUNC_3 (int ,struct envy24ht_spi_codec*,int,int ) ;

__attribute__((used)) static void *
FUNC_4(device_t VAR_5, void *VAR_6, int VAR_7, int VAR_8)
{
 struct sc_info *VAR_9 = VAR_6;
 struct envy24ht_spi_codec *VAR_10 = ((void*)0);





 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_0, VAR_1);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 if (VAR_7 == VAR_3 && VAR_9->adc[VAR_8] != ((void*)0))
  VAR_10->info = ((struct envy24ht_spi_codec *)VAR_9->adc[VAR_8])->info;
 else if (VAR_7 == VAR_2 && VAR_9->dac[VAR_8] != ((void*)0))
  VAR_10->info = ((struct envy24ht_spi_codec *)VAR_9->dac[VAR_8])->info;
 else
  VAR_10->info = FUNC_3(VAR_5, VAR_10, VAR_8, VAR_4);
 if (VAR_10->info == ((void*)0)) {
  FUNC_1(VAR_10, VAR_0);
  return ((void*)0);
 }

 VAR_10->parent = VAR_9;
 VAR_10->dir = VAR_7;
 VAR_10->num = VAR_8;

 return (void *)VAR_10;
}
