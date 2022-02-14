
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntarg {int dummy; } ;


 int FUNC_0 (int,char*) ;
 struct mntarg* FUNC_1 (struct mntarg*,char const*,int *,int ) ;

struct mntarg *
FUNC_2(struct mntarg *VAR_0, int VAR_1, const char *VAR_2)
{

 FUNC_0(VAR_2[0] == 'n' && VAR_2[1] == 'o',
     ("mount_argb(...,%s): name must start with 'no'", VAR_2));

 return (FUNC_1(VAR_0, VAR_2 + (VAR_1 ? 2 : 0), ((void*)0), 0));
}
