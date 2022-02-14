
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int bit2idx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static __inline int
FUNC_2(uint64_t VAR_0)
{
 static const int VAR_1[] = {
  -1, 0, 1, -1, 2, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1,
  4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
 };
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_2 >= 0 && VAR_2 < sizeof(VAR_1) / sizeof(VAR_1[0]));
 return (VAR_1[VAR_2]);
}
