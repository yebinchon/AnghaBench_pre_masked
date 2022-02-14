
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mac_header; scalar_t__ data; int dev; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static inline struct sk_buff *FUNC_4(struct sk_buff *VAR_4)
{
 if (FUNC_3(VAR_4->dev)->flags & VAR_2) {
  if (FUNC_1(VAR_4, FUNC_2(VAR_4)) < 0)
   VAR_4 = ((void*)0);
  if (VAR_4) {

   FUNC_0(VAR_4->data - VAR_0,
    VAR_4->data - VAR_1, 12);
   VAR_4->mac_header += VAR_3;
  }
 }

 return VAR_4;
}
