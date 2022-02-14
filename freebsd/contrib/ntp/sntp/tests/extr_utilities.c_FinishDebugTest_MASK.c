
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char const*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_4(const char * VAR_2,
       const char * VAR_3) {
 if (VAR_1)
  FUNC_2(VAR_0);

 FILE * VAR_4 = FUNC_3(VAR_2,"rb");
 FILE * VAR_5 = FUNC_3(VAR_3,"rb");
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 FUNC_0(VAR_4, VAR_5);
}
