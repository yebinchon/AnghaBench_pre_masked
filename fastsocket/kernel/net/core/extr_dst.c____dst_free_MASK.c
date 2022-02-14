
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {int obsolete; int output; int input; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct dst_entry * VAR_2)
{



 if (VAR_2->dev == ((void*)0) || !(VAR_2->dev->flags&VAR_0)) {
  VAR_2->input = VAR_2->output = VAR_1;
 }
 VAR_2->obsolete = 2;
}
