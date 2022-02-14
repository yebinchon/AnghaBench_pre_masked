
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unionfs_mount {int dummy; } ;
struct mount {int mnt_nvnodelistsize; int * mnt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct unionfs_mount* FUNC_0 (struct mount*) ;
 int VAR_2 ;
 int FUNC_1 (char*,void*) ;
 int VAR_3 ;
 int FUNC_2 (struct unionfs_mount*,int ) ;
 int FUNC_3 (struct mount*,int,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct mount *VAR_4, int VAR_5)
{
 struct unionfs_mount *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_1("unionfs_unmount: mp = %p\n", (void *)VAR_4);

 VAR_6 = FUNC_0(VAR_4);
 VAR_10 = 0;

 if (VAR_5 & VAR_1)
  VAR_10 |= VAR_0;


 for (VAR_9 = 0; (VAR_7 = FUNC_3(VAR_4, 1, VAR_10, VAR_3)) != 0;) {
  VAR_8 = VAR_4->mnt_nvnodelistsize;
  if (VAR_8 == VAR_9)
   break;
  VAR_9 = VAR_8;
 }

 if (VAR_7)
  return (VAR_7);

 FUNC_2(VAR_6, VAR_2);
 VAR_4->mnt_data = ((void*)0);

 return (0);
}
