
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct dentry*) ;

__attribute__((used)) static void FUNC_3(struct dentry *VAR_1)
{
    if (FUNC_0(VAR_1))
        FUNC_1(VAR_1->d_name.name);

 FUNC_2(VAR_0, VAR_1);
}
