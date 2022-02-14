
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _Unwind_Exception {int private_2; scalar_t__ private_1; int exception_class; } ;
struct _Unwind_Context {int dummy; } ;
typedef scalar_t__ _Unwind_Reason_Code ;
struct TYPE_4__ {scalar_t__ (* personality ) (int,int ,int ,struct _Unwind_Exception*,struct _Unwind_Context*) ;} ;
typedef TYPE_1__ _Unwind_FrameState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct _Unwind_Exception*,struct _Unwind_Context*) ;
 scalar_t__ FUNC_1 (int,int ,int ,struct _Unwind_Exception*,struct _Unwind_Context*) ;
 scalar_t__ FUNC_2 (struct _Unwind_Context*,TYPE_1__*) ;
 int FUNC_3 (struct _Unwind_Context*) ;
 int FUNC_4 (struct _Unwind_Context*) ;
 int FUNC_5 (struct _Unwind_Context*,struct _Unwind_Context*) ;
 int FUNC_6 (struct _Unwind_Context*,TYPE_1__*) ;

_Unwind_Reason_Code
FUNC_7(struct _Unwind_Exception *VAR_7)
{
  struct _Unwind_Context VAR_8, VAR_9;
  _Unwind_Reason_Code VAR_10;


  FUNC_4 (&VAR_8);
  VAR_9 = VAR_8;



  while (1)
    {
      _Unwind_FrameState VAR_11;



      VAR_10 = FUNC_2 (&VAR_9, &VAR_11);

      if (VAR_10 == VAR_2)

 return VAR_2;

      if (VAR_10 != VAR_6)


 return VAR_3;


      if (VAR_11.personality)
 {
   VAR_10 = (*VAR_11.personality) (1, VAR_0, VAR_7->exception_class,
        VAR_7, &VAR_9);
   if (VAR_10 == VAR_4)
     break;
   else if (VAR_10 != VAR_1)
     return VAR_3;
 }


      FUNC_6 (&VAR_9, &VAR_11);
    }



  VAR_7->private_1 = 0;
  VAR_7->private_2 = FUNC_3 (&VAR_9);

  VAR_9 = VAR_8;
  VAR_10 = FUNC_0 (VAR_7, &VAR_9);
  if (VAR_10 != VAR_5)
    return VAR_10;

  FUNC_5 (&VAR_8, &VAR_9);
}
