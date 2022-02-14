
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntarg {int error; int list; } ;
struct mntaarg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mntaarg*,int ) ;
 int FUNC_2 (void const*,char*,int,int *) ;
 void* FUNC_3 (int,int ,int) ;
 struct mntarg* FUNC_4 (struct mntarg*,char const*,char*,int) ;
 int VAR_3 ;

struct mntarg *
FUNC_5(struct mntarg *VAR_4, const char *VAR_5, const void *VAR_6, int VAR_7)
{
 struct mntaarg *VAR_8;
 char *VAR_9;

 if (VAR_6 == ((void*)0))
  return (VAR_4);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_3(sizeof *VAR_4, VAR_0, VAR_1 | VAR_2);
  FUNC_0(&VAR_4->list);
 }
 if (VAR_4->error)
  return (VAR_4);
 VAR_8 = FUNC_3(sizeof *VAR_8 + VAR_7, VAR_0, VAR_1 | VAR_2);
 FUNC_1(&VAR_4->list, VAR_8, VAR_3);
 VAR_9 = (void *)(VAR_8 + 1);
 VAR_4->error = FUNC_2(VAR_6, VAR_9, VAR_7, ((void*)0));
 return (FUNC_4(VAR_4, VAR_5, VAR_9, -1));
}
