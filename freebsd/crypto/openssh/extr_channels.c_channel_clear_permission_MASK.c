
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ssh {int dummy; } ;
struct permission {int dummy; } ;


 int FUNC_0 (struct ssh*,int,int,struct permission***,scalar_t__**) ;
 struct permission* FUNC_1 (struct permission*,scalar_t__,int ,int) ;

void
FUNC_2(struct ssh *VAR_0, int VAR_1, int VAR_2)
{
 struct permission **VAR_3;
 u_int *VAR_4;

 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3, &VAR_4);
 *VAR_3 = FUNC_1(*VAR_3, *VAR_4, 0, sizeof(**VAR_3));
 *VAR_4 = 0;
}
