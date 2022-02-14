
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct ngpcb {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ngpcb* const,int ) ;
 struct ngpcb* FUNC_2 (struct socket*) ;

__attribute__((used)) static void
FUNC_3(struct socket *VAR_1)
{
 struct ngpcb *const VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2 != ((void*)0), ("ngd_detach: pcbp == NULL"));
 FUNC_1(VAR_2, VAR_0);
}
