
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_unit; } ;
struct disk_devdesc {int d_slice; int d_partition; TYPE_1__ dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char**,int) ;

int
FUNC_2(struct disk_devdesc *VAR_9, const char *VAR_10, const char **VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 const char *VAR_15;
 char *VAR_16;

 VAR_15 = VAR_10;
 VAR_12 = -1;






 if ((VAR_16 = FUNC_0(VAR_15, ':')) != ((void*)0) && VAR_16[1] != '\0') {
  VAR_13 = VAR_4;
  VAR_14 = VAR_2;
 } else {
  VAR_13 = VAR_3;
  VAR_14 = VAR_1;
 }

 if (*VAR_15 != '\0' && *VAR_15 != ':') {
  VAR_12 = FUNC_1(VAR_15, &VAR_16, 10);
  if (VAR_16 == VAR_15)
   return (VAR_8);
  if (*VAR_16 != '\0' && *VAR_16 != ':') {
   VAR_14 = *VAR_16 - 'a';
   if (VAR_14 < 0)
    return (VAR_6);
   VAR_16++;
  }
 } else
  return (VAR_5);

 if (*VAR_16 != '\0' && *VAR_16 != ':')
  return (VAR_5);
 VAR_9->dd.d_unit = VAR_12;
 VAR_9->d_slice = VAR_13;
 VAR_9->d_partition = VAR_14;
 if (VAR_11 != ((void*)0))
  *VAR_11 = (*VAR_16 == '\0') ? VAR_16: VAR_16 + 1;
 return (0);
}
