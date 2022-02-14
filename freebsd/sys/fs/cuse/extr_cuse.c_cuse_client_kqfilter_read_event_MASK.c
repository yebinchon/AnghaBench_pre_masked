
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {struct cuse_client* kn_hook; } ;
struct cuse_client {int cflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_3, long VAR_4)
{
 struct cuse_client *VAR_5;

 FUNC_0(&VAR_2, VAR_1);

 VAR_5 = VAR_3->kn_hook;
 return ((VAR_5->cflags & VAR_0) ? 1 : 0);
}
