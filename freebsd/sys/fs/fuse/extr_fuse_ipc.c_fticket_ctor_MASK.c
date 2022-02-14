
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {scalar_t__ tk_unique; int tk_refcount; scalar_t__ irq_unique; struct fuse_data* tk_data; } ;
struct fuse_data {int ticketer; } ;


 int FUNC_0 (struct fuse_ticket*) ;
 int FUNC_1 (struct fuse_ticket*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct fuse_ticket*) ;
 int VAR_0 ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int
FUNC_6(void *VAR_1, int VAR_2, void *VAR_3, int VAR_4)
{
 struct fuse_ticket *VAR_5 = VAR_1;
 struct fuse_data *VAR_6 = VAR_3;

 FUNC_1(VAR_5);
 FUNC_0(VAR_5);

 VAR_5->tk_data = VAR_6;

 if (VAR_5->tk_unique != 0)
  FUNC_4(VAR_5);


 VAR_5->tk_unique = FUNC_2(&VAR_6->ticketer, 1);
 if (VAR_5->tk_unique == 0)
  VAR_5->tk_unique = FUNC_2(&VAR_6->ticketer, 1);

 VAR_5->irq_unique = 0;

 FUNC_5(&VAR_5->tk_refcount, 1);
 FUNC_3(VAR_0, 1);

 return 0;
}
