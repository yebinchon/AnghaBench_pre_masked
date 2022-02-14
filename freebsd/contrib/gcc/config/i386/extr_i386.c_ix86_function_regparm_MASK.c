
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cgraph_local_info {scalar_t__ local; } ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ force_align_arg_pointer; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 struct cgraph_local_info* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_9 (tree VAR_6, tree VAR_7)
{
  tree VAR_8;
  int VAR_9 = VAR_4;
  bool VAR_10 = 0;

  if (!VAR_0)
    {
      VAR_8 = FUNC_8 ("regparm", FUNC_5 (VAR_6));
      if (VAR_8)
 {
   VAR_9 = FUNC_2 (FUNC_4 (FUNC_4 (VAR_8)));
   VAR_10 = 1;
 }

      if (FUNC_8 ("fastcall", FUNC_5 (VAR_6)))
 {
   VAR_9 = 2;
   VAR_10 = 1;
 }


      if (!VAR_0 && !VAR_10 && VAR_7
   && VAR_1 && !VAR_5)
 {
   struct cgraph_local_info *VAR_11 = FUNC_6 (VAR_7);
   if (VAR_11 && VAR_11->local)
     {
       int VAR_12, VAR_13 = 0, VAR_14;



       for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
  if (VAR_2[VAR_12])
    break;


       if (VAR_12 == 3
    && FUNC_7 (VAR_7)
    && !FUNC_0 (VAR_7))
  VAR_12 = 2;






       if ((FUNC_1 (VAR_7)
     && FUNC_1 (VAR_7)->machine->force_align_arg_pointer)
    || (!FUNC_1 (VAR_7)
        && FUNC_8 (VAR_3,
        FUNC_5 (FUNC_3 (VAR_7)))))
  VAR_12 = 2;



       for (VAR_14 = 0; VAR_14 < 6; VAR_14++)
  if (VAR_2[VAR_14])
    VAR_13++;
       VAR_12
  = VAR_13 < VAR_12 ? VAR_12 - VAR_13 : 0;

       if (VAR_12 > VAR_9)
  VAR_9 = VAR_12;
     }
 }
    }
  return VAR_9;
}
