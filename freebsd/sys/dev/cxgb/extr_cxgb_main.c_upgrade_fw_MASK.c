
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct firmware {int datasize; scalar_t__ data; } ;
struct TYPE_5__ {int * fw_version; int dev; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 struct firmware* FUNC_4 (int) ;
 int FUNC_5 (struct firmware const*,int ) ;
 int FUNC_6 (int *,int,char*,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int const*,int ) ;

__attribute__((used)) static int
FUNC_9(adapter_t *VAR_3)
{
 const struct firmware *VAR_4;
 int VAR_5;
 u32 VAR_6;

 if ((VAR_4 = FUNC_4(VAR_2)) == ((void*)0)) {
  FUNC_3(VAR_3->dev, "Could not find firmware image %s\n", VAR_2);
  return (VAR_0);
 } else
  FUNC_3(VAR_3->dev, "installing firmware on card\n");
 VAR_5 = FUNC_8(VAR_3, (const uint8_t *)VAR_4->data, VAR_4->datasize);

 if (VAR_5 != 0) {
  FUNC_3(VAR_3->dev, "failed to install firmware: %d\n",
      VAR_5);
 } else {
  FUNC_7(VAR_3, &VAR_6);
  FUNC_6(&VAR_3->fw_version[0], sizeof(VAR_3->fw_version), "%d.%d.%d",
      FUNC_0(VAR_6), FUNC_2(VAR_6),
      FUNC_1(VAR_6));
 }

 FUNC_5(VAR_4, VAR_1);

 return (VAR_5);
}
