
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* sv; } ;
struct TYPE_8__ {char** trash_stack; size_t len; TYPE_1__ value; int type; } ;
typedef TYPE_2__ ucl_object_t ;
typedef enum ucl_string_flags { ____Placeholder_ucl_string_flags } ucl_string_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 char* FUNC_0 (int) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*,char*,char const**,int,int,int) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (char*,char const*,int) ;
 scalar_t__ FUNC_6 (char const,int ) ;

ucl_object_t *
FUNC_7 (const char *VAR_12, size_t VAR_13, enum ucl_string_flags VAR_14)
{
 ucl_object_t *VAR_15;
 const char *VAR_16, *VAR_17, *VAR_18, *VAR_19;
 char *VAR_20, *VAR_21;
 size_t VAR_22;

 if (VAR_12 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_15 = FUNC_4 ();
 if (VAR_15) {
  if (VAR_13 == 0) {
   VAR_13 = FUNC_1 (VAR_12);
  }
  if (VAR_14 & VAR_10) {

   for (VAR_16 = VAR_12; (size_t)(VAR_16 - VAR_12) < VAR_13; VAR_16 ++) {
    if (!FUNC_6 (*VAR_16, VAR_1)) {
     break;
    }
   }

   for (VAR_17 = VAR_12 + VAR_13 - 1; VAR_17 > VAR_16; VAR_17 --) {
    if (!FUNC_6 (*VAR_17, VAR_1)) {
     break;
    }
   }
   VAR_17 ++;
  }
  else {
   VAR_16 = VAR_12;
   VAR_17 = VAR_12 + VAR_13;
  }

  VAR_15->type = VAR_2;
  if (VAR_14 & VAR_3) {
   for (VAR_18 = VAR_16, VAR_22 = 0; VAR_18 < VAR_17; VAR_18 ++, VAR_22 ++) {
    if (FUNC_6 (*VAR_18, VAR_0)) {
     VAR_22 ++;
    }
   }
   VAR_20 = FUNC_0 (VAR_22 + 1);
   if (VAR_20 != ((void*)0)) {
    for (VAR_18 = VAR_16, VAR_21 = VAR_20; VAR_18 < VAR_17; VAR_18 ++, VAR_21 ++) {
     if (FUNC_6 (*VAR_18, VAR_0)) {
      switch (*VAR_18) {
      case '\n':
       *VAR_21++ = '\\';
       *VAR_21 = 'n';
       break;
      case '\r':
       *VAR_21++ = '\\';
       *VAR_21 = 'r';
       break;
      case '\b':
       *VAR_21++ = '\\';
       *VAR_21 = 'b';
       break;
      case '\t':
       *VAR_21++ = '\\';
       *VAR_21 = 't';
       break;
      case '\f':
       *VAR_21++ = '\\';
       *VAR_21 = 'f';
       break;
      case '\\':
       *VAR_21++ = '\\';
       *VAR_21 = '\\';
       break;
      case '"':
       *VAR_21++ = '\\';
       *VAR_21 = '"';
       break;
      }
     }
     else {
      *VAR_21 = *VAR_18;
     }
    }
    *VAR_21 = '\0';
    VAR_15->value.sv = VAR_20;
    VAR_15->trash_stack[VAR_11] = VAR_20;
    VAR_15->len = VAR_22;
   }
  }
  else {
   VAR_20 = FUNC_0 (VAR_17 - VAR_16 + 1);
   if (VAR_20 != ((void*)0)) {
    FUNC_5 (VAR_20, VAR_16, VAR_17 - VAR_16 + 1);
    VAR_15->value.sv = VAR_20;
    VAR_15->trash_stack[VAR_11] = VAR_20;
    VAR_15->len = VAR_17 - VAR_16;
   }
  }
  if ((VAR_14 & VAR_4) && VAR_20 != ((void*)0)) {

   if (VAR_14 & VAR_5) {
    if (!FUNC_2 (VAR_15, VAR_20, VAR_15->len) && (VAR_14 & VAR_8)) {
     FUNC_3 (VAR_15, VAR_20, VAR_20 + VAR_15->len, &VAR_19,
       VAR_14 & VAR_7,
       VAR_14 & VAR_6,
       VAR_14 & VAR_9);
    }
   }
   else {
    FUNC_3 (VAR_15, VAR_20, VAR_20 + VAR_15->len, &VAR_19,
      VAR_14 & VAR_7,
      VAR_14 & VAR_6,
      VAR_14 & VAR_9);
   }
  }
 }

 return VAR_15;
}
