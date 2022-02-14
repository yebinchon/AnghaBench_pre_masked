
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int ulValueLen; scalar_t__* pValue; } ;
typedef size_t CK_ULONG ;
typedef scalar_t__ CK_OBJECT_CLASS ;
typedef scalar_t__ CK_BBOOL ;
typedef TYPE_1__ CK_ATTRIBUTE ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const CK_ATTRIBUTE *VAR_0,
   CK_ULONG VAR_1)
{
    CK_ULONG VAR_2;

    FUNC_1("find objects: attrs: %lu\n", (unsigned long)VAR_1);

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
 FUNC_1("  type: ");
 switch (VAR_0[VAR_2].type) {
 case 134: {
     CK_BBOOL *VAR_3;
     if (VAR_0[VAR_2].ulValueLen != sizeof(CK_BBOOL)) {
  FUNC_0("token attribute wrong length\n");
  break;
     }
     VAR_3 = VAR_0[VAR_2].pValue;
     FUNC_1("token: %s", *VAR_3 ? "TRUE" : "FALSE");
     break;
 }
 case 138: {
     CK_OBJECT_CLASS *VAR_4;
     if (VAR_0[VAR_2].ulValueLen != sizeof(CK_ULONG)) {
  FUNC_0("class attribute wrong length\n");
  break;
     }
     VAR_4 = VAR_0[VAR_2].pValue;
     FUNC_1("class ");
     switch (*VAR_4) {
     case 132:
  FUNC_1("certificate");
  break;
     case 129:
  FUNC_1("public key");
  break;
     case 130:
  FUNC_1("private key");
  break;
     case 128:
  FUNC_1("secret key");
  break;
     case 131:
  FUNC_1("domain parameters");
  break;
     default:
  FUNC_1("[class %lx]", (long unsigned)*VAR_4);
  break;
     }
     break;
 }
 case 135:
     FUNC_1("private");
     break;
 case 136:
     FUNC_1("label");
     break;
 case 139:
     FUNC_1("application");
     break;
 case 133:
     FUNC_1("value");
     break;
 case 137:
     FUNC_1("id");
     break;
 default:
     FUNC_1("[unknown 0x%08lx]", (unsigned long)VAR_0[VAR_2].type);
     break;
 }
 FUNC_1("\n");
    }
}
