
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_identify_data {int interface_rev; int interface_id; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,int ,int,int ) ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sep_identify_data*,struct sbuf*) ;

void
FUNC_3(struct sep_identify_data *VAR_0, struct sbuf *VAR_1)
{

 FUNC_2(VAR_0, VAR_1);

 FUNC_1(VAR_1, " SEMB ");
 FUNC_0(VAR_1, VAR_0->interface_id, 6, 0);
 FUNC_1(VAR_1, " ");
 FUNC_0(VAR_1, VAR_0->interface_rev, 4, 0);
 FUNC_1(VAR_1, " device\n");
}
