
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int mnt_flag; } ;
struct TYPE_2__ {int tm_ronly; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (struct mount*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct mount*,int ,int *) ;
 scalar_t__ FUNC_4 (struct mount*) ;
 int VAR_7 ;
 int FUNC_5 (struct mount*,int) ;
 int FUNC_6 (struct mount*,int ,int,int ) ;
 int FUNC_7 (struct mount*,int ) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (int *,struct mount**,int ) ;

__attribute__((used)) static int
FUNC_10(struct mount *VAR_8)
{
 int VAR_9, VAR_10;
 bool VAR_11;

 VAR_11 = (VAR_8->mnt_flag & VAR_2) != 0;
 VAR_10 = VAR_5 | (VAR_11 ? VAR_1 : 0);

 if ((VAR_9 = FUNC_9(((void*)0), &VAR_8, VAR_4)) != 0)
  return (VAR_9);
 VAR_9 = FUNC_8(VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);
 if (!VAR_11 && FUNC_4(VAR_8)) {
  VAR_9 = VAR_0;
  goto out;
 }
 FUNC_2(VAR_8)->tm_ronly = 1;
 FUNC_0(VAR_8);
 VAR_8->mnt_flag |= VAR_3;
 FUNC_1(VAR_8);
 for (;;) {
  FUNC_3(VAR_8, VAR_7, ((void*)0));
  FUNC_5(VAR_8, 0);
  VAR_9 = FUNC_6(VAR_8, 0, VAR_10, VAR_6);
  if (VAR_9 != 0) {
   FUNC_2(VAR_8)->tm_ronly = 0;
   FUNC_0(VAR_8);
   VAR_8->mnt_flag &= ~VAR_3;
   FUNC_1(VAR_8);
   goto out;
  }
  if (!FUNC_4(VAR_8))
   break;
 }
out:
 FUNC_7(VAR_8, 0);
 return (VAR_9);
}
