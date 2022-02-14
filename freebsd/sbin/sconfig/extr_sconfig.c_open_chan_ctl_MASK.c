
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int,int ,char**) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6 (int VAR_6)
{
 char VAR_7 [80];
 int VAR_8;


 FUNC_5 (VAR_7, "/dev/serial/ctl%d", VAR_6);
 VAR_8 = FUNC_3 (VAR_7, 0);
 if (VAR_8 < 0) {
  if (VAR_4 == VAR_0)
   FUNC_1 (VAR_5, "chan%d: not configured\n", VAR_6);
  else
   FUNC_4 (VAR_7);
  FUNC_0 (-1);
 }

 if (FUNC_2 (VAR_8, VAR_1, &VAR_3) < 0)
  FUNC_5 (VAR_3, "chan%d", VAR_6);
 return VAR_8;
}
