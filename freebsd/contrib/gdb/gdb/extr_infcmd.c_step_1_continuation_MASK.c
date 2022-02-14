
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int integer; } ;
struct continuation_arg {TYPE_5__* next; TYPE_1__ data; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_10__ {TYPE_4__* next; TYPE_2__ data; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_9__ {TYPE_3__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (struct continuation_arg *VAR_2)
{
  int VAR_3;
  int VAR_4;
  int VAR_5;

  VAR_4 = VAR_2->data.integer;
  VAR_5 = VAR_2->next->data.integer;
  VAR_3 = VAR_2->next->next->data.integer;

  if (VAR_1)
    FUNC_1 (VAR_4, VAR_5, VAR_3 - 1);
  else
    if (!VAR_5 || VAR_4)
      FUNC_0 (VAR_0);
}
