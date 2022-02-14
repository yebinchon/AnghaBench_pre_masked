
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef char u_char ;
struct msdosfsmount {int pm_d2u; int pm_flags; } ;
typedef int ssize_t ;
typedef int gentext ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (char const**,int,size_t,int,int ,int ) ;
 int FUNC_1 (char const**,...) ;

int
FUNC_2(const u_char *VAR_1, u_char VAR_2[12], size_t VAR_3, u_int VAR_4,
    struct msdosfsmount *VAR_5)
{
 ssize_t VAR_6, VAR_7;
 int VAR_8;
 int VAR_9 = 1;
 const u_char *VAR_10, *VAR_11, *VAR_12;
 u_char VAR_13[6], *VAR_14;
 uint16_t VAR_15;





 for (VAR_6 = 0; VAR_6 < 11; VAR_6++)
  VAR_2[VAR_6] = ' ';
 VAR_2[11] = 0;





 if (VAR_1[0] == '.' && VAR_3 == 1) {
  VAR_2[0] = '.';
  return VAR_4 <= 1;
 }
 if (VAR_1[0] == '.' && VAR_1[1] == '.' && VAR_3 == 2) {
  VAR_2[0] = '.';
  VAR_2[1] = '.';
  return VAR_4 <= 1;
 }




 for (VAR_10 = VAR_1, VAR_6 = VAR_3; --VAR_6 >= 0; VAR_10++)
  if (*VAR_10 != ' ' && *VAR_10 != '.')
   break;
 if (VAR_6 < 0)
  return 0;





 for (VAR_10 = VAR_1, VAR_6 = VAR_3; VAR_6 > 0;)
  if (FUNC_1(&VAR_10, (size_t *)&VAR_6, VAR_5) == 0)
   return 0;
 VAR_11 = VAR_12 = ((void*)0);
 for (VAR_10 = VAR_1 + 1, VAR_6 = VAR_3 - 1; --VAR_6 >= 0;) {
  switch (*VAR_10++) {
  case '.':
   if (!VAR_12)
    VAR_12 = VAR_10;
   break;
  case ' ':
   break;
  default:
   if (VAR_12)
    VAR_11 = VAR_12;
   VAR_12 = ((void*)0);
   break;
  }
 }






 if (VAR_11) {
  if (VAR_12)
   VAR_8 = VAR_12 - VAR_11;
  else
   VAR_8 = VAR_3 - (VAR_11 - VAR_1);
  for (VAR_10 = VAR_11, VAR_6 = VAR_8, VAR_7 = 8; VAR_6 > 0 && VAR_7 < 11; VAR_7++) {
   VAR_15 = FUNC_1(&VAR_10, (size_t *)&VAR_6, VAR_5);
   if (VAR_15 & 0xff00) {
    VAR_2[VAR_7] = VAR_15 >> 8;
    if (++VAR_7 < 11) {
     VAR_2[VAR_7] = VAR_15;
     if (VAR_9 != 3)
      VAR_9 = 2;
     continue;
    } else {
     VAR_9 = 3;
     VAR_2[VAR_7-1] = ' ';
     break;
    }
   } else {
    VAR_2[VAR_7] = VAR_15;
   }
   if (((VAR_2[VAR_7] & 0x80) || *(VAR_10 - 1) != VAR_2[VAR_7]) && VAR_9 != 3)
    VAR_9 = 2;
   if (VAR_2[VAR_7] == 1) {
    VAR_9 = 3;
    VAR_2[VAR_7] = '_';
   }
   if (VAR_2[VAR_7] == 2) {
    VAR_9 = 3;
    VAR_2[VAR_7--] = ' ';
   }
  }
  if (VAR_6 > 0)
   VAR_9 = 3;
  VAR_11--;
 } else {
  for (VAR_11 = VAR_10; *--VAR_11 == ' ' || *VAR_11 == '.';);
  VAR_11++;
 }




 for (VAR_6 = VAR_11 - VAR_1, VAR_7 = 0; VAR_1 < VAR_11 && VAR_7 < 8; VAR_7++) {
  VAR_15 = FUNC_1(&VAR_1, &VAR_6, VAR_5);
  if (VAR_15 & 0xff00) {
   VAR_2[VAR_7] = VAR_15 >> 8;
   if (++VAR_7 < 8) {
    VAR_2[VAR_7] = VAR_15;
    if (VAR_9 != 3)
     VAR_9 = 2;
    continue;
   } else {
    VAR_9 = 3;
    VAR_2[VAR_7-1] = ' ';
    break;
   }
  } else {
   VAR_2[VAR_7] = VAR_15;
  }
  if (((VAR_2[VAR_7] & 0x80) || *(VAR_1 - 1) != VAR_2[VAR_7]) && VAR_9 != 3)
   VAR_9 = 2;
  if (VAR_2[VAR_7] == 1) {
   VAR_9 = 3;
   VAR_2[VAR_7] = '_';
  }
  if (VAR_2[VAR_7] == 2) {
   VAR_9 = 3;
   VAR_2[VAR_7--] = ' ';
  }
 }
 if (VAR_1 < VAR_11)
  VAR_9 = 3;




 if (!VAR_7)
  VAR_2[0] = '_';





 if (VAR_9 != 3) {
  if (VAR_4 > 1)
   VAR_9 = 0;
  goto done;
 }




 if (VAR_4 == 0)
  goto done;
 for (VAR_14 = VAR_13 + sizeof(VAR_13); VAR_14 > VAR_13 && VAR_4; VAR_4 /= 10)
  *--VAR_14 = VAR_4 % 10 + '0';
 if (VAR_4) {
  VAR_9 = 0;
  goto done;
 }
 for (VAR_6 = 8; VAR_2[--VAR_6] == ' ';);
 VAR_6++;
 if (VAR_13 + sizeof(VAR_13) - VAR_14 + 1 > 8 - VAR_6)
  VAR_6 = 8 - (VAR_13 + sizeof(VAR_13) - VAR_14 + 1);



 VAR_10 = VAR_2;
 VAR_6 -= FUNC_0((const char**)&VAR_10, VAR_6, VAR_3, 1, VAR_5->pm_flags, VAR_5->pm_d2u);

 VAR_2[VAR_6++] = '~';
 while (VAR_14 < VAR_13 + sizeof(VAR_13))
  VAR_2[VAR_6++] = *VAR_14++;




 while (VAR_6 < 8)
  VAR_2[VAR_6++] = ' ';
 VAR_9 = 3;

done:




 if (VAR_2[0] == 0xe5)
  VAR_2[0] = VAR_0;

 return VAR_9;
}
