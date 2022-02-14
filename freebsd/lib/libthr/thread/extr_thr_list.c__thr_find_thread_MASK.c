
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pthread*) ;
 int FUNC_1 (struct pthread*) ;
 int FUNC_2 (struct pthread*,struct pthread*) ;
 int FUNC_3 (struct pthread*,struct pthread*) ;
 struct pthread* FUNC_4 (struct pthread*) ;

int
FUNC_5(struct pthread *VAR_3, struct pthread *VAR_4,
    int VAR_5)
{
 struct pthread *VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_7 = 0;
 FUNC_0(VAR_3);
 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_3, VAR_6);
  if (VAR_5 == 0 && VAR_6->state == VAR_2) {
   FUNC_3(VAR_3, VAR_6);
   VAR_7 = VAR_1;
  }
 } else {
  VAR_7 = VAR_1;
 }
 FUNC_1(VAR_3);
 return (VAR_7);
}
