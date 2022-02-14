
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hx_expr {int op; struct hx_expr* arg2; struct hx_expr* arg1; } ;
typedef TYPE_2__* hx509_env ;
typedef int hx509_context ;
struct TYPE_7__ {char const* string; } ;
struct TYPE_8__ {char const* name; struct TYPE_8__* next; TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;




 int VAR_2 ;
 char* FUNC_1 (int ,TYPE_2__*,struct hx_expr*) ;
 int const VAR_3 ;
 int const VAR_4 ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*,struct hx_expr*) ;
 int FUNC_3 (char const*,char const*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_5, hx509_env VAR_6, struct hx_expr *VAR_7)
{
    switch (VAR_7->op) {
    case 129:
    case 131:
    case 128: {
 const char *VAR_8, *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7->arg1);
 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7->arg2);

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
     return VAR_0;

 if (VAR_7->op == 128) {
     size_t VAR_11 = FUNC_4(VAR_8);
     size_t VAR_12 = FUNC_4(VAR_9);

     if (VAR_11 < VAR_12)
  return 0;
     VAR_10 = FUNC_3(VAR_8 + (VAR_11 - VAR_12), VAR_9) == 0;
 } else {
     VAR_10 = FUNC_3(VAR_8, VAR_9) == 0;
     if (VAR_7->op == 129)
  VAR_10 = !VAR_10;
 }
 return VAR_10;
    }
    case 130: {
 struct hx_expr *VAR_13;
 const char *VAR_14, *VAR_15;

 VAR_14 = FUNC_1(VAR_5, VAR_6, VAR_7->arg1);

 VAR_13 = VAR_7->arg2;

 if (VAR_13->op == VAR_4) {
     while (VAR_13) {
  VAR_15 = FUNC_1(VAR_5, VAR_6, VAR_13->arg1);
  if (FUNC_3(VAR_14, VAR_15) == 0)
      return VAR_1;
  VAR_13 = VAR_13->arg2;
     }
 } else if (VAR_13->op == VAR_3) {
     hx509_env VAR_16;

     VAR_16 = FUNC_2(VAR_5, VAR_6, VAR_13);
     if (VAR_16 == ((void*)0))
  return VAR_0;

     while (VAR_16) {
  if (VAR_16->type != VAR_2)
      continue;
  if (FUNC_3(VAR_14, VAR_16->name) == 0)
      return VAR_1;
  if (FUNC_3(VAR_14, VAR_16->u.string) == 0)
      return VAR_1;
  VAR_16 = VAR_16->next;
     }

 } else
     FUNC_0("hx509 eval IN unknown op: %d", (int)VAR_13->op);

 return VAR_0;
    }
    default:
 FUNC_0("hx509 eval expr with unknown op: %d", (int)VAR_7->op);
    }
    return VAR_0;
}
