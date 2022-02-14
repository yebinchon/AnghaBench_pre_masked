
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t err_error; char* err_func; int err_line; scalar_t__ err_msg; int err_elferror; } ;
typedef TYPE_1__ Dwarf_Error ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char const** VAR_3 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,char*,char const*,char*,int) ;

const char *
FUNC_2(Dwarf_Error *VAR_4)
{
 const char *VAR_5;

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (VAR_4->err_error < 0 || VAR_4->err_error >= VAR_2)
  return VAR_3[VAR_2];
 else if (VAR_4->err_error == VAR_1)
  return VAR_3[VAR_1];
 else
  VAR_5 = VAR_3[VAR_4->err_error];

 if (VAR_4->err_error == VAR_0)
  FUNC_1(VAR_4->err_msg, sizeof(VAR_4->err_msg),
      "ELF error : %s [%s(%d)]", FUNC_0(VAR_4->err_elferror),
      VAR_4->err_func, VAR_4->err_line);
 else
  FUNC_1(VAR_4->err_msg, sizeof(VAR_4->err_msg),
      "%s [%s(%d)]", VAR_5, VAR_4->err_func, VAR_4->err_line);

 return (const char *) VAR_4->err_msg;
}
