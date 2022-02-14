
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {int dummy; } ;
typedef enum exception_event_kind { ____Placeholder_exception_event_kind } exception_event_kind ;
struct TYPE_2__ {struct symtab_and_line* (* to_enable_exception_callback ) (int,int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_1 ;
 struct symtab_and_line* FUNC_1 (int,int) ;

__attribute__((used)) static struct symtab_and_line *
FUNC_2 (enum exception_event_kind VAR_2, int VAR_3)
{
  struct symtab_and_line *VAR_4;
  VAR_4 = VAR_0.to_enable_exception_callback (VAR_2, VAR_3);
  FUNC_0 (VAR_1,
        "target get_exception_callback_sal (%d, %d)\n",
        VAR_2, VAR_3);
  return VAR_4;
}
