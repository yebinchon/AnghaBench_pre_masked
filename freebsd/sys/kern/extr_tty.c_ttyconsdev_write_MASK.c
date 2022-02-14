
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (struct uio*) ;
 int FUNC_1 (struct cdev*,struct uio*,int) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_0, struct uio *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1);

 return (FUNC_1(VAR_0, VAR_1, VAR_2));
}
