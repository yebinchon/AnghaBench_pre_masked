
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long kernel_ulong_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_1,
       kernel_ulong_t *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++)
  if (VAR_2[VAR_5 / VAR_0] & (1L << (VAR_5%VAR_0)))
   FUNC_0(VAR_1 + FUNC_1(VAR_1), "%X,*", VAR_5);
}
