
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 struct tm* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,struct tm*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tm* FUNC_5 (int const* const,long,struct tm*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int) ;
 struct tm VAR_7 ;
 int FUNC_7 (int) ;

struct tm *
FUNC_8(const time_t *const VAR_8)
{
 struct tm *VAR_9;

 if (VAR_0 != 0) {
  FUNC_3(&VAR_6, VAR_5);
  if (VAR_4 != 0) {
   VAR_1 = VAR_4;
   return(((void*)0));
  }
  VAR_9 = FUNC_2(VAR_3);
  if (VAR_9 == ((void*)0)) {
   if ((VAR_9 = (struct tm *)FUNC_6(sizeof(struct tm)))
       == ((void*)0))
    return(((void*)0));
   FUNC_4(VAR_3, VAR_9);
  }
  FUNC_0(&VAR_2);
  FUNC_7(1);
  VAR_9 = FUNC_5(VAR_8, 0L, VAR_9);
  FUNC_1(&VAR_2);
 } else {
  FUNC_7(0);
  VAR_9 = FUNC_5(VAR_8, 0L, &VAR_7);
 }
 return(VAR_9);
}
