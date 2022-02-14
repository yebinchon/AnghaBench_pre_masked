
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_3 (void)
{
  static unsigned int VAR_4;

  if (!VAR_4)
    VAR_4 = FUNC_2 (VAR_1 == VAR_0
         ? "rsp" : "esp");

  FUNC_0 (VAR_4, -VAR_2);
  FUNC_1 (VAR_3, VAR_2);
}
