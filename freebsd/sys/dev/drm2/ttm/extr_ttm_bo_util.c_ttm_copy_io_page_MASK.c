
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2, void *VAR_3, unsigned long VAR_4)
{
 uint32_t *VAR_5 =
     (uint32_t *) ((unsigned long)VAR_2 + (VAR_4 << VAR_0));
 uint32_t *VAR_6 =
     (uint32_t *) ((unsigned long)VAR_3 + (VAR_4 << VAR_0));

 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_1 / sizeof(uint32_t); ++VAR_7)

  *VAR_5++ = *VAR_6++;
 return 0;
}
