
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_unit; struct devsw* d_dev; } ;
struct uboot_devdesc {TYPE_1__ dd; } ;
struct disk_devdesc {int dummy; } ;
struct devsw {char const* dv_name; int dv_type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct devsw** VAR_3 ;
 int FUNC_0 (struct disk_devdesc*,char const*,char const**) ;
 int FUNC_1 (struct uboot_devdesc*) ;
 struct uboot_devdesc* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_6(struct uboot_devdesc **VAR_4, const char *VAR_5,
    const char **VAR_6)
{
 struct uboot_devdesc *VAR_7;
 struct devsw *VAR_8;
 char *VAR_9;
 const char *VAR_10;
 int VAR_11, VAR_12, VAR_13;


 if (FUNC_3(VAR_5) < 2)
  return(VAR_0);


 for (VAR_11 = 0, VAR_8 = ((void*)0); VAR_3[VAR_11] != ((void*)0); VAR_11++) {
  if (!FUNC_4(VAR_5, VAR_3[VAR_11]->dv_name,
      FUNC_3(VAR_3[VAR_11]->dv_name))) {
   VAR_8 = VAR_3[VAR_11];
   break;
  }
 }
 if (VAR_8 == ((void*)0))
  return(VAR_1);
 VAR_7 = FUNC_2(sizeof(struct uboot_devdesc));
 VAR_13 = 0;
 VAR_10 = (VAR_5 + FUNC_3(VAR_8->dv_name));

 switch(VAR_8->dv_type) {
 case 128:
  break;
 case 129:
  VAR_12 = 0;

  if (*VAR_10 && (*VAR_10 != ':')) {

   VAR_12 = FUNC_5(VAR_10, &VAR_9, 0);
   if (VAR_9 == VAR_10) {
    VAR_13 = VAR_2;
    goto fail;
   }
  }
  if (*VAR_9 && (*VAR_9 != ':')) {
   VAR_13 = VAR_0;
   goto fail;
  }
  VAR_7->dd.d_unit = VAR_12;

  if (VAR_6 != ((void*)0))
   *VAR_6 = (*VAR_9 == 0) ? VAR_9 : VAR_9 + 1;
  break;

 default:
  VAR_13 = VAR_0;
  goto fail;
 }
 VAR_7->dd.d_dev = VAR_8;
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_7);
 } else {
  *VAR_4 = VAR_7;
 }
 return (0);

fail:
 FUNC_1(VAR_7);
 return (VAR_13);
}
