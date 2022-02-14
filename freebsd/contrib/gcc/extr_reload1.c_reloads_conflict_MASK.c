
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reload_type { ____Placeholder_reload_type } reload_type ;
struct TYPE_2__ {int when_needed; int opnum; } ;
 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_1 (int VAR_1, int VAR_2)
{
  enum reload_type VAR_3 = VAR_0[VAR_1].when_needed;
  enum reload_type VAR_4 = VAR_0[VAR_2].when_needed;
  int VAR_5 = VAR_0[VAR_1].opnum;
  int VAR_6 = VAR_0[VAR_2].opnum;


  if (VAR_4 == 128)
    return 1;



  switch (VAR_3)
    {
    case 137:
      return (VAR_4 == 135
       || VAR_4 == 133
       || VAR_4 == 134
       || VAR_4 == 137
       || ((VAR_4 == 136
     || VAR_4 == 138)
    && VAR_6 > VAR_5));

    case 136:
      return ((VAR_4 == 136 && VAR_5 == VAR_6)
       || (VAR_4 == 137 && VAR_6 < VAR_5));

    case 138:
      return ((VAR_4 == 138 && VAR_5 == VAR_6)
       || (VAR_4 == 137 && VAR_6 < VAR_5));

    case 129:
      return ((VAR_4 == 129 && VAR_6 == VAR_5)
       || (VAR_4 == 130 && VAR_6 <= VAR_5));

    case 131:
      return ((VAR_4 == 131 && VAR_6 == VAR_5)
       || (VAR_4 == 130 && VAR_6 <= VAR_5));

    case 133:
      return (VAR_4 == 137 || VAR_4 == 135
       || VAR_4 == 133);

    case 134:
      return (VAR_4 == 137
       || VAR_4 == 134);

    case 130:
      return (VAR_4 == 135 || VAR_4 == 130
       || ((VAR_4 == 129
     || VAR_4 == 131)
    && VAR_6 >= VAR_5));

    case 135:
      return (VAR_4 == 137 || VAR_4 == 130
       || VAR_4 == 135
       || VAR_4 == 133);

    case 132:
      return VAR_4 == 132;

    case 128:
      return 1;

    default:
      FUNC_0 ();
    }
}
