
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_mnt {int im_flags; struct udf_mnt* s_table; int im_dev; int im_devvp; int im_cp; scalar_t__ im_l2d; scalar_t__ im_d2l; } ;
struct mount {int mnt_flag; int * mnt_data; } ;
struct TYPE_2__ {int (* close ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct udf_mnt* FUNC_2 (struct mount*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct udf_mnt*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 TYPE_1__* VAR_6 ;
 int FUNC_10 (struct mount*,int ,int,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct mount *VAR_7, int VAR_8)
{
 struct udf_mnt *VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_9 = FUNC_2(VAR_7);

 if (VAR_8 & VAR_1)
  VAR_11 |= VAR_0;

 if ((VAR_10 = FUNC_10(VAR_7, 0, VAR_11, VAR_5)))
  return (VAR_10);

 if (VAR_9->im_flags & VAR_4 && VAR_6) {
  if (VAR_9->im_d2l)
   VAR_6->close(VAR_9->im_d2l);




 }

 FUNC_5();
 FUNC_7(VAR_9->im_cp);
 FUNC_6();
 FUNC_11(VAR_9->im_devvp);
 FUNC_3(VAR_9->im_dev);

 if (VAR_9->s_table != ((void*)0))
  FUNC_4(VAR_9->s_table, VAR_3);

 FUNC_4(VAR_9, VAR_3);

 VAR_7->mnt_data = ((void*)0);
 FUNC_0(VAR_7);
 VAR_7->mnt_flag &= ~VAR_2;
 FUNC_1(VAR_7);

 return (0);
}
