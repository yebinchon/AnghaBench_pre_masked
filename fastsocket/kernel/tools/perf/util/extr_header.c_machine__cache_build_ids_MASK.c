
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int user_dsos; int kernel_dsos; } ;


 int FUNC_0 (int *,char const*) ;

__attribute__((used)) static int FUNC_1(struct machine *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_0(&VAR_0->kernel_dsos, VAR_1);
 VAR_2 |= FUNC_0(&VAR_0->user_dsos, VAR_1);
 return VAR_2;
}
