
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx_args {int sa_flags; int sa_desc; int sa_sx; } ;


 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(void *VAR_0)
{
 struct sx_args *VAR_1 = VAR_0;

 FUNC_0(VAR_1->sa_sx, VAR_1->sa_desc, VAR_1->sa_flags);
}
