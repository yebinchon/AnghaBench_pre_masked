
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct field {scalar_t__ type; void* decl; void* name; } ;
struct TYPE_2__ {size_t nfields; struct field* field; scalar_t__ done; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (char*,...) ;
 char* VAR_8 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];
 char VAR_11[2 * VAR_0];
 struct field *VAR_12;

 if (VAR_7 == ((void*)0) || VAR_7->done)
  FUNC_0("No current structure to add field to");
 if (! FUNC_1(VAR_9))
  FUNC_0("No field name");
 if (! FUNC_1(VAR_10))
  FUNC_0("No field type");
 VAR_12 = &VAR_7->field[VAR_7->nfields];
 VAR_12->name = FUNC_2(VAR_9);
 if (FUNC_5(VAR_10, "nodeptr") == 0) {
  VAR_12->type = VAR_2;
  FUNC_4(VAR_11, "union node *%s", VAR_9);
 } else if (FUNC_5(VAR_10, "nodelist") == 0) {
  VAR_12->type = VAR_3;
  FUNC_4(VAR_11, "struct nodelist *%s", VAR_9);
 } else if (FUNC_5(VAR_10, "string") == 0) {
  VAR_12->type = VAR_5;
  FUNC_4(VAR_11, "char *%s", VAR_9);
 } else if (FUNC_5(VAR_10, "int") == 0) {
  VAR_12->type = VAR_1;
  FUNC_4(VAR_11, "int %s", VAR_9);
 } else if (FUNC_5(VAR_10, "other") == 0) {
  VAR_12->type = VAR_4;
 } else if (FUNC_5(VAR_10, "temp") == 0) {
  VAR_12->type = VAR_6;
 } else {
  FUNC_0("Unknown type %s", VAR_10);
 }
 if (VAR_12->type == VAR_4 || VAR_12->type == VAR_6) {
  FUNC_3();
  VAR_12->decl = FUNC_2(VAR_8);
 } else {
  if (*VAR_8)
   FUNC_0("Garbage at end of line");
  VAR_12->decl = FUNC_2(VAR_11);
 }
 VAR_7->nfields++;
}
