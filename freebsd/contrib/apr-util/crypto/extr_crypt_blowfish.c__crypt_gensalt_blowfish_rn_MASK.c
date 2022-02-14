
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_word ;


 int FUNC_0 (char*,int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

char *FUNC_2(const char *VAR_2, unsigned long VAR_3,
 const char *VAR_4, int VAR_5, char *VAR_6, int VAR_7)
{
 if (VAR_5 < 16 || VAR_7 < 7 + 22 + 1 ||
     (VAR_3 && (VAR_3 < 4 || VAR_3 > 31)) ||
     VAR_2[0] != '$' || VAR_2[1] != '2' ||
     (VAR_2[2] != 'a' && VAR_2[2] != 'y')) {
  if (VAR_7 > 0) VAR_6[0] = '\0';
  FUNC_1((VAR_7 < 7 + 22 + 1) ? VAR_1 : VAR_0);
  return ((void*)0);
 }

 if (!VAR_3) VAR_3 = 5;

 VAR_6[0] = '$';
 VAR_6[1] = '2';
 VAR_6[2] = VAR_2[2];
 VAR_6[3] = '$';
 VAR_6[4] = '0' + VAR_3 / 10;
 VAR_6[5] = '0' + VAR_3 % 10;
 VAR_6[6] = '$';

 FUNC_0(&VAR_6[7], (const BF_word *)VAR_4, 16);
 VAR_6[7 + 22] = '\0';

 return VAR_6;
}
