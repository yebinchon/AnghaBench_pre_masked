
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cipso_v4_doi {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static int FUNC_1(const struct cipso_v4_doi *VAR_2,
           const unsigned char *VAR_3,
           u32 VAR_4)
{
 u16 VAR_5;
 int VAR_6 = -1;
 u32 VAR_7;

 if (VAR_2->type != VAR_0 || VAR_4 & 0x01)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7 += 2) {
  VAR_5 = FUNC_0(&VAR_3[VAR_7]);
  if (VAR_5 <= VAR_6)
   return -VAR_1;
  VAR_6 = VAR_5;
 }

 return 0;
}
