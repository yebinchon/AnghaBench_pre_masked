
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trans ;
struct pfr_buffer {int dummy; } ;
struct pfioc_trans_e {int rs_num; int anchor; } ;


 int FUNC_0 (struct pfioc_trans_e*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct pfr_buffer*,struct pfioc_trans_e*) ;
 int FUNC_3 (int ,char const*,int) ;

int
FUNC_4(struct pfr_buffer *VAR_0, int VAR_1, const char *VAR_2)
{
 struct pfioc_trans_e VAR_3;

 FUNC_0(&VAR_3, sizeof(VAR_3));
 VAR_3.rs_num = VAR_1;
 if (FUNC_3(VAR_3.anchor, VAR_2,
     sizeof(VAR_3.anchor)) >= sizeof(VAR_3.anchor))
  FUNC_1(1, "pfctl_add_trans: strlcpy");

 return FUNC_2(VAR_0, &VAR_3);
}
