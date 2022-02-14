
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ptid; } ;
struct TYPE_3__ {int (* to_create_inferior ) (char*,char*,char**) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,char*,char**) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_6, char *VAR_7, char **VAR_8)
{
  VAR_3.to_create_inferior (VAR_6, VAR_7, VAR_8);

  if (VAR_4 && !FUNC_4 (VAR_0, VAR_2))
    {
      VAR_1.ptid = VAR_0;

      FUNC_5 (&VAR_5);

      VAR_0 = FUNC_3 (VAR_0);
      if (FUNC_0 (VAR_0) == -1)
 VAR_0 = VAR_1.ptid;

      if (!FUNC_2 (VAR_0))
 FUNC_1 (VAR_0);
    }
}
