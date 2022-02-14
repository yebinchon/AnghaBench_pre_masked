
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int nvs_op; } ;
typedef TYPE_1__ nvstream_t ;
typedef int nvpair_t ;
typedef int data_type_t ;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int *,size_t*) ;
 int FUNC_7 (TYPE_1__*,int ,size_t*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(nvstream_t *VAR_3, nvpair_t *VAR_4, size_t *VAR_5)
{
 data_type_t VAR_6 = FUNC_3(VAR_4);




 uint64_t VAR_7 = 4 + 4 + 4 + FUNC_5(FUNC_8(FUNC_1(VAR_4))) + 4 + 4;

 switch (VAR_6) {
 case 154:
  break;

 case 152:
 case 151:
 case 141:
 case 129:
 case 147:
 case 135:
 case 145:
 case 133:
  VAR_7 += 4;
  break;

 case 143:
 case 131:
 case 148:

 case 149:

  VAR_7 += 8;
  break;

 case 137:
  VAR_7 += 4 + FUNC_5(FUNC_8((char *)FUNC_4(VAR_4)));
  break;

 case 150:
  VAR_7 += FUNC_5(FUNC_2(VAR_4));
  break;

 case 153:
 case 140:
 case 128:
 case 146:
 case 134:
 case 144:
 case 132:
  VAR_7 += 4 + 4 * (uint64_t)FUNC_2(VAR_4);
  break;

 case 142:
 case 130:
  VAR_7 += 4 + 8 * (uint64_t)FUNC_2(VAR_4);
  break;

 case 136: {
  int VAR_8;
  char **VAR_9 = (void *)FUNC_4(VAR_4);

  for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_4); VAR_8++)
   VAR_7 += 4 + FUNC_5(FUNC_8(VAR_9[VAR_8]));

  break;
 }

 case 139:
 case 138: {
  size_t VAR_10 = 0;
  int VAR_11 = VAR_3->nvs_op;
  int VAR_12;

  VAR_3->nvs_op = VAR_2;
  if (VAR_6 == 139)
   VAR_12 = FUNC_7(VAR_3, FUNC_0(VAR_4), &VAR_10);
  else
   VAR_12 = FUNC_6(VAR_3, VAR_4, &VAR_10);
  VAR_3->nvs_op = VAR_11;

  if (VAR_12 != 0)
   return (VAR_0);

  VAR_7 += VAR_10;
  break;
 }

 default:
  return (VAR_0);
 }

 if (VAR_7 > VAR_1)
  return (VAR_0);

 *VAR_5 = VAR_7;

 return (0);
}
