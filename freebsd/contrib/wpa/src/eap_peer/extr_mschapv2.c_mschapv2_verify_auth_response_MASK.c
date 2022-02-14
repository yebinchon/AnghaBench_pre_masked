
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

int FUNC_2(const u8 *VAR_1,
      const u8 *VAR_2, size_t VAR_3)
{
 u8 VAR_4[VAR_0];
 if (VAR_3 < 2 + 2 * VAR_0 ||
     VAR_2[0] != 'S' || VAR_2[1] != '=' ||
     FUNC_0((char *) (VAR_2 + 2), VAR_4,
         VAR_0) ||
     FUNC_1(VAR_1, VAR_4,
       VAR_0) != 0)
  return -1;
 return 0;
}
