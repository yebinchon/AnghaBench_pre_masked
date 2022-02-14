
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bah; int bal; int len; int head; int tail; } ;
struct TYPE_4__ {int bah; int bal; int len; int head; int tail; } ;
struct TYPE_6__ {TYPE_2__ arq; TYPE_1__ asq; } ;
struct i40e_hw {TYPE_3__ aq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (struct i40e_hw*) ;

__attribute__((used)) static void FUNC_1(struct i40e_hw *VAR_20)
{

 if (FUNC_0(VAR_20)) {
  VAR_20->aq.asq.tail = VAR_19;
  VAR_20->aq.asq.head = VAR_17;
  VAR_20->aq.asq.len = VAR_18;
  VAR_20->aq.asq.bal = VAR_16;
  VAR_20->aq.asq.bah = VAR_15;
  VAR_20->aq.arq.tail = VAR_14;
  VAR_20->aq.arq.head = VAR_12;
  VAR_20->aq.arq.len = VAR_13;
  VAR_20->aq.arq.bal = VAR_11;
  VAR_20->aq.arq.bah = VAR_10;
 } else {
  VAR_20->aq.asq.tail = VAR_9;
  VAR_20->aq.asq.head = VAR_7;
  VAR_20->aq.asq.len = VAR_8;
  VAR_20->aq.asq.bal = VAR_6;
  VAR_20->aq.asq.bah = VAR_5;
  VAR_20->aq.arq.tail = VAR_4;
  VAR_20->aq.arq.head = VAR_2;
  VAR_20->aq.arq.len = VAR_3;
  VAR_20->aq.arq.bal = VAR_1;
  VAR_20->aq.arq.bah = VAR_0;
 }
}
