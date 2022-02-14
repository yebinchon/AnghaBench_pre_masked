
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; struct sk_buff* next; } ;
struct napi_struct {struct sk_buff* gro_list; } ;
typedef int gro_result_t ;
struct TYPE_4__ {int same_flow; scalar_t__ flush; } ;
struct TYPE_3__ {unsigned int hard_header_len; } ;


 unsigned int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 unsigned long FUNC_1 (int ,int ) ;
 int FUNC_2 (struct napi_struct*,struct sk_buff*) ;
 unsigned long FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static gro_result_t
FUNC_6(struct napi_struct *VAR_1, struct sk_buff *VAR_2)
{
 struct sk_buff *VAR_3;
 unsigned int VAR_4 = VAR_2->dev->hard_header_len;

 for (VAR_3 = VAR_1->gro_list; VAR_3; VAR_3 = VAR_3->next) {
  unsigned long VAR_5;

  VAR_5 = (unsigned long)VAR_3->dev ^ (unsigned long)VAR_2->dev;
  if (VAR_4 == VAR_0)
   VAR_5 |= FUNC_1(FUNC_5(VAR_3),
            FUNC_4(VAR_2));
  else if (!VAR_5)
   VAR_5 = FUNC_3(FUNC_5(VAR_3),
           FUNC_4(VAR_2),
           VAR_4);
  FUNC_0(VAR_3)->same_flow = !VAR_5;
  FUNC_0(VAR_3)->flush = 0;
 }

 return FUNC_2(VAR_1, VAR_2);
}
