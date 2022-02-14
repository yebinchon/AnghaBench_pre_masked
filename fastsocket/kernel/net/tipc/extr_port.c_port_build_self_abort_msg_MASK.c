
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int ref; int connected; int phdr; } ;
struct port {scalar_t__ last_in_seqno; TYPE_1__ publ; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sk_buff* FUNC_1 (int ,int ,int ,int ,scalar_t__,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct port*) ;
 int FUNC_3 (struct port*) ;
 int VAR_2 ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct port *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(&VAR_3->publ.phdr);

 if (!VAR_3->publ.connected)
  return ((void*)0);
 if (VAR_5 < VAR_1)
  VAR_5++;
 return FUNC_1(VAR_3->publ.ref,
        VAR_2,
        FUNC_3(VAR_3),
        FUNC_2(VAR_3),
        VAR_5,
        VAR_0,
        VAR_4,
        VAR_3->last_in_seqno + 1,
        0);
}
