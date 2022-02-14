
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_create_inferior ) (char*,char*,char**) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char**) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2, char *VAR_3, char **VAR_4)
{
  VAR_0.to_create_inferior (VAR_2, VAR_3, VAR_4);

  FUNC_0 (VAR_1, "target_create_inferior (%s, %s, xxx)\n",
        VAR_2, VAR_3);
}
