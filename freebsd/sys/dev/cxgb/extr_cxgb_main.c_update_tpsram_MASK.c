
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int data; int datasize; } ;
struct adapter {int dev; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct firmware* FUNC_1 (char*) ;
 int FUNC_2 (struct firmware const*,int ) ;
 int FUNC_3 (char*,int,char*,char) ;
 int FUNC_4 (struct adapter*,int ,int ) ;
 int FUNC_5 (struct adapter*,int ) ;
 char FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;

__attribute__((used)) static int
FUNC_8(struct adapter *VAR_3)
{
 const struct firmware *VAR_4;
 int VAR_5;
 char VAR_6, VAR_7[32];

 VAR_6 = FUNC_6(VAR_3);
 FUNC_3(VAR_7, sizeof(VAR_7), VAR_2, VAR_6);

 FUNC_7(VAR_3);

 VAR_4 = FUNC_1(VAR_7);
 if (VAR_4 == ((void*)0)){
  FUNC_0(VAR_3->dev, "could not load TP SRAM\n");
  return (VAR_0);
 } else
  FUNC_0(VAR_3->dev, "updating TP SRAM\n");

 VAR_5 = FUNC_4(VAR_3, VAR_4->data, VAR_4->datasize);
 if (VAR_5)
  goto release_tpsram;

 VAR_5 = FUNC_5(VAR_3, VAR_4->data);
 if (VAR_5)
  FUNC_0(VAR_3->dev, "loading protocol SRAM failed\n");

release_tpsram:
 FUNC_2(VAR_4, VAR_1);

 return VAR_5;
}
