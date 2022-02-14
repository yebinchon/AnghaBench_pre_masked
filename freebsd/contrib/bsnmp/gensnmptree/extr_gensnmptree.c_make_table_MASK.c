
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int *) ;
 char* VAR_2 ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct node const*,int ,int *) ;
 int FUNC_6 (int *,struct node const*) ;
 int FUNC_7 (char*,char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(const struct node *VAR_4, int VAR_5)
{
 FILE *VAR_6;

 char VAR_7[VAR_0 + 1];
 FUNC_7(VAR_7, "%stree.h", VAR_2);
 if ((VAR_6 = FUNC_2(VAR_7, "w")) == ((void*)0))
  FUNC_0(1, "%s: ", VAR_7);
 FUNC_5(VAR_6, VAR_4, VAR_1, ((void*)0));

 FUNC_3(VAR_6, "\n#ifdef SNMPTREE_TYPES\n");
 FUNC_4(VAR_6, VAR_5);
 FUNC_3(VAR_6, "\n#endif /* SNMPTREE_TYPES */\n\n");

 FUNC_3(VAR_6, "#define %sCTREE_SIZE %u\n", VAR_2, VAR_3);
 FUNC_3(VAR_6, "extern const struct snmp_node %sctree[];\n", VAR_2);

 FUNC_1(VAR_6);

 FUNC_7(VAR_7, "%stree.c", VAR_2);
 if ((VAR_6 = FUNC_2(VAR_7, "w")) == ((void*)0))
  FUNC_0(1, "%s: ", VAR_7);
 FUNC_6(VAR_6, VAR_4);
 FUNC_1(VAR_6);
}
