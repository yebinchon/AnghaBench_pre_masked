
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int phdr; } ;
struct port {int user_port; TYPE_1__ publ; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct iovec const*,unsigned int,int ,int,struct sk_buff**) ;
 int FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct port *VAR_1, unsigned int VAR_2,
         struct iovec const *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_1->publ.phdr, VAR_3, VAR_2,
   VAR_0, !VAR_1->user_port, &VAR_4);
 if (FUNC_0(VAR_4))
  FUNC_2(VAR_4);
 return VAR_5;
}
