
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _Unwind_Exception {scalar_t__ private_2; int exception_class; } ;
struct _Unwind_Context {int dummy; } ;
typedef int _Unwind_Reason_Code ;
struct TYPE_4__ {int (* personality ) (int,int,int ,struct _Unwind_Exception*,struct _Unwind_Context*) ;} ;
typedef TYPE_1__ _Unwind_FrameState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ,struct _Unwind_Exception*,struct _Unwind_Context*) ;
 int FUNC_2 (struct _Unwind_Context*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct _Unwind_Context*) ;
 int FUNC_4 (struct _Unwind_Context*,TYPE_1__*) ;

__attribute__((used)) static _Unwind_Reason_Code
FUNC_5(struct _Unwind_Exception *VAR_6,
         struct _Unwind_Context *VAR_7)
{
  _Unwind_Reason_Code VAR_8;

  while (1)
    {
      _Unwind_FrameState VAR_9;
      int VAR_10;

      VAR_8 = FUNC_2 (VAR_7, &VAR_9);


      VAR_10 = (FUNC_3 (VAR_7) == VAR_6->private_2
         ? VAR_1 : 0);

      if (VAR_8 != VAR_5)


 return VAR_3;


      if (VAR_9.personality)
 {
   VAR_8 = (*VAR_9.personality) (1, VAR_0 | VAR_10,
        VAR_6->exception_class, VAR_6, VAR_7);
   if (VAR_8 == VAR_4)
     break;
   if (VAR_8 != VAR_2)
     return VAR_3;
 }


      FUNC_0 (!VAR_10);

      FUNC_4 (VAR_7, &VAR_9);
    }

  return VAR_8;
}
