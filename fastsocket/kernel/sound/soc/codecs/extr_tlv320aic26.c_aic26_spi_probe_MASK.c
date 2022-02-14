
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int of_node; } ;
struct TYPE_14__ {TYPE_1__ archdata; } ;
struct spi_device {TYPE_4__ dev; } ;
struct TYPE_15__ {char* name; int num_dai; int (* read ) (TYPE_9__*,int) ;int reg_cache; int reg_cache_size; int dapm_paths; int dapm_widgets; int mutex; int (* write ) (TYPE_9__*,int,int) ;TYPE_2__* dai; int owner; struct aic26* private_data; } ;
struct aic26 {int master; TYPE_9__ codec; int reg_cache; struct spi_device* spi; } ;
struct TYPE_13__ {TYPE_4__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 (TYPE_9__*,int) ;
 int FUNC_3 (TYPE_9__*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*,char*,int) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*,struct aic26*) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (struct aic26*) ;
 struct aic26* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct aic26*,TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_10)
{
 struct aic26 *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_4(&VAR_10->dev, "probing tlv320aic26 spi device\n");


 VAR_11 = FUNC_10(sizeof *VAR_11, VAR_5);
 if (!VAR_11)
  return -VAR_4;


 VAR_11->spi = VAR_10;
 FUNC_7(&VAR_10->dev, VAR_11);




 VAR_11->codec.private_data = VAR_11;
 VAR_11->codec.name = "aic26";
 VAR_11->codec.owner = VAR_6;
 VAR_11->codec.dai = &VAR_7;
 VAR_11->codec.num_dai = 1;
 VAR_11->codec.read = FUNC_2;
 VAR_11->codec.write = FUNC_3;
 VAR_11->master = 1;
 FUNC_11(&VAR_11->codec.mutex);
 FUNC_1(&VAR_11->codec.dapm_widgets);
 FUNC_1(&VAR_11->codec.dapm_paths);
 VAR_11->codec.reg_cache_size = VAR_0;
 VAR_11->codec.reg_cache = VAR_11->reg_cache;

 VAR_7.dev = &VAR_10->dev;
 VAR_12 = FUNC_13(&VAR_7);
 if (VAR_12 != 0) {
  FUNC_5(&VAR_10->dev, "Failed to register DAI: %d\n", VAR_12);
  FUNC_9(VAR_11);
  return VAR_12;
 }


 FUNC_3(&VAR_11->codec, VAR_3, 0xBB00);


 FUNC_3(&VAR_11->codec, VAR_2, 0);


 VAR_14 = FUNC_2(&VAR_11->codec, VAR_1);
 VAR_14 &= ~0xf800;
 VAR_14 |= 0x0800;
 FUNC_3(&VAR_11->codec, VAR_1, VAR_14);


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11->reg_cache); VAR_13++)
  FUNC_2(&VAR_11->codec, VAR_13);



 VAR_12 = FUNC_8(&VAR_10->dev, &VAR_9);
 if (VAR_12)
  FUNC_6(&VAR_10->dev, "error creating sysfs files\n");







 FUNC_4(&VAR_10->dev, "SPI device initialized\n");
 return 0;
}
