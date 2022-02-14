
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tools_context {int access_type; int tdev; } ;
struct thread {int dummy; } ;
struct cdev {int si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tools_context*,int ) ;
 struct tools_context* FUNC_1 (int,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct tools_context *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1, VAR_2);
 VAR_8->tdev = VAR_4->si_drv1;
 VAR_8->access_type = VAR_0;
 FUNC_0(VAR_8, VAR_3);
 return (0);
}
