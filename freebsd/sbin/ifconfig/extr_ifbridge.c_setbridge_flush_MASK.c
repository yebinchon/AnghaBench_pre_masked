
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsflags; } ;
struct afswtch {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbreq*,int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ifbreq*,int ,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 struct ifbreq VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ifbr_ifsflags = VAR_1;
 if (FUNC_0(VAR_4, VAR_0, &VAR_6, sizeof(VAR_6), 1) < 0)
  FUNC_1(1, "BRDGFLUSH");
}
