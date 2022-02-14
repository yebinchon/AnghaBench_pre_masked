
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ high; scalar_t__ low; int unsignedp; } ;
typedef TYPE_1__ cpp_num ;


 int FUNC_0 (TYPE_1__,size_t) ;

__attribute__((used)) static bool
FUNC_1 (cpp_num VAR_0, cpp_num VAR_1, size_t VAR_2)
{
  bool VAR_3;

  VAR_3 = VAR_0.unsignedp || VAR_1.unsignedp;

  if (!VAR_3)
    {


      VAR_3 = FUNC_0 (VAR_0, VAR_2);

      if (VAR_3 != FUNC_0 (VAR_1, VAR_2))
 return VAR_3;


    }

  return (VAR_0.high > VAR_1.high) || (VAR_0.high == VAR_1.high && VAR_0.low >= VAR_1.low);
}
