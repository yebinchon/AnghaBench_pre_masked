
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef int location_t ;
struct TYPE_4__ {char* file; scalar_t__ line; scalar_t__ column; } ;
typedef TYPE_1__ expanded_location ;
struct TYPE_5__ {char* (* decl_printable_name ) (scalar_t__,int) ;} ;


 char* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char const*,char const*,char const*,char const*,char const*,char const*,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int,...) ;
 char* FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static tree
FUNC_7 (location_t VAR_3)
{
  expanded_location VAR_4 = FUNC_2 (VAR_3);
  const char *VAR_5 = ((void*)0), *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
  char VAR_11[30];
  char *VAR_12;
  tree VAR_13;


  VAR_5 = VAR_4.file;
  if (VAR_5 == ((void*)0) && VAR_1 != VAR_0)
    VAR_5 = FUNC_0 (VAR_1);
  if (VAR_5 == ((void*)0))
    VAR_5 = "<unknown file>";

  if (VAR_4.line > 0)
    {





        FUNC_5 (VAR_11, "%d", VAR_4.line);
      VAR_6 = ":";
      VAR_7 = VAR_11;
    }
  else
    VAR_6 = VAR_7 = "";


  VAR_9 = VAR_2.decl_printable_name (VAR_1, 1);
  if (VAR_9)
    {
      VAR_8 = " (";
      VAR_10 = ")";
    }
  else
    VAR_8 = VAR_9 = VAR_10 = "";

  VAR_12 = FUNC_1 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, ((void*)0));
  VAR_13 = FUNC_4 (VAR_12);
  FUNC_3 (VAR_12);

  return VAR_13;
}
