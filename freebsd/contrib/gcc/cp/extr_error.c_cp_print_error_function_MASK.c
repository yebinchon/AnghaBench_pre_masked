
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int location; } ;
typedef TYPE_1__ diagnostic_info ;
struct TYPE_13__ {TYPE_3__* printer; } ;
typedef TYPE_2__ diagnostic_context ;
struct TYPE_14__ {char* prefix; } ;


 char* FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (TYPE_3__*,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_11 (diagnostic_context *VAR_1,
    diagnostic_info *VAR_2)
{
  if (FUNC_2 (VAR_1))
    {
      const char *VAR_3 = VAR_1->printer->prefix;
      const char *VAR_4 = FUNC_0 (VAR_2->location);
      char *VAR_5 = VAR_4 ? FUNC_4 (VAR_4) : ((void*)0);

      FUNC_8 (VAR_1->printer, VAR_5);

      if (VAR_0 == ((void*)0))
 FUNC_9 (VAR_1->printer, "At global scope:");
      else
 FUNC_10 (VAR_1->printer, "In %s %qs:",
     FUNC_5 (VAR_0),
     FUNC_1 (VAR_0, 2));
      FUNC_7 (VAR_1->printer);

      FUNC_3 (VAR_1);
      FUNC_6 (VAR_1->printer);
      VAR_1->printer->prefix = VAR_3;
    }
}
