
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
typedef int cpp_reader ;
struct TYPE_9__ {int low; int overflow; int unsignedp; scalar_t__ high; } ;
typedef TYPE_1__ cpp_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,int ) ;
 int VAR_3 ;

__attribute__((used)) static cpp_num
FUNC_3 (cpp_reader *VAR_4, cpp_num VAR_5, cpp_num VAR_6,
     enum cpp_ttype VAR_7)
{
  bool VAR_8 = FUNC_2 (VAR_5, VAR_6, FUNC_0 (VAR_4, VAR_3));

  if (VAR_7 == VAR_1)
    VAR_5.low = VAR_8;
  else if (VAR_7 == VAR_2)
    VAR_5.low = !VAR_8;
  else if (VAR_7 == VAR_0)
    VAR_5.low = VAR_8 && !FUNC_1 (VAR_5, VAR_6);
  else
    VAR_5.low = !VAR_8 || FUNC_1 (VAR_5, VAR_6);

  VAR_5.high = 0;
  VAR_5.overflow = 0;
  VAR_5.unsignedp = 0;
  return VAR_5;
}
