
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {void* state; char* string; char* name; int number; void* type; struct json_token* parent; struct json_token* sibling; struct json_token* child; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (unsigned int*) ;
 scalar_t__ FUNC_1 (struct json_token*) ;
 int FUNC_2 (struct json_token*) ;
 int FUNC_3 (char const**,char const*,int*) ;
 char* FUNC_4 (char const**,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (int ,char*,...) ;

struct json_token * FUNC_8(const char *VAR_14, size_t VAR_15)
{
 struct json_token *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 const char *VAR_19, *VAR_20;
 char *VAR_21;
 int VAR_22;
 unsigned int VAR_23 = 0;
 unsigned int VAR_24 = 0;

 VAR_19 = VAR_14;
 VAR_20 = VAR_14 + VAR_15;

 for (; VAR_19 < VAR_20; VAR_19++) {
  switch (*VAR_19) {
  case '[':
  case '{':
   if (!VAR_17) {
    VAR_18 = FUNC_0(&VAR_24);
    if (!VAR_18)
     goto fail;
    if (!VAR_16)
     VAR_16 = VAR_18;
   } else if (VAR_17->state == VAR_11) {
    VAR_18 = VAR_17;
   } else if (VAR_17->parent &&
       VAR_17->parent->type == VAR_0 &&
       VAR_17->parent->state == VAR_8 &&
       VAR_17->state == VAR_3) {
    VAR_18 = VAR_17;
   } else {
    FUNC_7(VAR_12,
        "JSON: Invalid state for start array/object");
    goto fail;
   }
   VAR_23++;
   if (VAR_23 > VAR_4) {
    FUNC_7(VAR_12,
        "JSON: Max depth exceeded");
    goto fail;
   }
   VAR_18->type = *VAR_19 == '[' ? VAR_0 : VAR_7;
   VAR_18->state = VAR_8;
   VAR_18->child = FUNC_0(&VAR_24);
   if (!VAR_18->child)
    goto fail;
   VAR_17 = VAR_18->child;
   VAR_17->parent = VAR_18;
   VAR_17->state = VAR_3;
   break;
  case ']':
  case '}':
   if (!VAR_17 || !VAR_17->parent ||
       VAR_17->parent->state != VAR_8) {
    FUNC_7(VAR_12,
        "JSON: Invalid state for end array/object");
    goto fail;
   }
   VAR_23--;
   VAR_17 = VAR_17->parent;
   if ((*VAR_19 == ']' &&
        VAR_17->type != VAR_0) ||
       (*VAR_19 == '}' &&
        VAR_17->type != VAR_7)) {
    FUNC_7(VAR_12,
        "JSON: Array/Object mismatch");
    goto fail;
   }
   if (VAR_17->child->state == VAR_3 &&
       !VAR_17->child->child &&
       !VAR_17->child->sibling) {


    FUNC_2(VAR_17->child);
    VAR_17->child = ((void*)0);
   }
   VAR_17->state = VAR_2;
   break;
  case '\"':
   VAR_21 = FUNC_4(&VAR_19, VAR_20);
   if (!VAR_21)
    goto fail;
   if (!VAR_17) {
    VAR_18 = FUNC_0(&VAR_24);
    if (!VAR_18)
     goto fail;
    VAR_18->type = VAR_9;
    VAR_18->string = VAR_21;
    VAR_18->state = VAR_2;
   } else if (VAR_17->parent &&
       VAR_17->parent->type == VAR_0 &&
       VAR_17->parent->state == VAR_8 &&
       VAR_17->state == VAR_3) {
    VAR_17->string = VAR_21;
    VAR_17->state = VAR_2;
    VAR_17->type = VAR_9;
    FUNC_7(VAR_13,
        "JSON: String value: '%s'",
        VAR_17->string);
   } else if (VAR_17->state == VAR_3) {
    VAR_17->type = VAR_10;
    VAR_17->name = VAR_21;
    VAR_17->state = VAR_8;
   } else if (VAR_17->state == VAR_11) {
    VAR_17->string = VAR_21;
    VAR_17->state = VAR_2;
    VAR_17->type = VAR_9;
    FUNC_7(VAR_13,
        "JSON: String value: '%s' = '%s'",
        VAR_17->name,
        VAR_17->string);
   } else {
    FUNC_7(VAR_12,
        "JSON: Invalid state for a string");
    FUNC_5(VAR_21);
    goto fail;
   }
   break;
  case ' ':
  case '\t':
  case '\r':
  case '\n':

   break;
  case ':':
   if (!VAR_17 || VAR_17->state != VAR_8)
    goto fail;
   VAR_17->state = VAR_11;
   break;
  case ',':
   if (!VAR_17)
    goto fail;
   VAR_17->sibling = FUNC_0(&VAR_24);
   if (!VAR_17->sibling)
    goto fail;
   VAR_17->sibling->parent = VAR_17->parent;
   VAR_17 = VAR_17->sibling;
   VAR_17->state = VAR_3;
   break;
  case 't':
  case 'f':
  case 'n':
   if (!((VAR_20 - VAR_19 >= 4 &&
          FUNC_6(VAR_19, "true", 4) == 0) ||
         (VAR_20 - VAR_19 >= 5 &&
          FUNC_6(VAR_19, "false", 5) == 0) ||
         (VAR_20 - VAR_19 >= 4 &&
          FUNC_6(VAR_19, "null", 4) == 0))) {
    FUNC_7(VAR_12,
        "JSON: Invalid literal name");
    goto fail;
   }
   if (!VAR_17) {
    VAR_18 = FUNC_0(&VAR_24);
    if (!VAR_18)
     goto fail;
    VAR_17 = VAR_18;
   } else if (VAR_17->state == VAR_11) {
    FUNC_7(VAR_13,
        "JSON: Literal name: '%s' = %c",
        VAR_17->name, *VAR_19);
   } else if (VAR_17->parent &&
       VAR_17->parent->type == VAR_0 &&
       VAR_17->parent->state == VAR_8 &&
       VAR_17->state == VAR_3) {
    FUNC_7(VAR_13,
        "JSON: Literal name: %c", *VAR_19);
   } else {
    FUNC_7(VAR_12,
        "JSON: Invalid state for a literal name");
    goto fail;
   }
   switch (*VAR_19) {
   case 't':
    VAR_17->type = VAR_1;
    VAR_17->number = 1;
    VAR_19 += 3;
    break;
   case 'f':
    VAR_17->type = VAR_1;
    VAR_17->number = 0;
    VAR_19 += 4;
    break;
   case 'n':
    VAR_17->type = VAR_5;
    VAR_19 += 3;
    break;
   }
   VAR_17->state = VAR_2;
   break;
  case '-':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':

   if (FUNC_3(&VAR_19, VAR_20, &VAR_22) < 0)
    goto fail;
   if (!VAR_17) {
    VAR_18 = FUNC_0(&VAR_24);
    if (!VAR_18)
     goto fail;
    VAR_18->type = VAR_6;
    VAR_18->number = VAR_22;
    VAR_18->state = VAR_2;
   } else if (VAR_17->state == VAR_11) {
    VAR_17->number = VAR_22;
    VAR_17->state = VAR_2;
    VAR_17->type = VAR_6;
    FUNC_7(VAR_13,
        "JSON: Number value: '%s' = '%d'",
        VAR_17->name,
        VAR_17->number);
   } else if (VAR_17->parent &&
       VAR_17->parent->type == VAR_0 &&
       VAR_17->parent->state == VAR_8 &&
       VAR_17->state == VAR_3) {
    VAR_17->number = VAR_22;
    VAR_17->state = VAR_2;
    VAR_17->type = VAR_6;
    FUNC_7(VAR_13,
        "JSON: Number value: %d",
        VAR_17->number);
   } else {
    FUNC_7(VAR_12,
        "JSON: Invalid state for a number");
    goto fail;
   }
   break;
  default:
   FUNC_7(VAR_12,
       "JSON: Unexpected JSON character: %c", *VAR_19);
   goto fail;
  }

  if (!VAR_16)
   VAR_16 = VAR_18;
  if (!VAR_17)
   VAR_17 = VAR_18;
 }

 if (FUNC_1(VAR_16) < 0) {
  FUNC_7(VAR_12, "JSON: Incomplete token in the tree");
  goto fail;
 }

 return VAR_16;
fail:
 FUNC_7(VAR_12, "JSON: Parsing failed");
 FUNC_2(VAR_16);
 return ((void*)0);
}
