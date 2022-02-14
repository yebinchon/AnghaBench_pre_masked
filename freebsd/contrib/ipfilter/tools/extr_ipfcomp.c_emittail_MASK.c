
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fg_flags; char* fg_name; struct TYPE_3__* fg_next; } ;
typedef TYPE_1__ frgroup_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1()
{
 frgroup_t *VAR_3;

 FUNC_0(VAR_1, "\nint ipfrule_add()\n{\n	int err;\n\n");




 for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->fg_next)
  FUNC_0(VAR_1, "	err = ipfrule_add_%s_%s();\n	if (err != 0)\n		return err;\n",



   (VAR_3->fg_flags & VAR_0) ? "in" : "out", VAR_3->fg_name);
 FUNC_0(VAR_1, "	return 0;\n");

 FUNC_0(VAR_1, "}\n\n");


 FUNC_0(VAR_1, "\nint ipfrule_remove()\n{\n	int err;\n\n");




 for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->fg_next)
  FUNC_0(VAR_1, "	err = ipfrule_remove_%s_%s();\n	if (err != 0)\n		return err;\n",



   (VAR_3->fg_flags & VAR_0) ? "in" : "out", VAR_3->fg_name);
 FUNC_0(VAR_1, "	return 0;\n");

 FUNC_0(VAR_1, "}\n");
}
