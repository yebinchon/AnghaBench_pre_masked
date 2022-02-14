
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


struct TYPE_39__ {int low; int unsignedp; int overflow; int high; } ;
struct op {size_t op; TYPE_5__ value; } ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_36__ {int skip_eval; } ;
struct TYPE_37__ {TYPE_1__ state; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_38__ {int prio; int flags; } ;


 int VAR_0 ;


 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;



 size_t VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,struct op*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 TYPE_5__ FUNC_3 (TYPE_2__*,TYPE_5__,TYPE_5__,int) ;
 TYPE_5__ FUNC_4 (TYPE_2__*,TYPE_5__,TYPE_5__,int) ;
 TYPE_5__ FUNC_5 (TYPE_2__*,TYPE_5__,TYPE_5__,int) ;
 TYPE_5__ FUNC_6 (TYPE_2__*,TYPE_5__,TYPE_5__,int) ;
 TYPE_5__ FUNC_7 (TYPE_2__*,TYPE_5__,TYPE_5__,int) ;
 TYPE_5__ FUNC_8 (TYPE_2__*,TYPE_5__,TYPE_5__) ;
 TYPE_5__ FUNC_9 (TYPE_2__*,TYPE_5__,int) ;
 int FUNC_10 (TYPE_5__) ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct op *
FUNC_11 (cpp_reader *VAR_10, struct op *VAR_11, enum cpp_ttype VAR_12)
{
  unsigned int VAR_13;

  if (VAR_11->op <= VAR_5 || VAR_11->op > VAR_6 + 2)
    {
    bad_op:
      FUNC_2 (VAR_10, VAR_3, "impossible operator '%u'", VAR_11->op);
      return 0;
    }

  if (VAR_12 == 136)
    return VAR_11;



  VAR_13 = VAR_8[VAR_12].prio - ((VAR_8[VAR_12].flags & VAR_7) != 0);
  while (VAR_13 < VAR_8[VAR_11->op].prio)
    {
      if (FUNC_0 (VAR_10, VAR_9)
   && VAR_8[VAR_11->op].flags & VAR_0)
 FUNC_1 (VAR_10, VAR_11);

      switch (VAR_11->op)
 {
 case 129:
 case 130:
 case 138:
 case 149:
   VAR_11[-1].value = FUNC_9 (VAR_10, VAR_11->value, VAR_11->op);
   break;

 case 133:
 case 141:
 case 131:
 case 142:
 case 150:
   VAR_11[-1].value = FUNC_3 (VAR_10, VAR_11[-1].value,
      VAR_11->value, VAR_11->op);
   break;

 case 146:
 case 144:
 case 145:
 case 143:
   VAR_11[-1].value
     = FUNC_7 (VAR_10, VAR_11[-1].value, VAR_11->value, VAR_11->op);
   break;

 case 147:
 case 137:
   VAR_11[-1].value
     = FUNC_6 (VAR_10, VAR_11[-1].value, VAR_11->value, VAR_11->op);
   break;

 case 153:
 case 135:
 case 128:
   VAR_11[-1].value
     = FUNC_4 (VAR_10, VAR_11[-1].value, VAR_11->value, VAR_11->op);
   break;

 case 139:
   VAR_11[-1].value = FUNC_8 (VAR_10, VAR_11[-1].value, VAR_11->value);
   break;

 case 148:
 case 140:
   VAR_11[-1].value = FUNC_5 (VAR_10, VAR_11[-1].value,
          VAR_11->value, VAR_11->op);
   break;

 case 134:
   VAR_11--;
   if (!FUNC_10 (VAR_11->value))
     VAR_10->state.skip_eval--;
   VAR_11->value.low = (!FUNC_10 (VAR_11->value)
       || !FUNC_10 (VAR_11[1].value));
   VAR_11->value.high = 0;
   VAR_11->value.unsignedp = 0;
   VAR_11->value.overflow = 0;
   continue;

 case 152:
   VAR_11--;
   if (FUNC_10 (VAR_11->value))
     VAR_10->state.skip_eval--;
   VAR_11->value.low = (!FUNC_10 (VAR_11->value)
       && !FUNC_10 (VAR_11[1].value));
   VAR_11->value.high = 0;
   VAR_11->value.unsignedp = 0;
   VAR_11->value.overflow = 0;
   continue;

 case 136:
   if (VAR_12 != VAR_1)
     {
       FUNC_2 (VAR_10, VAR_2, "missing ')' in expression");
       return 0;
     }
   VAR_11--;
   VAR_11->value = VAR_11[1].value;
   return VAR_11;

 case 151:
   VAR_11 -= 2;
   if (!FUNC_10 (VAR_11->value))
     {
       VAR_10->state.skip_eval--;
       VAR_11->value = VAR_11[1].value;
     }
   else
     VAR_11->value = VAR_11[2].value;
   VAR_11->value.unsignedp = (VAR_11[1].value.unsignedp
      || VAR_11[2].value.unsignedp);
   continue;

 case 132:
   FUNC_2 (VAR_10, VAR_2, "'?' without following ':'");
   return 0;

 default:
   goto bad_op;
 }

      VAR_11--;
      if (VAR_11->value.overflow && !VAR_10->state.skip_eval)
 FUNC_2 (VAR_10, VAR_4,
     "integer overflow in preprocessor expression");
    }

  if (VAR_12 == VAR_1)
    {
      FUNC_2 (VAR_10, VAR_2, "missing '(' in expression");
      return 0;
    }

  return VAR_11;
}
