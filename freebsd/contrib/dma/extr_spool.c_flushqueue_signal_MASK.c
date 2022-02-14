
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int spooldir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char**,char*,int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(void)
{
        char *VAR_6 = ((void*)0);
 int VAR_7;

        if (FUNC_0(&VAR_6, "%d/%d", VAR_5.spooldir, VAR_4) < 0)
  return (-1);
 VAR_7 = FUNC_3(VAR_6, VAR_1|VAR_3|VAR_2, 0660);
 FUNC_2(VAR_6);
 if (VAR_7 < 0) {
  FUNC_4(VAR_0, "could not open flush file: %m");
  return (-1);
 }
        FUNC_1(VAR_7);
 return (0);
}
