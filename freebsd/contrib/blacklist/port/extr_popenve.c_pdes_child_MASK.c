
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int fd; int fp; struct pid* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 struct pid* VAR_2 ;

__attribute__((used)) static void
FUNC_3(int *VAR_3, const char *VAR_4)
{
 struct pid *VAR_5;




 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next)



  (void)FUNC_0(FUNC_2(VAR_5->fp));


 if (VAR_4[0] == 'r') {
  (void)FUNC_0(VAR_3[0]);
  if (VAR_3[1] != VAR_1) {
   (void)FUNC_1(VAR_3[1], VAR_1);
   (void)FUNC_0(VAR_3[1]);
  }
  if (VAR_4[1] == '+')
   (void)FUNC_1(VAR_1, VAR_0);
 } else {
  (void)FUNC_0(VAR_3[1]);
  if (VAR_3[0] != VAR_0) {
   (void)FUNC_1(VAR_3[0], VAR_0);
   (void)FUNC_0(VAR_3[0]);
  }
 }
}
