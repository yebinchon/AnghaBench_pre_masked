
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cipso_v4_doi {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static int FUNC_1(const struct cipso_v4_doi *VAR_3,
          const unsigned char *VAR_4,
          u32 VAR_5)
{
 u16 VAR_6;
 u16 VAR_7;
 u32 VAR_8 = VAR_1 + 1;
 u32 VAR_9;

 if (VAR_3->type != VAR_0 || VAR_5 & 0x01)
  return -VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += 4) {
  VAR_6 = FUNC_0(&VAR_4[VAR_9]);
  if ((VAR_9 + 4) <= VAR_5)
   VAR_7 = FUNC_0(&VAR_4[VAR_9 + 2]);
  else
   VAR_7 = 0;

  if (VAR_6 > VAR_8)
   return -VAR_2;

  VAR_8 = VAR_7;
 }

 return 0;
}
