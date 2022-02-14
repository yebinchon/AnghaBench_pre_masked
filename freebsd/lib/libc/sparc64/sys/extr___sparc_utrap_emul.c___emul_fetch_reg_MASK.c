
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct utrapframe {scalar_t__* uf_out; scalar_t__* uf_global; } ;
struct frame {scalar_t__* fr_local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

u_long
FUNC_0(struct utrapframe *VAR_4, int VAR_5)
{
 struct frame *VAR_6;

 if (VAR_5 == VAR_0)
  return (0);
 else if (VAR_5 < VAR_2)
  return (VAR_4->uf_global[VAR_5]);
 else if (VAR_5 < VAR_1)
  return (VAR_4->uf_out[VAR_5 - VAR_2]);
 else {




  VAR_6 = (struct frame *)(VAR_4->uf_out[6] + VAR_3);
  return (VAR_6->fr_local[VAR_5 - VAR_1]);
 }
}
