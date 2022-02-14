
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef unsigned int uint32_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;

 int FUNC_2 (int ,unsigned int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (void*,void const*,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(unsigned VAR_13, const void *VAR_14, off_t VAR_15)
{
 volatile void *VAR_16;

 FUNC_4(&VAR_12, VAR_11);

 if (VAR_15 < 0 || VAR_15 % VAR_3 != 0)
  return (VAR_0);


 FUNC_2(VAR_5, (uint64_t)VAR_15);







 FUNC_2(VAR_4, VAR_13);

 VAR_16 = FUNC_0(VAR_2);
 FUNC_3((void *)(uintptr_t)VAR_16, VAR_14, VAR_3);

 FUNC_2(VAR_8, VAR_9);
 switch (FUNC_1(VAR_10)) {
 case 128:
  return (VAR_1);
 default:
  break;
 }

 return (0);
}
