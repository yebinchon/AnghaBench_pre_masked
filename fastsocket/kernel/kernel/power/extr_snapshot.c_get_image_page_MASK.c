
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void *FUNC_5(gfp_t VAR_1, int VAR_2)
{
 void *VAR_3;

 VAR_3 = (void *)FUNC_0(VAR_1);
 if (VAR_2)
  while (VAR_3 && FUNC_1(FUNC_4(VAR_3))) {

   FUNC_2(FUNC_4(VAR_3));
   VAR_0++;
   VAR_3 = (void *)FUNC_0(VAR_1);
  }
 if (VAR_3) {
  FUNC_2(FUNC_4(VAR_3));
  FUNC_3(FUNC_4(VAR_3));
 }
 return VAR_3;
}
