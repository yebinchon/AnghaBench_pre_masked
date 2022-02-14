
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,size_t,scalar_t__*,int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,unsigned char*,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,unsigned char*,size_t) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_5(void *VAR_5, unsigned char *VAR_6, size_t VAR_7)
{
 for (;;) {



  ssize_t VAR_8;

  int VAR_9;





  VAR_8 = FUNC_4(0, VAR_6, VAR_7);
  if (VAR_8 <= 0) {
   if (VAR_8 < 0 && VAR_2 == VAR_0) {
    continue;
   }
   VAR_9 = 1;
  } else {
   VAR_9 = 0;
  }

  if (VAR_9) {
   if (*(int *)VAR_5) {
    if (VAR_4) {
     FUNC_3(VAR_3, "recv: EOF\n");
    }
   }
   return -1;
  }
  if (*(int *)VAR_5) {
   FUNC_2("recv", VAR_6, (size_t)VAR_8);
  }
  return (int)VAR_8;
 }
}
