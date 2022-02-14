
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum reload_type { ____Placeholder_reload_type } reload_type ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
struct TYPE_2__ {int class; scalar_t__ reg_rtx; scalar_t__ in; scalar_t__ out; int opnum; int when_needed; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ,int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_9 (int,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int
FUNC_11 (rtx *VAR_5, rtx VAR_6, enum reg_class VAR_7,
        enum reload_type VAR_8, int VAR_9, int VAR_10)
{
  rtx VAR_11 = *VAR_5;
  int VAR_12;



  if (FUNC_8 (VAR_6))
    return VAR_2;
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
    if ((FUNC_9 (VAR_7, VAR_4[VAR_12].class)
  || FUNC_9 (VAR_4[VAR_12].class, VAR_7))

 && (VAR_4[VAR_12].reg_rtx == 0
     || FUNC_6 (VAR_3[(int) VAR_7],
      FUNC_10 (VAR_4[VAR_12].reg_rtx)))
 && ((VAR_11 != 0 && FUNC_2 (VAR_4[VAR_12].in, VAR_11) && ! VAR_10
      && (VAR_6 == 0 || VAR_4[VAR_12].out == 0 || FUNC_2 (VAR_4[VAR_12].out, VAR_6)))
     || (VAR_6 != 0 && FUNC_2 (VAR_4[VAR_12].out, VAR_6)
  && (VAR_11 == 0 || VAR_4[VAR_12].in == 0 || FUNC_2 (VAR_4[VAR_12].in, VAR_11))))
 && (VAR_4[VAR_12].out == 0 || ! FUNC_8 (VAR_4[VAR_12].out))
 && (FUNC_5 (VAR_7) || VAR_1)
 && FUNC_3 (VAR_8, VAR_4[VAR_12].when_needed, VAR_9, VAR_4[VAR_12].opnum))
      return VAR_12;






  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
    if ((FUNC_9 (VAR_7, VAR_4[VAR_12].class)
  || FUNC_9 (VAR_4[VAR_12].class, VAR_7))


 && (VAR_4[VAR_12].reg_rtx == 0
     || FUNC_6 (VAR_3[(int) VAR_7],
      FUNC_10 (VAR_4[VAR_12].reg_rtx)))
 && VAR_6 == 0 && VAR_4[VAR_12].out == 0 && VAR_4[VAR_12].in != 0
 && ((FUNC_4 (VAR_11)
      && FUNC_1 (FUNC_0 (VAR_4[VAR_12].in)) == VAR_0
      && FUNC_2 (FUNC_7 (VAR_4[VAR_12].in, 0), VAR_11))
     || (FUNC_4 (VAR_4[VAR_12].in)
  && FUNC_1 (FUNC_0 (VAR_11)) == VAR_0
  && FUNC_2 (FUNC_7 (VAR_11, 0), VAR_4[VAR_12].in)))
 && (VAR_4[VAR_12].out == 0 || ! FUNC_8 (VAR_4[VAR_12].out))
 && (FUNC_5 (VAR_7) || VAR_1)
 && FUNC_3 (VAR_8, VAR_4[VAR_12].when_needed,
        VAR_9, VAR_4[VAR_12].opnum))
      {


 if (FUNC_4 (VAR_11))
   *VAR_5 = VAR_4[VAR_12].in;
 return VAR_12;
      }
  return VAR_2;
}
