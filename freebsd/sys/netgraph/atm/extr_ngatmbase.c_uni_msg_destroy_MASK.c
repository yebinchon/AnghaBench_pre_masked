
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {int b_buf; } ;
struct ngatm_msg {int dummy; } ;


 int FUNC_0 (int *,struct ngatm_msg*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_4(struct uni_msg *VAR_4)
{
 struct ngatm_msg *VAR_5;

 VAR_5 = (struct ngatm_msg *)VAR_4;

 FUNC_1(VAR_4->b_buf, VAR_0);

 FUNC_2(&VAR_3);
 FUNC_0(&VAR_2, VAR_5, VAR_1);
 FUNC_3(&VAR_3);
}
