
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (unsigned char*,unsigned char,size_t) ;
 int FUNC_3 (int,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_4 (unsigned char VAR_0, size_t VAR_1, void *VAR_2)
{
 int VAR_3 = *(int *)VAR_2;
 unsigned char *VAR_4;

 if (VAR_1 == 1) {
  return FUNC_3 (VAR_3, &VAR_0, 1);
 }
 else {
  VAR_4 = FUNC_1 (VAR_1);
  if (VAR_4 == ((void*)0)) {

   while (VAR_1 --) {
    if (FUNC_3 (VAR_3, &VAR_0, 1) == -1) {
     return -1;
    }
   }
  }
  else {
   FUNC_2 (VAR_4, VAR_0, VAR_1);
   if (FUNC_3 (VAR_3, VAR_4, VAR_1) == -1) {
    FUNC_0(VAR_4);
    return -1;
   }
   FUNC_0 (VAR_4);
  }
 }

 return 0;
}
