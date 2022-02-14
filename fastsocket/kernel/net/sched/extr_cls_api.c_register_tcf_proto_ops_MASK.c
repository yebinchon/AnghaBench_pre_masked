
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto_ops {struct tcf_proto_ops* next; int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct tcf_proto_ops* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct tcf_proto_ops *VAR_3)
{
 struct tcf_proto_ops *VAR_4, **VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_1(&VAR_1);
 for (VAR_5 = &VAR_2; (VAR_4 = *VAR_5) != ((void*)0); VAR_5 = &VAR_4->next)
  if (!FUNC_0(VAR_3->kind, VAR_4->kind))
   goto out;

 VAR_3->next = ((void*)0);
 *VAR_5 = VAR_3;
 VAR_6 = 0;
out:
 FUNC_2(&VAR_1);
 return VAR_6;
}
