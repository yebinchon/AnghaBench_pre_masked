
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_fixedpt {int fraction; int int_part; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_0,
       register const struct s_fixedpt *VAR_1)
{
 register int VAR_2;
 register int VAR_3;
 register double VAR_4;

 VAR_2 = FUNC_0(&VAR_1->int_part);
 VAR_3 = FUNC_0(&VAR_1->fraction);
 VAR_4 = VAR_3 / 65536.0;
 VAR_3 = (int)(VAR_4 * 1000000.0);
 FUNC_1((VAR_0, "%d.%06d", VAR_2, VAR_3));
}
