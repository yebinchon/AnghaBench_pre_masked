
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tm* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,struct tm*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int const* const,long,struct tm*) ;
 scalar_t__ FUNC_4 (int) ;
 struct tm VAR_6 ;

struct tm *
FUNC_5(const time_t *const VAR_7)
{
 struct tm *VAR_8;

 if (VAR_0 != 0) {
  FUNC_1(&VAR_5, VAR_4);
  if (VAR_3 != 0) {
   VAR_1 = VAR_3;
   return(((void*)0));
  }




  if ((VAR_8 = FUNC_0(VAR_2)) == ((void*)0)) {
   if ((VAR_8 = (struct tm *)FUNC_4(sizeof(struct tm)))
       == ((void*)0)) {
    return(((void*)0));
   }
   FUNC_2(VAR_2, VAR_8);
  }
  FUNC_3(VAR_7, 0L, VAR_8);
  return(VAR_8);
 }
 else {
  FUNC_3(VAR_7, 0L, &VAR_6);
  return(&VAR_6);
 }
}
