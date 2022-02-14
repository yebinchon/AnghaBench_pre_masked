
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str {int nfields; char* tag; struct field* field; } ;
struct field {int type; char* name; } ;
typedef int FILE ;







 int FUNC_0 (int *,char*,char*,...) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int,int *) ;
 char** VAR_0 ;
 struct str** VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct str* VAR_4 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_5, int VAR_6)
{
 struct str *VAR_7;
 struct field *VAR_8;
 int VAR_9;

 FUNC_1("      if (n == NULL)\n", VAR_5);
 if (VAR_6)
  FUNC_1("	    return;\n", VAR_5);
 else
  FUNC_1("	    return NULL;\n", VAR_5);
 if (VAR_6)
  FUNC_1("      result->blocksize += nodesize[n->type];\n", VAR_5);
 else {
  FUNC_1("      new = state->block;\n", VAR_5);
  FUNC_1("      state->block = (char *)state->block + nodesize[n->type];\n", VAR_5);
 }
 FUNC_1("      switch (n->type) {\n", VAR_5);
 for (VAR_7 = VAR_4 ; VAR_7 < &VAR_4[VAR_2] ; VAR_7++) {
  for (VAR_9 = 0 ; VAR_9 < VAR_3 ; VAR_9++) {
   if (VAR_1[VAR_9] == VAR_7)
    FUNC_0(VAR_5, "      case %s:\n", VAR_0[VAR_9]);
  }
  for (VAR_9 = VAR_7->nfields ; --VAR_9 >= 1 ; ) {
   VAR_8 = &VAR_7->field[VAR_9];
   switch (VAR_8->type) {
   case 131:
    if (VAR_6) {
     FUNC_2(12, VAR_5);
     FUNC_0(VAR_5, "calcsize(n->%s.%s, result);\n",
      VAR_7->tag, VAR_8->name);
    } else {
     FUNC_2(12, VAR_5);
     FUNC_0(VAR_5, "new->%s.%s = copynode(n->%s.%s, state);\n",
      VAR_7->tag, VAR_8->name, VAR_7->tag, VAR_8->name);
    }
    break;
   case 130:
    if (VAR_6) {
     FUNC_2(12, VAR_5);
     FUNC_0(VAR_5, "sizenodelist(n->%s.%s, result);\n",
      VAR_7->tag, VAR_8->name);
    } else {
     FUNC_2(12, VAR_5);
     FUNC_0(VAR_5, "new->%s.%s = copynodelist(n->%s.%s, state);\n",
      VAR_7->tag, VAR_8->name, VAR_7->tag, VAR_8->name);
    }
    break;
   case 128:
    if (VAR_6) {
     FUNC_2(12, VAR_5);
     FUNC_0(VAR_5, "result->stringsize += strlen(n->%s.%s) + 1;\n",
      VAR_7->tag, VAR_8->name);
    } else {
     FUNC_2(12, VAR_5);
     FUNC_0(VAR_5, "new->%s.%s = nodesavestr(n->%s.%s, state);\n",
      VAR_7->tag, VAR_8->name, VAR_7->tag, VAR_8->name);
    }
    break;
   case 132:
   case 129:
    if (! VAR_6) {
     FUNC_2(12, VAR_5);
     FUNC_0(VAR_5, "new->%s.%s = n->%s.%s;\n",
      VAR_7->tag, VAR_8->name, VAR_7->tag, VAR_8->name);
    }
    break;
   }
  }
  FUNC_2(12, VAR_5);
  FUNC_1("break;\n", VAR_5);
 }
 FUNC_1("      };\n", VAR_5);
 if (! VAR_6)
  FUNC_1("      new->type = n->type;\n", VAR_5);
}
