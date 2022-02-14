
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_die_info {char* name; scalar_t__ has_children; } ;
struct objfile {int global_psymbols; } ;
struct dwarf2_cu {int language; struct objfile* objfile; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int ,int ,int *,int ,int ,int ,struct objfile*) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (char*,int *,int *,struct dwarf2_cu*,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static char *
FUNC_6 (struct partial_die_info *VAR_2, char *VAR_3,
         CORE_ADDR *VAR_4, CORE_ADDR *VAR_5,
         struct dwarf2_cu *VAR_6, const char *VAR_7)
{
  struct objfile *VAR_8 = VAR_6->objfile;
  const char *VAR_9 = VAR_2->name;
  char *VAR_10;



  if (VAR_9 == ((void*)0))
    VAR_9 = "(anonymous namespace)";
  VAR_10 = FUNC_1 (FUNC_5 (VAR_7) + 2 + FUNC_5 (VAR_9) + 1);
  FUNC_4 (VAR_10, VAR_7);
  if (*VAR_7 != '\0')
    FUNC_3 (VAR_10, "::");
  FUNC_3 (VAR_10, VAR_9);






  FUNC_0 (VAR_10, FUNC_5 (VAR_10),
         VAR_1, VAR_0,
         &VAR_8->global_psymbols,
         0, 0, VAR_6->language, VAR_8);



  if (VAR_2->has_children)
    VAR_3 = FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);

  return VAR_3;
}
