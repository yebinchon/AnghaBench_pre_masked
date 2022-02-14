
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ page_size; } ;
typedef int TTRACE_ARG_TYPE ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (int VAR_3, CORE_ADDR VAR_4, int VAR_5)
{
  int VAR_6;

  VAR_6 = FUNC_0 (VAR_0,
      VAR_3,
      (TTRACE_ARG_TYPE) VAR_4,
    (TTRACE_ARG_TYPE) VAR_2.page_size,
      (TTRACE_ARG_TYPE) VAR_5);
  if (VAR_1 || (VAR_6 < 0))
    {
      return;
    }
}
