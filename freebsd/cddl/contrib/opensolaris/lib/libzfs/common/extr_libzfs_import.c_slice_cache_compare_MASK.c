
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* rn_name; } ;
typedef TYPE_1__ rdsk_node_t ;


 int FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const char *VAR_2 = ((rdsk_node_t *)VAR_0)->rn_name;
 const char *VAR_3 = ((rdsk_node_t *)VAR_1)->rn_name;
 char *VAR_4, *VAR_5;
 int VAR_6;





 VAR_4 = FUNC_1(VAR_2, "s0");
 VAR_5 = FUNC_1(VAR_3, "s0");
 if (VAR_4 && !VAR_5) {
  return (-1);
 }
 if (!VAR_4 && VAR_5) {
  return (1);
 }
 VAR_4 = FUNC_1(VAR_2, "s2");
 VAR_5 = FUNC_1(VAR_3, "s2");
 if (VAR_4 && !VAR_5) {
  return (-1);
 }
 if (!VAR_4 && VAR_5) {
  return (1);
 }

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (VAR_6 == 0)
  return (0);
 return (VAR_6 > 0 ? 1 : -1);
}
