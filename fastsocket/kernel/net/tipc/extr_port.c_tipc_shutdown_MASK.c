
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int phdr; scalar_t__ connected; } ;
struct port {TYPE_1__ publ; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sk_buff* FUNC_1 (int ,int ,scalar_t__,int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_2 (struct port*) ;
 int FUNC_3 (struct port*) ;
 int FUNC_4 (struct port*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;
 int VAR_4 ;
 struct port* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct port*) ;

int FUNC_9(u32 VAR_5)
{
 struct port *VAR_6;
 struct sk_buff *VAR_7 = ((void*)0);

 VAR_6 = FUNC_7(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_6->publ.connected) {
  u32 VAR_8 = FUNC_0(&VAR_6->publ.phdr);
  if (VAR_8 < VAR_3)
   VAR_8++;
  VAR_7 = FUNC_1(FUNC_4(VAR_6),
        FUNC_3(VAR_6),
        VAR_5,
        VAR_4,
        VAR_8,
        VAR_1,
        VAR_2,
        FUNC_2(VAR_6),
        0);
 }
 FUNC_8(VAR_6);
 FUNC_6(VAR_7);
 return FUNC_5(VAR_5);
}
