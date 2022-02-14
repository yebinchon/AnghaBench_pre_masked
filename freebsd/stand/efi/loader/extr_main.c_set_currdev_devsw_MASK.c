
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devsw {int dummy; } ;
struct devdesc {int d_unit; struct devsw* d_dev; } ;


 int FUNC_0 (struct devdesc*) ;

__attribute__((used)) static void
FUNC_1(struct devsw *VAR_0, int VAR_1)
{
 struct devdesc VAR_2;

 VAR_2.d_dev = VAR_0;
 VAR_2.d_unit = VAR_1;

 FUNC_0(&VAR_2);
}
