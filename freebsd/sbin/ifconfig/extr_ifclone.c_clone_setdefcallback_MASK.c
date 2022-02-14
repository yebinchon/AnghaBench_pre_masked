
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone_defcb {int * clone_cb; int ifprefix; } ;
typedef int clone_callback_func ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct clone_defcb*,int ) ;
 int VAR_1 ;
 struct clone_defcb* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*,scalar_t__) ;

void
FUNC_3(const char *VAR_3, clone_callback_func *VAR_4)
{
 struct clone_defcb *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5));
 FUNC_2(VAR_5->ifprefix, VAR_3, VAR_0-1);
 VAR_5->clone_cb = VAR_4;
 FUNC_0(&VAR_1, VAR_5, VAR_2);
}
