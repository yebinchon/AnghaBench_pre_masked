
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {struct g_geom* geom; } ;
struct g_geom {int consumer; } ;
struct g_consumer {scalar_t__ acr; scalar_t__ acw; int ace; } ;


 struct g_consumer* FUNC_0 (int *) ;
 int FUNC_1 (struct g_consumer*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct g_provider *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct g_geom *VAR_4;
 struct g_consumer *VAR_5;

 VAR_4 = VAR_0->geom;
 VAR_5 = FUNC_0(&VAR_4->consumer);
 if (VAR_5->acr == 0 && VAR_5->acw == 0 && VAR_5->ace == 0) {
  VAR_3++;
  VAR_1++;
 }

 if ((VAR_5->acr + VAR_1) == 0 && (VAR_5->acw + VAR_2) == 0 && (VAR_5->ace + VAR_3) == 1) {
  VAR_3--;
  VAR_1--;
 }
 return (FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3));
}
