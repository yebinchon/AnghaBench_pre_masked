
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session_conf {char* isc_target; char* isc_target_addr; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static bool
FUNC_1(unsigned int VAR_0, const struct iscsi_session_conf *VAR_1,
    unsigned int VAR_2, const struct iscsi_session_conf *VAR_3)
{

 if (VAR_2 != 0 && VAR_2 != VAR_0)
  return (0);
 if (VAR_3->isc_target[0] != '\0' &&
     FUNC_0(VAR_1->isc_target, VAR_3->isc_target) != 0)
  return (0);
 if (VAR_3->isc_target_addr[0] != '\0' &&
     FUNC_0(VAR_1->isc_target_addr, VAR_3->isc_target_addr) != 0)
  return (0);
 return (1);
}
