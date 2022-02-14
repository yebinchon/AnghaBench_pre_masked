
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {unsigned int ip_attr; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct inode*,int *,int ) ;
 int FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, unsigned *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_0, ((void*)0), 0);
 if (VAR_2 < 0) {
  FUNC_1(VAR_2);
  return VAR_2;
 }
 FUNC_3(FUNC_0(VAR_0));
 *VAR_1 = FUNC_0(VAR_0)->ip_attr;
 FUNC_5(VAR_0, 0);

 FUNC_2(VAR_2);
 return VAR_2;
}
