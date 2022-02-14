
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ poc_name; } ;
typedef TYPE_1__ pseudo_typeS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char const*) ;
 char* FUNC_2 (int ,scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char const*,char*) ;

void
FUNC_4 (const pseudo_typeS *VAR_3)
{
  const char *VAR_4;
  const pseudo_typeS *VAR_5;
  for (VAR_5 = VAR_3; VAR_5->poc_name; VAR_5++)
    {
      VAR_4 = FUNC_2 (VAR_0, VAR_5->poc_name, (char *) VAR_5);
      if (VAR_4 && (!VAR_1 || FUNC_3 (VAR_4, "exists")))
 FUNC_1 (FUNC_0("error constructing %s pseudo-op table: %s"), VAR_2,
    VAR_4);
    }
}
