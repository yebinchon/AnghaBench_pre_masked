
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beri_softc {void* control_write; void* control_read; void* data_write; void* data_read; void* data_size; int dev; int devname; } ;
typedef int phandle_t ;
typedef void* pcell_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,void**,int) ;
 scalar_t__ FUNC_1 (int,char*,int *,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct beri_softc *VAR_1)
{
 pcell_t VAR_2[0];
 phandle_t VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_4(VAR_1->dev)) == -1)
  return (VAR_0);


 if (FUNC_1(FUNC_4(VAR_1->dev), "device_name",
  &VAR_1->devname, sizeof(VAR_1->devname)) <= 0) {
  FUNC_3(VAR_1->dev, "Can't get device_name\n");
  return (VAR_0);
 }

 if ((VAR_4 = FUNC_2(VAR_3, "data_size")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "data_size", VAR_2, VAR_4);
 VAR_1->data_size = VAR_2[0];

 if ((VAR_4 = FUNC_2(VAR_3, "data_read")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "data_read", VAR_2, VAR_4);
 VAR_1->data_read = VAR_2[0];

 if ((VAR_4 = FUNC_2(VAR_3, "data_write")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "data_write", VAR_2, VAR_4);
 VAR_1->data_write = VAR_2[0];

 if ((VAR_4 = FUNC_2(VAR_3, "control_read")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "control_read", VAR_2, VAR_4);
 VAR_1->control_read = VAR_2[0];

 if ((VAR_4 = FUNC_2(VAR_3, "control_write")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_3, "control_write", VAR_2, VAR_4);
 VAR_1->control_write = VAR_2[0];

 return (0);
}
