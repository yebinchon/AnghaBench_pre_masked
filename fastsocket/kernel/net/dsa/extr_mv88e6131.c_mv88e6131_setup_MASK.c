
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_priv_state {int stats_mutex; int smi_mutex; } ;
struct dsa_switch {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dsa_switch*) ;
 int FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct dsa_switch*) ;
 int FUNC_4 (struct dsa_switch*) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_0)
{
 struct mv88e6xxx_priv_state *VAR_1 = (void *)(VAR_0 + 1);
 int VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1->smi_mutex);
 FUNC_4(VAR_0);
 FUNC_0(&VAR_1->stats_mutex);

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;



 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_2 = 0; VAR_2 < 11; VAR_2++) {
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
