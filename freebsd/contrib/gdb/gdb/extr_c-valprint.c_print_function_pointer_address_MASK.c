
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct ui_file*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,struct ui_file*,int ) ;
 int FUNC_3 (scalar_t__,int,struct ui_file*) ;

__attribute__((used)) static void
FUNC_4 (CORE_ADDR VAR_4, struct ui_file *VAR_5)
{
  CORE_ADDR VAR_6 = FUNC_1 (VAR_1,
           VAR_4,
           &VAR_2);



  if (VAR_0 && VAR_6 != VAR_4)
    {
      FUNC_0 ("@", VAR_5);
      FUNC_3 (VAR_4, 1, VAR_5);
      FUNC_0 (": ", VAR_5);
    }
  FUNC_2 (VAR_6, VAR_5, VAR_3);
}
