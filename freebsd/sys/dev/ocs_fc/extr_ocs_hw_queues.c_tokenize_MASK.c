
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {char* string; int subtype; void* type; } ;
typedef TYPE_1__ tok_t ;
typedef int int32_t ;
struct TYPE_8__ {char const* s; int subtype; void* type; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 scalar_t__ FUNC_6 (char const) ;
 TYPE_3__* VAR_5 ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static const char *
FUNC_8(const char *VAR_6, tok_t *VAR_7)
{
 uint32_t VAR_8;

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));


 while (*VAR_6 && FUNC_5(*VAR_6)) {
  VAR_6++;
 }


 if (*VAR_6 == 0) {
  return ((void*)0);
 }


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_4[VAR_8].s[0] == *VAR_6) {
   VAR_7->type = VAR_4[VAR_8].type;
   VAR_7->subtype = VAR_4[VAR_8].subtype;
   VAR_7->string[0] = *VAR_6++;
   return VAR_6;
  }
 }


 if ((VAR_6[0] == '0') && ((VAR_6[1] == 'x') || (VAR_6[1] == 'X'))) {
  char *VAR_9 = VAR_7->string;

  VAR_7->type = VAR_1;

  *VAR_9++ = *VAR_6++;
  *VAR_9++ = *VAR_6++;
  while ((*VAR_6 == '.') || FUNC_6(*VAR_6)) {
   if ((VAR_9 - VAR_7->string) < (int32_t)sizeof(VAR_7->string)) {
    *VAR_9++ = *VAR_6;
   }
   if (*VAR_6 == ',') {
    VAR_7->type = VAR_2;
   }
   VAR_6++;
  }
  *VAR_9 = 0;
  return VAR_6;
 } else if (FUNC_4(*VAR_6)) {
  char *VAR_10 = VAR_7->string;

  VAR_7->type = VAR_1;
  while ((*VAR_6 == ',') || FUNC_4(*VAR_6)) {
   if ((VAR_10 - VAR_7->string) < (int32_t)sizeof(VAR_7->string)) {
    *VAR_10++ = *VAR_6;
   }
   if (*VAR_6 == ',') {
    VAR_7->type = VAR_2;
   }
   VAR_6++;
  }
  *VAR_10 = 0;
  return VAR_6;
 }


 if (FUNC_2(*VAR_6)) {
  char *VAR_11 = VAR_7->string;

  for (*VAR_11++ = *VAR_6++; FUNC_1(*VAR_6); VAR_6++) {
   if ((VAR_11 - VAR_7->string) < VAR_0) {
    *VAR_11++ = *VAR_6;
   }
  }


  if (VAR_7->string[0] == '$') {
   VAR_7->type = VAR_3;
  } else {

   for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
    if (FUNC_7(VAR_5[VAR_8].s, VAR_7->string) == 0) {
     VAR_7->type = VAR_5[VAR_8].type;
     VAR_7->subtype = VAR_5[VAR_8].subtype;
     return VAR_6;
    }
   }
  }
 }
 return VAR_6;
}
