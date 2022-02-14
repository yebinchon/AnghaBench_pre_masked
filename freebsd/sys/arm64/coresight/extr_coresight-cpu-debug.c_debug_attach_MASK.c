
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_softc {int pdata; int res; } ;
struct coresight_desc {int dev_type; int dev; int pdata; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct coresight_desc*) ;
 int VAR_2 ;
 struct debug_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct coresight_desc VAR_4;
 struct debug_softc *VAR_5;

 VAR_5 = FUNC_3(VAR_3);

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
