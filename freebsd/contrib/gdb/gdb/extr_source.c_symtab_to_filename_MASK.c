
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {char* fullname; char* filename; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct symtab*) ;

char *
FUNC_2 (struct symtab *VAR_0)
{
  int VAR_1;

  if (!VAR_0)
    return ((void*)0);



  if (VAR_0->fullname)
    return VAR_0->fullname;



  VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1 < 0)
    return VAR_0->filename;



  FUNC_0 (VAR_1);
  return VAR_0->fullname;
}
