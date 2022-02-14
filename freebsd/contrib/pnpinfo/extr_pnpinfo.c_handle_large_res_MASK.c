
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int ) ;







 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

void
FUNC_3(u_char *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;

    FUNC_0(FUNC_1("*** Large ITEM %d len %d found\n", VAR_1, VAR_2));
    switch (VAR_1) {
    case 128:
 FUNC_2(VAR_0[0]);
 FUNC_1("Memory range minimum address: 0x%x\n",
  (VAR_0[1] << 8) + (VAR_0[2] << 16));
 FUNC_1("Memory range maximum address: 0x%x\n",
  (VAR_0[3] << 8) + (VAR_0[4] << 16));
 FUNC_1("Memory range base alignment: 0x%x\n",
  (VAR_3 = (VAR_0[5] + (VAR_0[6] << 8))) ? VAR_3 : (1 << 16));
 FUNC_1("Memory range length: 0x%x\n",
  (VAR_0[7] + (VAR_0[8] << 8)) * 256);
 break;
    case 134:
 FUNC_1("Device Description: ");

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
     if (VAR_0[VAR_3])
  FUNC_1("%c", VAR_0[VAR_3]);
 }
 FUNC_1("\n");
 break;
    case 133:
 FUNC_1("ID String Unicode Detected (Undefined)\n");
 break;
    case 131:
 FUNC_1("Large Vendor Defined Detected\n");
 break;
    case 129:
 FUNC_1("32bit Memory Range Desc Unimplemented\n");
 break;
    case 130:
 FUNC_1("32bit Fixed Location Desc Unimplemented\n");
 break;





    }
}
