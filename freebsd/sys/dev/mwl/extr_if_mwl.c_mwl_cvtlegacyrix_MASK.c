
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*) ;

__attribute__((used)) static __inline int
FUNC_1(int VAR_0)
{
 static const int VAR_1[] =
     { 2, 4, 11, 22, 44, 12, 18, 24, 36, 48, 72, 96, 108 };
 return (VAR_0 < FUNC_0(VAR_1) ? VAR_1[VAR_0] : 0);
}
