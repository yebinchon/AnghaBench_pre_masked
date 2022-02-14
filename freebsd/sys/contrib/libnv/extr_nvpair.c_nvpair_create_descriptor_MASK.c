
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvpair_t ;
typedef int int64_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int * FUNC_4 (char const*,int ,int ,int,int ) ;

nvpair_t *
FUNC_5(const char *VAR_2, int VAR_3)
{
 nvpair_t *VAR_4;

 VAR_3 = FUNC_3(VAR_3, VAR_0, 0);
 if (VAR_3 < 0)
  return (((void*)0));

 VAR_4 = FUNC_4(VAR_2, VAR_1, (uint64_t)VAR_3,
     sizeof(int64_t), 0);
 if (VAR_4 == ((void*)0)) {
  FUNC_1();
  FUNC_2(VAR_3);
  FUNC_0();
 }

 return (VAR_4);
}
