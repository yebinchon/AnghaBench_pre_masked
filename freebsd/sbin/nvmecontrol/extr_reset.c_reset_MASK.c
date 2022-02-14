
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int*,int,int) ;
 TYPE_1__ VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_5(const struct cmd *VAR_3, int VAR_4, char *VAR_5[])
{
 int VAR_6;

 FUNC_0(VAR_4, VAR_5, VAR_3);
 FUNC_4(VAR_1.dev, &VAR_6, 1, 1);

 if (FUNC_3(VAR_6, VAR_0) < 0)
  FUNC_1(1, "reset request to %s failed", VAR_5[VAR_2]);

 FUNC_2(0);
}
