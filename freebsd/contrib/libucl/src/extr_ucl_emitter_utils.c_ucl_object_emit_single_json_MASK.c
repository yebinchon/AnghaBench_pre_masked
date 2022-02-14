
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* sv; int iv; int dv; } ;
struct TYPE_5__ {int type; int len; TYPE_1__ value; } ;
typedef TYPE_2__ ucl_object_t ;
typedef int UT_string ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int,int *) ;
 unsigned char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

unsigned char *
FUNC_6 (const ucl_object_t *VAR_0)
{
 UT_string *VAR_1 = ((void*)0);
 unsigned char *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_5 (VAR_1);

 if (VAR_1 != ((void*)0)) {
  switch (VAR_0->type) {
  case 131:
   FUNC_3 ("object", 6, VAR_1);
   break;
  case 136:
   FUNC_3 ("array", 5, VAR_1);
   break;
  case 133:
   FUNC_2 (VAR_0->value.iv, VAR_1);
   break;
  case 134:
  case 129:
   FUNC_1 (VAR_0->value.dv, VAR_1);
   break;
  case 132:
   FUNC_3 ("null", 4, VAR_1);
   break;
  case 135:
   if (VAR_0->value.iv) {
    FUNC_3 ("true", 4, VAR_1);
   }
   else {
    FUNC_3 ("false", 5, VAR_1);
   }
   break;
  case 130:
   FUNC_3 (VAR_0->value.sv, VAR_0->len, VAR_1);
   break;
  case 128:
   FUNC_3 ("userdata", 8, VAR_1);
   break;
  }
  VAR_2 = FUNC_4 (VAR_1);
  FUNC_0 (VAR_1);
 }

 return VAR_2;
}
