
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct rawcb {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rawcb*) ;
 struct rawcb* FUNC_2 (struct socket*) ;

__attribute__((used)) static void
FUNC_3(struct socket *VAR_0)
{
 struct rawcb *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1 != ((void*)0), ("raw_udetach: rp == NULL"));

 FUNC_1(VAR_1);
}
