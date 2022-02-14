
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ page_size; scalar_t__ page_protections_allowed; } ;
typedef int TTRACE_ARG_TYPE ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int
FUNC_1 (int VAR_6, CORE_ADDR VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;

  VAR_8 = FUNC_0 (VAR_2,
      VAR_6,
      (TTRACE_ARG_TYPE) VAR_7,
      VAR_1,
      (TTRACE_ARG_TYPE) & VAR_9);
  if (VAR_4 || (VAR_8 < 0))
    {
      return 0;
    }


  if (VAR_5.page_protections_allowed)
    {
      VAR_10 = VAR_9 & ~VAR_0;
      VAR_8 = FUNC_0 (VAR_3,
          VAR_6,
          (TTRACE_ARG_TYPE) VAR_7,
    (TTRACE_ARG_TYPE) VAR_5.page_size,
          (TTRACE_ARG_TYPE) VAR_10);
      if (VAR_4 || (VAR_8 < 0))
 {
   return 0;
 }
    }

  return VAR_9;
}
