
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfs_devdesc {int dummy; } ;
struct TYPE_2__ {int d_unit; struct devsw* d_dev; } ;
struct disk_devdesc {TYPE_1__ dd; } ;
struct devsw {char const* dv_name; int dv_type; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct devsw** VAR_3 ;
 int FUNC_0 (struct disk_devdesc*,char const*,char const**) ;
 int FUNC_1 (struct disk_devdesc*) ;
 struct disk_devdesc* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char const*,char**,int ) ;
 int FUNC_6 (struct zfs_devdesc*,char const*,char const**) ;

__attribute__((used)) static int
FUNC_7(struct disk_devdesc **VAR_4, const char *VAR_5, const char **VAR_6)
{
    struct disk_devdesc *VAR_7;
    struct devsw *VAR_8;
    int VAR_9, VAR_10, VAR_11;
    const char *VAR_12;
    const char *VAR_13;


    if (FUNC_3(VAR_5) < 2)
 return(VAR_0);


    for (VAR_9 = 0, VAR_8 = ((void*)0); VAR_3[VAR_9] != ((void*)0); VAR_9++) {
 if (!FUNC_4(VAR_5, VAR_3[VAR_9]->dv_name, FUNC_3(VAR_3[VAR_9]->dv_name))) {
     VAR_8 = VAR_3[VAR_9];
     break;
 }
    }
    if (VAR_8 == ((void*)0))
 return(VAR_1);
    VAR_7 = FUNC_2(sizeof(struct disk_devdesc));
    VAR_11 = 0;
    VAR_13 = (VAR_5 + FUNC_3(VAR_8->dv_name));

    switch(VAR_8->dv_type) {
    case 129:
 break;

    case 131:
 VAR_11 = FUNC_0(VAR_7, VAR_13, VAR_6);
 if (VAR_11 != 0)
     goto fail;
 break;

    case 132:
    case 130:
 VAR_10 = 0;

 if (*VAR_13 && (*VAR_13 != ':')) {
     VAR_10 = FUNC_5(VAR_13, (char **)&VAR_12, 0);
     if (VAR_12 == VAR_13) {
  VAR_11 = VAR_2;
  goto fail;
     }
 } else {
  VAR_12 = VAR_13;
 }
 if (*VAR_12 && (*VAR_12 != ':')) {
     VAR_11 = VAR_0;
     goto fail;
 }

 VAR_7->dd.d_unit = VAR_10;
 if (VAR_6 != ((void*)0))
     *VAR_6 = (*VAR_12 == 0) ? VAR_12 : VAR_12 + 1;
 break;

    case 128:
    default:
 VAR_11 = VAR_0;
 goto fail;
    }
    VAR_7->dd.d_dev = VAR_8;
    if (VAR_4 == ((void*)0)) {
 FUNC_1(VAR_7);
    } else {
 *VAR_4 = VAR_7;
    }
    return(0);

 fail:
    FUNC_1(VAR_7);
    return(VAR_11);
}
