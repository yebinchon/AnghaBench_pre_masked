
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint32_t ;
struct TYPE_6__ {int e_machine; } ;
struct readelf {TYPE_1__ ehdr; } ;
struct TYPE_7__ {int d_val; } ;
struct TYPE_8__ {int d_tag; TYPE_2__ d_un; } ;
typedef TYPE_3__ GElf_Dyn ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct readelf*,TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (struct readelf*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct readelf *VAR_4, GElf_Dyn *VAR_5, uint32_t VAR_6)
{
 const char *VAR_7;

 if (VAR_5->d_tag >= VAR_1 && VAR_5->d_tag <= VAR_0 &&
     VAR_5->d_tag != 172 && VAR_5->d_tag != 170) {
  FUNC_1(VAR_4, VAR_5);
  return;
 }


 VAR_7 = ((void*)0);
 if (VAR_5->d_tag == 172 || VAR_5->d_tag == 170 ||
     VAR_5->d_tag == 155 || VAR_5->d_tag == 139 ||
     VAR_5->d_tag == 141 || VAR_5->d_tag == 140)
  VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_5->d_un.d_val);

 switch(VAR_5->d_tag) {
 case 154:
 case 153:
 case 159:
 case 137:
 case 134:
 case 148:
 case 158:
 case 136:
 case 149:
 case 171:
 case 133:
 case 156:
 case 169:
 case 132:
 case 130:
 case 128:
 case 163:
 case 162:
 case 165:
  FUNC_4(" 0x%jx\n", (uintmax_t) VAR_5->d_un.d_val);
  break;
 case 151:
 case 145:
 case 146:
 case 138:
 case 135:
 case 142:
 case 143:
 case 150:
 case 157:
 case 168:
 case 164:
 case 161:
  FUNC_4(" %ju (bytes)\n", (uintmax_t) VAR_5->d_un.d_val);
  break;
  case 147:
 case 144:
 case 131:
 case 129:
  FUNC_4(" %ju\n", (uintmax_t) VAR_5->d_un.d_val);
  break;
 case 172:
  FUNC_4(" Auxiliary library: [%s]\n", VAR_7);
  break;
 case 170:
  FUNC_4(" Filter library: [%s]\n", VAR_7);
  break;
 case 155:
  FUNC_4(" Shared library: [%s]\n", VAR_7);
  break;
 case 139:
  FUNC_4(" Library soname: [%s]\n", VAR_7);
  break;
 case 141:
  FUNC_4(" Library rpath: [%s]\n", VAR_7);
  break;
 case 140:
  FUNC_4(" Library runpath: [%s]\n", VAR_7);
  break;
 case 152:
  FUNC_4(" %s\n", FUNC_0(VAR_4->ehdr.e_machine, VAR_5->d_un.d_val));
  break;
 case 160:
  FUNC_4(" %s\n", FUNC_5(VAR_5->d_un.d_val));
  break;
 case 167:
  FUNC_2(VAR_2, VAR_5->d_un.d_val);
  break;
 case 166:
  FUNC_2(VAR_3, VAR_5->d_un.d_val);
  break;
 default:
  FUNC_4("\n");
 }
}
