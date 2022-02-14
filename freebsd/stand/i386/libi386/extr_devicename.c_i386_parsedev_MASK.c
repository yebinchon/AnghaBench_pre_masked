
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfs_devdesc {int dummy; } ;
struct TYPE_2__ {int d_unit; struct devsw* d_dev; } ;
struct i386_devdesc {TYPE_1__ dd; } ;
struct disk_devdesc {int dummy; } ;
struct devsw {char const* dv_name; int dv_type; } ;
struct devdesc {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct devsw** VAR_4 ;
 int FUNC_0 (struct disk_devdesc*,char const*,char const**) ;
 int FUNC_1 (struct i386_devdesc*) ;
 struct i386_devdesc* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char const*,char**,int ) ;
 int FUNC_6 (struct zfs_devdesc*,char const*,char const**) ;

__attribute__((used)) static int
FUNC_7(struct i386_devdesc **VAR_5, const char *VAR_6, const char **VAR_7)
{
    struct i386_devdesc *VAR_8;
    struct devsw *VAR_9;
    int VAR_10, VAR_11, VAR_12;
    char *VAR_13;
    const char *VAR_14;


    if (FUNC_3(VAR_6) < 2)
 return(VAR_0);


    for (VAR_10 = 0, VAR_9 = ((void*)0); VAR_4[VAR_10] != ((void*)0); VAR_10++) {
 if (!FUNC_4(VAR_6, VAR_4[VAR_10]->dv_name, FUNC_3(VAR_4[VAR_10]->dv_name))) {
     VAR_9 = VAR_4[VAR_10];
     break;
 }
    }
    if (VAR_9 == ((void*)0))
 return(VAR_1);

    VAR_14 = (VAR_6 + FUNC_3(VAR_9->dv_name));
    VAR_8 = ((void*)0);
    VAR_12 = 0;

    switch(VAR_9->dv_type) {
    case 129:
 break;

    case 130:
 VAR_8 = FUNC_2(sizeof(struct i386_devdesc));
 if (VAR_8 == ((void*)0))
     return (VAR_2);

 VAR_12 = FUNC_0((struct disk_devdesc *)VAR_8, VAR_14, VAR_7);
 if (VAR_12 != 0)
     goto fail;
 break;

    case 128:
 VAR_8 = FUNC_2(sizeof (struct zfs_devdesc));
 if (VAR_8 == ((void*)0))
     return (VAR_2);

 VAR_12 = FUNC_6((struct zfs_devdesc *)VAR_8, VAR_14, VAR_7);
 if (VAR_12 != 0)
     goto fail;
 break;

    default:
 VAR_8 = FUNC_2(sizeof (struct devdesc));
 if (VAR_8 == ((void*)0))
     return (VAR_2);

 VAR_11 = 0;
 VAR_13 = (char *)VAR_14;

 if (*VAR_14 && (*VAR_14 != ':')) {
     VAR_11 = FUNC_5(VAR_14, &VAR_13, 0);
     if (VAR_13 == VAR_14) {
  VAR_12 = VAR_3;
  goto fail;
     }
 }

 if (*VAR_13 && (*VAR_13 != ':')) {
     VAR_12 = VAR_0;
     goto fail;
 }

 VAR_8->dd.d_unit = VAR_11;
 if (VAR_7 != ((void*)0))
     *VAR_7 = (*VAR_13 == 0) ? VAR_13 : VAR_13 + 1;
 break;
    }
    VAR_8->dd.d_dev = VAR_9;
    if (VAR_5 != ((void*)0))
 *VAR_5 = VAR_8;
    else
 FUNC_1(VAR_8);

    return(0);

 fail:
    FUNC_1(VAR_8);
    return(VAR_12);
}
