
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_aliasreq {scalar_t__ ifra_vhid; } ;
struct in6_aliasreq {scalar_t__ ifra_vhid; } ;
struct afswtch {int af_af; scalar_t__ af_name; scalar_t__ af_addreq; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_3, int VAR_4, int VAR_5, const struct afswtch *VAR_6)
{

 VAR_1 = FUNC_0(VAR_3);

 if (VAR_1 <= 0 || VAR_1 > VAR_0)
  FUNC_2(1, "vhid must be greater than 0 and less than %u",
      VAR_0);

 switch (VAR_6->af_af) {
 default:
  FUNC_2(1, "%s doesn't support carp(4)", VAR_6->af_name);
 }

 FUNC_1(VAR_2, ((void*)0));
}
