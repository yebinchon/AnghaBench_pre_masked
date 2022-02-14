
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static u32 FUNC_2(const char *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4;




 for (VAR_2 = 0, VAR_3 = 0, VAR_4 = FUNC_1(VAR_1); VAR_2 < VAR_4; VAR_2++)
  VAR_3 = (VAR_3 << 4 | (VAR_3 >> (8 * sizeof(u32) - 4))) ^ VAR_1[VAR_2];
 return VAR_3 & (FUNC_0(VAR_0)->size - 1);
}
