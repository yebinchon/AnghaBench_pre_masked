
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fhandle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,void*,...) ;
 void* FUNC_3 (size_t) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,void*,size_t) ;

int
FUNC_6(int VAR_5, char **VAR_6)
{
 int VAR_7;
 void *VAR_8;
 size_t VAR_9;

 if (VAR_5 < 2)
  return VAR_1;




 VAR_9 = 0;


 VAR_8 = ((void*)0);
 for (;;) {
  if (VAR_9) {
   VAR_8 = FUNC_3(VAR_9);
   if (VAR_8 == ((void*)0)) {
    FUNC_0(VAR_4, "out of memory");
    return VAR_1;
   }
  }
  VAR_7 = FUNC_2(VAR_6[1], VAR_8, &VAR_9);

  if (VAR_7 == 0) {
   break;
  } else {
   if (VAR_8 != ((void*)0))
    FUNC_1(VAR_8);
   if (VAR_3 != VAR_0) {
    FUNC_4("getfh");
    return VAR_1;
   }
  }
 }

 VAR_7 = FUNC_5(VAR_2, VAR_8, VAR_9);
 if (VAR_7 == -1) {
  FUNC_4("write");
  return VAR_1;
 }
 FUNC_1(VAR_8);

 return 0;
}
