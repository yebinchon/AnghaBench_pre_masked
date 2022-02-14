
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int rentab; int strtab; } ;


 int FUNC_0 (int *,char const*,size_t,char const*,size_t,int) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(struct roff *VAR_0, const char *VAR_1, const char *VAR_2,
 int VAR_3)
{
 size_t VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 FUNC_0(&VAR_0->strtab, VAR_1, VAR_4, VAR_2,
     VAR_2 ? FUNC_1(VAR_2) : 0, VAR_3);
 FUNC_0(&VAR_0->rentab, VAR_1, VAR_4, ((void*)0), 0, 0);
}
