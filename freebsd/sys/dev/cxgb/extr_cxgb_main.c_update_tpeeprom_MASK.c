
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct firmware {int datasize; int data; } ;
struct adapter {int dev; int * port; } ;
typedef int name ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 struct firmware* FUNC_3 (char*) ;
 int FUNC_4 (struct firmware const*,int ) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (char*,int,char*,char) ;
 int FUNC_7 (struct adapter*,int ,int) ;
 int FUNC_8 (struct adapter*,int ,int *) ;
 char FUNC_9 (struct adapter*) ;

__attribute__((used)) static void
FUNC_10(struct adapter *VAR_7)
{
 const struct firmware *VAR_8;

 uint32_t VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 char VAR_14, VAR_15[32];

 FUNC_8(VAR_7, VAR_3, &VAR_9);

 VAR_10 = FUNC_0(VAR_9);
 VAR_11 = FUNC_1(VAR_9);
 if (VAR_10 == VAR_4 && VAR_11 == VAR_6)
  return;

 VAR_14 = FUNC_9(VAR_7);
 FUNC_6(VAR_15, sizeof(VAR_15), VAR_1, VAR_14);

 VAR_8 = FUNC_3(VAR_15);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_7->dev,
         "could not load TP EEPROM: unable to load %s\n",
         VAR_15);
  return;
 }

 VAR_13 = VAR_8->datasize - 4;

 VAR_12 = FUNC_7(VAR_7, VAR_8->data, VAR_8->datasize);
 if (VAR_12)
  goto release_tpeeprom;

 if (VAR_13 != VAR_2) {
  FUNC_2(VAR_7->dev,
         "%s length is wrong len=%d expected=%d\n", VAR_15,
         VAR_13, VAR_2);
  return;
 }

 VAR_12 = FUNC_5(&VAR_7->port[0], VAR_8->data, VAR_8->datasize,
     VAR_3);

 if (!VAR_12) {
  FUNC_2(VAR_7->dev,
   "Protocol SRAM image updated in EEPROM to %d.%d.%d\n",
    VAR_4, VAR_6, VAR_5);
 } else
  FUNC_2(VAR_7->dev,
         "Protocol SRAM image update in EEPROM failed\n");

release_tpeeprom:
 FUNC_4(VAR_8, VAR_0);

 return;
}
