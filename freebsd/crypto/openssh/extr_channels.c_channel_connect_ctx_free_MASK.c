
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct channel_connect {TYPE_1__* aitop; TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ ai_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct channel_connect*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct channel_connect *VAR_1)
{
 FUNC_0(VAR_1->host);
 if (VAR_1->aitop) {
  if (VAR_1->aitop->ai_family == VAR_0)
   FUNC_0(VAR_1->aitop);
  else
   FUNC_1(VAR_1->aitop);
 }
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
}
