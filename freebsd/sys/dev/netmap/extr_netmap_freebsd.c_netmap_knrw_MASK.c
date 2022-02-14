
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_priv_d {int dummy; } ;
struct knote {struct netmap_priv_d* kn_hook; } ;


 int FUNC_0 (struct netmap_priv_d*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_0, long VAR_1, int VAR_2)
{
 struct netmap_priv_d *VAR_3;
 int VAR_4;

 if (VAR_1 != 0) {



  return 1;
 }


 VAR_3 = VAR_0->kn_hook;
 VAR_4 = FUNC_0(VAR_3, VAR_2, ((void*)0));

 return (VAR_2 & VAR_4) ? 1 : 0;
}
