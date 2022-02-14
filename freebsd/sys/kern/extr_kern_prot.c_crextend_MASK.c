
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_agroups; scalar_t__ cr_groups; scalar_t__ cr_smallgroups; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 int FUNC_2 (int,int) ;

void
FUNC_3(struct ucred *VAR_5, int VAR_6)
{
 int VAR_7;


 if (VAR_6 <= VAR_5->cr_agroups)
  return;
 if ( VAR_6 < VAR_4 / sizeof(gid_t) ) {
  if (VAR_5->cr_agroups == 0)
   VAR_7 = VAR_0 / sizeof(gid_t);
  else
   VAR_7 = VAR_5->cr_agroups * 2;

  while (VAR_7 < VAR_6)
   VAR_7 *= 2;
 } else
  VAR_7 = FUNC_2(VAR_6, VAR_4 / sizeof(gid_t));


 if (VAR_5->cr_groups != VAR_5->cr_smallgroups)
  FUNC_0(VAR_5->cr_groups, VAR_1);

 VAR_5->cr_groups = FUNC_1(VAR_7 * sizeof(gid_t), VAR_1, VAR_2 | VAR_3);
 VAR_5->cr_agroups = VAR_7;
}
