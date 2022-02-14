
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int location_t ;
struct TYPE_5__ {int line; int file; } ;
typedef TYPE_1__ expanded_location ;
struct TYPE_6__ {int printer; } ;
typedef TYPE_2__ diagnostic_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 TYPE_1__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int ,...) ;

__attribute__((used)) static void
FUNC_7 (diagnostic_context *VAR_3,
         tree VAR_4, location_t VAR_5)
{
  expanded_location VAR_6;
  for (; ; VAR_4 = FUNC_2 (VAR_4))
    {
      VAR_6 = FUNC_4 (VAR_5);
      if (VAR_4 == VAR_0)
 break;
      FUNC_6 (VAR_3->printer, "%s:%d:   instantiated from %qs\n",
     VAR_6.file, VAR_6.line,
     FUNC_3 (FUNC_0 (VAR_4),
       VAR_1 | VAR_2));
      VAR_5 = FUNC_1 (VAR_4);
    }
  FUNC_6 (VAR_3->printer, "%s:%d:   instantiated from here",
        VAR_6.file, VAR_6.line);
  FUNC_5 (VAR_3->printer);
}
