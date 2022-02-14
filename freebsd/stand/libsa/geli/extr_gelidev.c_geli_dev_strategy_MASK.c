
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct geli_devdesc {TYPE_5__* gdev; TYPE_4__* hdesc; } ;
typedef size_t off_t ;
typedef size_t daddr_t ;
struct TYPE_6__ {scalar_t__ md_sectorsize; } ;
struct TYPE_10__ {TYPE_1__ md; } ;
struct TYPE_8__ {TYPE_2__* d_dev; } ;
struct TYPE_9__ {TYPE_3__ dd; } ;
struct TYPE_7__ {int (* dv_strategy ) (TYPE_4__*,int,size_t,size_t,char*,int *) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*,size_t,char*,size_t) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (size_t,int) ;
 size_t FUNC_5 (size_t,int) ;
 int FUNC_6 (TYPE_4__*,int,size_t,size_t,char*,int *) ;

__attribute__((used)) static int
FUNC_7(void *VAR_5, int VAR_6, daddr_t VAR_7, size_t VAR_8, char *VAR_9,
    size_t *VAR_10)
{
 struct geli_devdesc *VAR_11;
 off_t VAR_12, VAR_13, VAR_14, VAR_15;
 size_t VAR_16;
 char *VAR_17;
 int VAR_18;


 if ((VAR_6 & VAR_3) != VAR_4)
  return (VAR_2);

 VAR_11 = (struct geli_devdesc *)VAR_5;
 VAR_15 = VAR_7 * VAR_0;
 VAR_14 = VAR_15 + VAR_8;
 VAR_13 = FUNC_4(VAR_15, (int)VAR_11->gdev->md.md_sectorsize);
 VAR_12 = FUNC_5(VAR_14, (int)VAR_11->gdev->md.md_sectorsize);
 VAR_16 = VAR_12 - VAR_13;





 if (VAR_16 <= VAR_8)
  VAR_17 = VAR_9;
 else if ((VAR_17 = FUNC_2(VAR_16)) == ((void*)0))
  return (VAR_1);




 VAR_18 = VAR_11->hdesc->dd.d_dev->dv_strategy(VAR_11->hdesc, VAR_6,
     VAR_13 / VAR_0, VAR_16, VAR_17, ((void*)0));
 if (VAR_18 != 0)
  goto out;
 VAR_18 = FUNC_1(VAR_11->gdev, VAR_13, VAR_17, VAR_16);
 if (VAR_18 != 0)
  goto out;





 if (VAR_17 != VAR_9)
  FUNC_3(VAR_9, VAR_17 + (VAR_15 - VAR_13), VAR_8);

 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_8;
out:
 if (VAR_17 != VAR_9)
  FUNC_0(VAR_17);

 return (VAR_18);
}
