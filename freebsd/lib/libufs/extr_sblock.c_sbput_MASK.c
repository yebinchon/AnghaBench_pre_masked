
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {struct csum* fs_csp; void* fs_sblockactualloc; } ;
struct csum {int dummy; } ;
typedef void* off_t ;


 int FUNC_0 (struct fs*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int*,struct fs*,void*,int ) ;
 int FUNC_3 (struct fs*,int ) ;
 int VAR_0 ;

int
FUNC_4(int VAR_1, struct fs *VAR_2, int VAR_3)
{
 struct csum *VAR_4;
 off_t VAR_5;
 int VAR_6, VAR_7;

 if ((VAR_7 = FUNC_2(&VAR_1, VAR_2, VAR_2->fs_sblockactualloc,
      VAR_0)) != 0)
  return (VAR_7);
 if (VAR_3 == 0)
  return (0);
 VAR_5 = VAR_2->fs_sblockactualloc;
 VAR_4 = VAR_2->fs_csp;
 VAR_2->fs_csp = ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_2->fs_sblockactualloc = FUNC_1(FUNC_3(VAR_2, FUNC_0(VAR_2, VAR_6)));
  if ((VAR_7 = FUNC_2(&VAR_1, VAR_2, VAR_2->fs_sblockactualloc,
       VAR_0)) != 0) {
   VAR_2->fs_sblockactualloc = VAR_5;
   VAR_2->fs_csp = VAR_4;
   return (-1);
  }
 }
 VAR_2->fs_sblockactualloc = VAR_5;
 VAR_2->fs_csp = VAR_4;
 return (0);
}
