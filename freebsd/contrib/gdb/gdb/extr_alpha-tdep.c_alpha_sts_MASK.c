
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;


 int FUNC_0 (void const*,int) ;
 int FUNC_1 (void*,int,int) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_0, const void *VAR_1)
{
  ULONGEST VAR_2, VAR_3;

  VAR_2 = FUNC_0 (VAR_1, 8);
  VAR_3 = ((VAR_2 >> 32) & 0xc0000000) | ((VAR_2 >> 29) & 0x3fffffff);
  FUNC_1 (VAR_0, 4, VAR_3);
}
