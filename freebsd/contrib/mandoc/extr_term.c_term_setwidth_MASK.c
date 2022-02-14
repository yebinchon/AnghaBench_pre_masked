
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int (* setwidth ) (struct termp*,int,int) ;} ;
struct roffsu {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (char const*,struct roffsu*,int ) ;
 int FUNC_1 (struct termp*,int,int) ;
 int FUNC_2 (struct termp*,struct roffsu*) ;

void
FUNC_3(struct termp *VAR_1, const char *VAR_2)
{
 struct roffsu VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = 0;
 VAR_5 = 0;
 if (((void*)0) != VAR_2) {
  switch (*VAR_2) {
  case '+':
   VAR_4 = 1;
   VAR_2++;
   break;
  case '-':
   VAR_4 = -1;
   VAR_2++;
   break;
  default:
   break;
  }
  if (FUNC_0(VAR_2, &VAR_3, VAR_0) != ((void*)0))
   VAR_5 = FUNC_2(VAR_1, &VAR_3);
  else
   VAR_4 = 0;
 }
 (*VAR_1->setwidth)(VAR_1, VAR_4, VAR_5);
}
