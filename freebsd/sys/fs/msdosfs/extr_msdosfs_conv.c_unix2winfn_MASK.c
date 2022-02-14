
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_char ;
struct winentry {int weCnt; int weChksum; int * wePart3; int * wePart2; int * wePart1; scalar_t__ weReserved2; scalar_t__ weReserved1; int weAttributes; } ;
struct msdosfsmount {int pm_u2w; int pm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char const**,size_t,int,int,int ,int ) ;
 int FUNC_1 (struct winentry*,int,int) ;
 int FUNC_2 (int const**,size_t*,int ,struct msdosfsmount*) ;
 size_t FUNC_3 (int const*,size_t) ;

int
FUNC_4(const u_char *VAR_3, size_t VAR_4, struct winentry *VAR_5, int VAR_6,
    int VAR_7, struct msdosfsmount *VAR_8)
{
 uint8_t *VAR_9;
 int VAR_10, VAR_11;
 uint16_t VAR_12;




 VAR_4 = FUNC_3(VAR_3, VAR_4);




 VAR_4 = FUNC_0((const char **)&VAR_3, VAR_4, (VAR_6 - 1) * VAR_1, 2,
     VAR_8->pm_flags, VAR_8->pm_u2w);




 FUNC_1(VAR_5, 0xff, sizeof(*VAR_5));
 VAR_5->weCnt = VAR_6;
 VAR_5->weAttributes = VAR_0;
 VAR_5->weReserved1 = 0;
 VAR_5->weChksum = VAR_7;
 VAR_5->weReserved2 = 0;




 VAR_11 = 0;
 for (VAR_9 = VAR_5->wePart1, VAR_10 = sizeof(VAR_5->wePart1)/2; --VAR_10 >= 0 && !VAR_11;) {
  VAR_12 = FUNC_2(&VAR_3, &VAR_4, 0, VAR_8);
  *VAR_9++ = VAR_12;
  *VAR_9++ = VAR_12 >> 8;
  if (!VAR_12)
   VAR_11 = VAR_2;
 }
 for (VAR_9 = VAR_5->wePart2, VAR_10 = sizeof(VAR_5->wePart2)/2; --VAR_10 >= 0 && !VAR_11;) {
  VAR_12 = FUNC_2(&VAR_3, &VAR_4, 0, VAR_8);
  *VAR_9++ = VAR_12;
  *VAR_9++ = VAR_12 >> 8;
  if (!VAR_12)
   VAR_11 = VAR_2;
 }
 for (VAR_9 = VAR_5->wePart3, VAR_10 = sizeof(VAR_5->wePart3)/2; --VAR_10 >= 0 && !VAR_11;) {
  VAR_12 = FUNC_2(&VAR_3, &VAR_4, 0, VAR_8);
  *VAR_9++ = VAR_12;
  *VAR_9++ = VAR_12 >> 8;
  if (!VAR_12)
   VAR_11 = VAR_2;
 }
 if (!VAR_4)
  VAR_11 = VAR_2;
 VAR_5->weCnt |= VAR_11;
 return !VAR_11;
}
