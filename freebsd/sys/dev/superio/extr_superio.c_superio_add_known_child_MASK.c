
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int superio_dev_type_t ;
struct superio_devinfo {void* dma; void* irq; void* iobase2; void* iobase; int type; int ldn; } ;
struct siosc {int devlist; } ;
typedef int * device_t ;


 int * FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int *,struct superio_devinfo*,int ) ;
 struct superio_devinfo* FUNC_2 (int *) ;
 struct siosc* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (struct siosc*) ;
 int FUNC_7 (struct siosc*) ;
 void* FUNC_8 (struct siosc*,int ,int) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_1, superio_dev_type_t VAR_2, uint8_t VAR_3)
{
 struct siosc *VAR_4 = FUNC_3(VAR_1);
 struct superio_devinfo *VAR_5;
 device_t VAR_6;

 VAR_6 = FUNC_0(VAR_1, 0, ((void*)0), -1);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_1, "failed to add child for ldn %d, type %s\n",
      VAR_3, FUNC_5(VAR_2));
  return;
 }
 VAR_5 = FUNC_2(VAR_6);
 VAR_5->ldn = VAR_3;
 VAR_5->type = VAR_2;
 FUNC_6(VAR_4);
 VAR_5->iobase = FUNC_8(VAR_4, VAR_3, 0x60);
 VAR_5->iobase2 = FUNC_8(VAR_4, VAR_3, 0x62);
 VAR_5->irq = FUNC_8(VAR_4, VAR_3, 0x70);
 VAR_5->dma = FUNC_8(VAR_4, VAR_3, 0x74);
 FUNC_7(VAR_4);
 FUNC_1(&VAR_4->devlist, VAR_5, VAR_0);
}
