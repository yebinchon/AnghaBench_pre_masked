
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ mac_header; scalar_t__ tail; } ;
struct TYPE_6__ {scalar_t__ frag0_len; int * frag0; scalar_t__ data_offset; } ;
struct TYPE_5__ {TYPE_1__* frags; } ;
struct TYPE_4__ {int page_offset; scalar_t__ size; int page; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct sk_buff *VAR_0)
{
 FUNC_0(VAR_0)->data_offset = 0;
 FUNC_0(VAR_0)->frag0 = ((void*)0);
 FUNC_0(VAR_0)->frag0_len = 0;

 if (VAR_0->mac_header == VAR_0->tail &&
     !FUNC_1(FUNC_3(VAR_0)->frags[0].page)) {
  FUNC_0(VAR_0)->frag0 =
   FUNC_2(FUNC_3(VAR_0)->frags[0].page) +
   FUNC_3(VAR_0)->frags[0].page_offset;
  FUNC_0(VAR_0)->frag0_len = FUNC_3(VAR_0)->frags[0].size;
 }
}
