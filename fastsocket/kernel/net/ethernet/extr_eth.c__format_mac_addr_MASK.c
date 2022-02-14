
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,unsigned char const) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_0, int VAR_1,
    const unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;
 char *VAR_5 = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 += FUNC_0(VAR_5, VAR_1 - (VAR_5 - VAR_0), "%02x", VAR_2[VAR_4]);
  if (VAR_4 == VAR_3 - 1)
   break;
  VAR_5 += FUNC_1(VAR_5, ":", VAR_1 - (VAR_5 - VAR_0));
 }
 return VAR_5 - VAR_0;
}
