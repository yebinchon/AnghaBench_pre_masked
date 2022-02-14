
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* printer; } ;
typedef TYPE_1__ diagnostic_context ;
struct TYPE_11__ {int (* decl_printable_name ) (int *,int) ;} ;
struct TYPE_10__ {char* prefix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 TYPE_6__ VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,...) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;

void
FUNC_12 (diagnostic_context *VAR_3, const char *VAR_4)
{
  if (FUNC_3 (VAR_3))
    {
      const char *VAR_5 = VAR_3->printer->prefix;
      char *VAR_6 = VAR_4 ? FUNC_5 (VAR_4) : ((void*)0);

      FUNC_9 (VAR_3->printer, VAR_6);

      if (VAR_1 == ((void*)0))
 FUNC_8 (VAR_3->printer, FUNC_2("At top level:"));
      else
 {
   if (FUNC_0 (FUNC_1 (VAR_1)) == VAR_0)
     FUNC_8
       (VAR_3->printer, FUNC_2("In member function %qs:"),
        VAR_2.decl_printable_name (VAR_1, 2));
   else
     FUNC_8
       (VAR_3->printer, FUNC_2("In function %qs:"),
        VAR_2.decl_printable_name (VAR_1, 2));
 }

      FUNC_4 (VAR_3);
      FUNC_7 (VAR_3->printer);
      VAR_3->printer->prefix = VAR_5;
      FUNC_6 ((char*) VAR_6);
    }
}
