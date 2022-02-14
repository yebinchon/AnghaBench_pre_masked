
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int cppchar_t ;
typedef int cppchar_signed_t ;
struct TYPE_26__ {int node; } ;
struct TYPE_27__ {int type; TYPE_3__ val; } ;
typedef TYPE_4__ cpp_token ;
struct TYPE_25__ {int skip_eval; } ;
struct TYPE_24__ {int n_true; int n_false; int n_defined; } ;
struct TYPE_28__ {TYPE_2__ state; TYPE_1__ spec_nodes; } ;
typedef TYPE_5__ cpp_reader ;
typedef int cpp_num_part ;
struct TYPE_29__ {int unsignedp; int overflow; int high; int low; } ;
typedef TYPE_6__ cpp_num ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 unsigned int VAR_3 ;

 unsigned int VAR_4 ;


 int FUNC_0 (TYPE_5__*,int ) ;

 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_5__*,unsigned int*) ;
 int VAR_6 ;
 unsigned int FUNC_3 (TYPE_5__*,TYPE_4__ const*) ;
 int FUNC_4 (TYPE_5__*,int ,char*,...) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__ const*,unsigned int*,int*) ;
 TYPE_6__ FUNC_6 (TYPE_5__*,TYPE_4__ const*,unsigned int) ;
 TYPE_6__ FUNC_7 (TYPE_6__,int ) ;
 TYPE_6__ FUNC_8 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static cpp_num
FUNC_9 (cpp_reader *VAR_9, const cpp_token *VAR_10)
{
  cpp_num VAR_11;
  unsigned int VAR_12;
  int VAR_13 = 0;

  VAR_11.unsignedp = 0;
  VAR_11.overflow = 0;

  switch (VAR_10->type)
    {
    case 132:
      VAR_12 = FUNC_3 (VAR_9, VAR_10);
      switch (VAR_12 & VAR_3)
 {
 case 131:
   FUNC_4 (VAR_9, VAR_1,
       "floating constant in preprocessor expression");
   break;
 case 130:
   if (!(VAR_12 & VAR_4))
     return FUNC_6 (VAR_9, VAR_10, VAR_12);
   FUNC_4 (VAR_9, VAR_1,
       "imaginary number in preprocessor expression");
   break;

 case 129:

   break;
 }
      VAR_11.high = VAR_11.low = 0;
      break;

    case 128:
    case 134:
      {
 cppchar_t VAR_14 = FUNC_5 (VAR_9, VAR_10,
      &VAR_12, &VAR_13);

 VAR_11.high = 0;
 VAR_11.low = VAR_14;

 if (!VAR_13 && (cppchar_signed_t) VAR_14 < 0)
   {
     if (VAR_5 > VAR_0)
       VAR_11.low |= ~(~(cpp_num_part) 0
         >> (VAR_5 - VAR_0));
     VAR_11.high = ~(cpp_num_part) 0;
     VAR_11 = FUNC_7 (VAR_11, FUNC_0 (VAR_9, VAR_7));
   }
      }
      break;

    case 133:
      if (VAR_10->val.node == VAR_9->spec_nodes.n_defined)
 return FUNC_8 (VAR_9);
      else if (FUNC_0 (VAR_9, VAR_6)
        && (VAR_10->val.node == VAR_9->spec_nodes.n_true
     || VAR_10->val.node == VAR_9->spec_nodes.n_false))
 {
   VAR_11.high = 0;
   VAR_11.low = (VAR_10->val.node == VAR_9->spec_nodes.n_true);
 }
      else
 {
   VAR_11.high = 0;
   VAR_11.low = 0;
   if (FUNC_0 (VAR_9, VAR_8) && !VAR_9->state.skip_eval)
     FUNC_4 (VAR_9, VAR_2, "\"%s\" is not defined",
         FUNC_1 (VAR_10->val.node));
 }
      break;

    default:
      FUNC_2 (VAR_9, &VAR_12);
      VAR_11.high = 0;
      VAR_11.low = VAR_12;
    }

  VAR_11.unsignedp = !!VAR_13;
  return VAR_11;
}
