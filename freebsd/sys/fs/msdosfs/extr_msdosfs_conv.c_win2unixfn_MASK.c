
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef char u_char ;
struct winentry {int weCnt; int weChksum; int* wePart1; int* wePart2; int* wePart3; } ;
struct msdosfsmount {int dummy; } ;
struct mbnambuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct mbnambuf*,int*,int) ;
 char* FUNC_2 (char*,int,struct msdosfsmount*) ;

int
FUNC_3(struct mbnambuf *VAR_4, struct winentry *VAR_5, int VAR_6,
    struct msdosfsmount *VAR_7)
{
 u_char *VAR_8, VAR_9[5];
 uint8_t *VAR_10;
 uint8_t *VAR_11, VAR_12[VAR_0 * 3 + 1];
 uint16_t VAR_13;
 int VAR_14;

 if ((VAR_5->weCnt&VAR_1) > FUNC_0(VAR_3, VAR_0)
     || !(VAR_5->weCnt&VAR_1))
  return -1;




 if (VAR_5->weCnt&VAR_2) {
  VAR_6 = VAR_5->weChksum;
 } else if (VAR_6 != VAR_5->weChksum)
  VAR_6 = -1;
 if (VAR_6 == -1)
  return -1;




 VAR_11 = VAR_12;
 for (VAR_10 = VAR_5->wePart1, VAR_14 = sizeof(VAR_5->wePart1)/2; --VAR_14 >= 0;) {
  VAR_13 = (VAR_10[1] << 8) | VAR_10[0];
  switch (VAR_13) {
  case 0:
   *VAR_11 = '\0';
   if (FUNC_1(VAR_4, VAR_12,
       (VAR_5->weCnt & VAR_1) - 1) != 0)
    return -1;
   return VAR_6;
  case '/':
   *VAR_11 = '\0';
   return -1;
  default:
   VAR_8 = FUNC_2(VAR_9, VAR_13, VAR_7);
   while (*VAR_8 != '\0')
    *VAR_11++ = *VAR_8++;
   break;
  }
  VAR_10 += 2;
 }
 for (VAR_10 = VAR_5->wePart2, VAR_14 = sizeof(VAR_5->wePart2)/2; --VAR_14 >= 0;) {
  VAR_13 = (VAR_10[1] << 8) | VAR_10[0];
  switch (VAR_13) {
  case 0:
   *VAR_11 = '\0';
   if (FUNC_1(VAR_4, VAR_12,
       (VAR_5->weCnt & VAR_1) - 1) != 0)
    return -1;
   return VAR_6;
  case '/':
   *VAR_11 = '\0';
   return -1;
  default:
   VAR_8 = FUNC_2(VAR_9, VAR_13, VAR_7);
   while (*VAR_8 != '\0')
    *VAR_11++ = *VAR_8++;
   break;
  }
  VAR_10 += 2;
 }
 for (VAR_10 = VAR_5->wePart3, VAR_14 = sizeof(VAR_5->wePart3)/2; --VAR_14 >= 0;) {
  VAR_13 = (VAR_10[1] << 8) | VAR_10[0];
  switch (VAR_13) {
  case 0:
   *VAR_11 = '\0';
   if (FUNC_1(VAR_4, VAR_12,
       (VAR_5->weCnt & VAR_1) - 1) != 0)
    return -1;
   return VAR_6;
  case '/':
   *VAR_11 = '\0';
   return -1;
  default:
   VAR_8 = FUNC_2(VAR_9, VAR_13, VAR_7);
   while (*VAR_8 != '\0')
    *VAR_11++ = *VAR_8++;
   break;
  }
  VAR_10 += 2;
 }
 *VAR_11 = '\0';
 if (FUNC_1(VAR_4, VAR_12, (VAR_5->weCnt & VAR_1) - 1) != 0)
  return -1;
 return VAR_6;
}
