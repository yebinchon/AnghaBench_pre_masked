
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*,int,char*,int) ;
 int FUNC_1 (int*,int,char*,int) ;
 int FUNC_2 (int*,int,char const*,char const*) ;

__attribute__((used)) static u32 FUNC_3(u32 *VAR_0,
           bool VAR_1,
           u32 VAR_2,
           const char *VAR_3,
           int VAR_4,
           const char *VAR_5,
           const char *VAR_6)
{
 u8 VAR_7 = 2 + (VAR_4 >= 0 ? 1 : 0) + (VAR_5 ? 1 : 0);
 u32 VAR_8 = 0;

 VAR_8 += FUNC_1(VAR_0 + VAR_8, VAR_1, "grc_regs", VAR_7);
 VAR_8 += FUNC_0(VAR_0 + VAR_8, VAR_1, "count", VAR_2);
 VAR_8 += FUNC_2(VAR_0 + VAR_8, VAR_1, "split", VAR_3);
 if (VAR_4 >= 0)
  VAR_8 += FUNC_0(VAR_0 + VAR_8, VAR_1, "id", VAR_4);
 if (VAR_5 && VAR_6)
  VAR_8 += FUNC_2(VAR_0 + VAR_8, VAR_1, VAR_5, VAR_6);

 return VAR_8;
}
