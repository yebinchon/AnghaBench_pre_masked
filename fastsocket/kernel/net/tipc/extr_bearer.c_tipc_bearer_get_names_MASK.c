
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct media {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct bearer {TYPE_1__ publ; struct media* media; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct media* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 struct bearer* VAR_5 ;
 int FUNC_4 (struct sk_buff*,int ,int ,scalar_t__) ;
 struct sk_buff* FUNC_5 (int) ;
 int VAR_6 ;

struct sk_buff *FUNC_6(void)
{
 struct sk_buff *VAR_7;
 struct media *VAR_8;
 struct bearer *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_5(VAR_0 * FUNC_0(VAR_1));
 if (!VAR_7)
  return ((void*)0);

 FUNC_1(&VAR_6);
 for (VAR_10 = 0, VAR_8 = VAR_4; VAR_10 < VAR_3; VAR_10++, VAR_8++) {
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   VAR_9 = &VAR_5[VAR_11];
   if (VAR_9->active && (VAR_9->media == VAR_8)) {
    FUNC_4(VAR_7, VAR_2,
          VAR_9->publ.name,
          FUNC_3(VAR_9->publ.name) + 1);
   }
  }
 }
 FUNC_2(&VAR_6);
 return VAR_7;
}
