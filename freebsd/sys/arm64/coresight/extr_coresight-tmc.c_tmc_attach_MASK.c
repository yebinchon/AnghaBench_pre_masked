
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_softc {int pdata; int res; void* dev; } ;
struct coresight_desc {int dev_type; void* dev; int pdata; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,int ,int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct coresight_desc*) ;
 struct tmc_softc* FUNC_3 (void*) ;
 int FUNC_4 (void*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct coresight_desc VAR_4;
 struct tmc_softc *VAR_5;

 VAR_5 = FUNC_3(VAR_3);

 VAR_5->dev = VAR_3;

 if (FUNC_0(VAR_3, VAR_2, &VAR_5->res) != 0) {
  FUNC_4(VAR_3, "cannot allocate resources for device\n");
  return (VAR_1);
 }

 VAR_5->pdata = FUNC_1(VAR_3);
 VAR_4.pdata = VAR_5->pdata;
 VAR_4.dev = VAR_3;
 VAR_4.dev_type = VAR_0;
 FUNC_2(&VAR_4);

 return (0);
}
