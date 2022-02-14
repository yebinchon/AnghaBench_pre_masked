
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uidinfo {int ui_sbsize; } ;
typedef scalar_t__ rlim_t ;


 int FUNC_0 (struct uidinfo*,int *,int,scalar_t__,char*) ;

int
FUNC_1(struct uidinfo *VAR_0, u_int *VAR_1, u_int VAR_2, rlim_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_2 - *VAR_1;
 if (VAR_4 > 0 && VAR_3 == 0) {
  VAR_5 = 0;
 } else {
  VAR_5 = FUNC_0(VAR_0, &VAR_0->ui_sbsize, VAR_4, VAR_3, "sbsize");
  if (VAR_5 != 0)
   *VAR_1 = VAR_2;
 }
 return (VAR_5);
}
