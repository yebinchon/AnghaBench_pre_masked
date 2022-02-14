
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
struct internal_nlist {char* n_strx; } ;


 int FUNC_0 (struct objfile*) ;
 unsigned int FUNC_1 (struct objfile*) ;
 int FUNC_2 (int *,char*,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_3 (struct objfile *VAR_3, struct internal_nlist VAR_4)
{
  char *VAR_5;

  if (((unsigned) VAR_4.n_strx + VAR_0) >=
      FUNC_1 (VAR_3))
    {
      FUNC_2 (&VAR_1, "bad string table offset in symbol %d",
   VAR_2);
      VAR_5 = "<bad string table offset>";
    }
  else
    VAR_5 = VAR_4.n_strx + VAR_0 +
      FUNC_0 (VAR_3);
  return VAR_5;
}
