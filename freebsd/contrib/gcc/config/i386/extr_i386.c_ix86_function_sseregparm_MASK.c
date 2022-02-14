
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cgraph_local_info {scalar_t__ local; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 struct cgraph_local_info* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4 (tree VAR_7, tree VAR_8)
{


  if (VAR_3
      || (VAR_7
   && FUNC_3 ("sseregparm", FUNC_0 (VAR_7))))
    {
      if (!VAR_1)
 {
   if (VAR_8)
     FUNC_2 ("Calling %qD with attribute sseregparm without "
     "SSE/SSE2 enabled", VAR_8);
   else
     FUNC_2 ("Calling %qT with attribute sseregparm without "
     "SSE/SSE2 enabled", VAR_7);
   return 0;
 }

      return 2;
    }




  if (!VAR_0 && VAR_8
      && VAR_4 && VAR_5 && !VAR_6)
    {
      struct cgraph_local_info *VAR_9 = FUNC_1 (VAR_8);
      if (VAR_9 && VAR_9->local)
 return VAR_2 ? 2 : 1;
    }

  return 0;
}
