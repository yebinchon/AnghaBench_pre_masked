
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {struct t_switch**** sw; } ;
struct t_switch {int i; int j; int k; } ;
struct f_switch {int dummy; } ;


 struct t_switch* FUNC_0 (struct torus*,struct f_switch*) ;

__attribute__((used)) static
bool FUNC_1(struct torus *VAR_0,
       int VAR_1, int VAR_2, int VAR_3, struct f_switch *VAR_4)
{
 struct t_switch **VAR_5 = &VAR_0->sw[VAR_1][VAR_2][VAR_3];

 if (!*VAR_5)
  *VAR_5 = FUNC_0(VAR_0, VAR_4);

 if (*VAR_5) {
  (*VAR_5)->i = VAR_1;
  (*VAR_5)->j = VAR_2;
  (*VAR_5)->k = VAR_3;
 }
 return !!*VAR_5;
}
