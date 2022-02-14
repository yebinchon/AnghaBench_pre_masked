
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_domain {int id; int ptp_level; scalar_t__ ptp; } ;


 int FUNC_0 (struct amdvi_domain*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct amdvi_domain*,int ,int ) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct amdvi_domain*,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
 struct amdvi_domain *VAR_5;

 VAR_5 = (struct amdvi_domain *)VAR_4;
 FUNC_0(VAR_5, ("domain is NULL"));



 if (VAR_5->ptp)
  FUNC_3(VAR_5->ptp, VAR_5->ptp_level);

 FUNC_2(VAR_5->id, 0);
 FUNC_1(&VAR_2, VAR_5, VAR_1, VAR_3);
 FUNC_4(VAR_5, VAR_0);
}
