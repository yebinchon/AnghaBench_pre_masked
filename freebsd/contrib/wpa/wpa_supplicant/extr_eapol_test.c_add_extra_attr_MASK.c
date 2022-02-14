
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radius_msg {int dummy; } ;
struct extra_radius_attr {int syntax; char* data; int type; } ;
typedef int buf ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct radius_msg*,int,int *,size_t) ;

__attribute__((used)) static int FUNC_8(struct radius_msg *VAR_1,
     struct extra_radius_attr *VAR_2)
{
 size_t VAR_3;
 char *VAR_4;
 u32 VAR_5;
 char VAR_6[VAR_0 + 1];

 switch (VAR_2->syntax) {
 case 's':
  FUNC_4(VAR_6, sizeof(VAR_6), "%s", VAR_2->data);
  VAR_3 = FUNC_5(VAR_6);
  break;
 case 'n':
  VAR_6[0] = '\0';
  VAR_3 = 1;
  break;
 case 'x':
  VAR_4 = VAR_2->data;
  if (VAR_4[0] == '0' && VAR_4[1] == 'x')
   VAR_4 += 2;
  VAR_3 = FUNC_5(VAR_4);
  if ((VAR_3 & 1) || (VAR_3 / 2) > VAR_0) {
   FUNC_6("Invalid extra attribute hexstring\n");
   return -1;
  }
  VAR_3 /= 2;
  if (FUNC_1(VAR_4, (u8 *) VAR_6, VAR_3) < 0) {
   FUNC_6("Invalid extra attribute hexstring\n");
   return -1;
  }
  break;
 case 'd':
  VAR_5 = FUNC_2(FUNC_0(VAR_2->data));
  FUNC_3(VAR_6, &VAR_5, 4);
  VAR_3 = 4;
  break;
 default:
  FUNC_6("Incorrect extra attribute syntax specification\n");
  return -1;
 }

 if (!FUNC_7(VAR_1, VAR_2->type, (u8 *) VAR_6, VAR_3)) {
  FUNC_6("Could not add attribute %d\n", VAR_2->type);
  return -1;
 }

 return 0;
}
