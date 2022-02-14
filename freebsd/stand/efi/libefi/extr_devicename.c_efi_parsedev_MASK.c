
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfs_devdesc {int dummy; } ;
struct disk_devdesc {int dummy; } ;
struct devsw {char const* dv_name; int dv_type; } ;
struct devdesc {int d_unit; struct devsw* d_dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct devsw** VAR_4 ;
 int FUNC_0 (struct disk_devdesc*,char const*,char const**) ;
 int VAR_5 ;
 int FUNC_1 (struct devdesc*) ;
 struct devdesc* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char const*,char**,int ) ;
 int FUNC_6 (struct zfs_devdesc*,char const*,char const**) ;

__attribute__((used)) static int
FUNC_7(struct devdesc **VAR_6, const char *VAR_7, const char **VAR_8)
{
 struct devdesc *VAR_9;
 struct devsw *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 char *VAR_14;
 const char *VAR_15;


 if (FUNC_3(VAR_7) < 2)
  return (VAR_0);


 for (VAR_11 = 0; VAR_4[VAR_11] != ((void*)0); VAR_11++) {
  VAR_10 = VAR_4[VAR_11];
  if (!FUNC_4(VAR_7, VAR_10->dv_name, FUNC_3(VAR_10->dv_name)))
   break;
 }
 if (VAR_4[VAR_11] == ((void*)0))
  return (VAR_1);

 VAR_15 = VAR_7 + FUNC_3(VAR_10->dv_name);
 VAR_9 = ((void*)0);
 VAR_13 = 0;

 switch (VAR_10->dv_type) {
 case 129:
  break;

 case 130:
  VAR_9 = FUNC_2(sizeof(struct disk_devdesc));
  if (VAR_9 == ((void*)0))
   return (VAR_2);

  VAR_13 = FUNC_0((struct disk_devdesc *)VAR_9, VAR_15, VAR_8);
  if (VAR_13 != 0)
   goto fail;
  break;
 default:
  VAR_9 = FUNC_2(sizeof(struct devdesc));
  if (VAR_9 == ((void*)0))
   return (VAR_2);

  VAR_12 = 0;
  VAR_14 = (char *)VAR_15;

  if (*VAR_15 != '\0' && *VAR_15 != ':') {
   VAR_5 = 0;
   VAR_12 = FUNC_5(VAR_15, &VAR_14, 0);
   if (VAR_5 != 0 || VAR_14 == VAR_15) {
    VAR_13 = VAR_3;
    goto fail;
   }
  }
  if (*VAR_14 != '\0' && *VAR_14 != ':') {
   VAR_13 = VAR_0;
   goto fail;
  }

  VAR_9->d_unit = VAR_12;
  if (VAR_8 != ((void*)0))
   *VAR_8 = (*VAR_14 == 0) ? VAR_14 : VAR_14 + 1;
  break;
 }

 VAR_9->d_dev = VAR_10;

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;
 else
  FUNC_1(VAR_9);
 return (0);

fail:
 FUNC_1(VAR_9);
 return (VAR_13);
}
