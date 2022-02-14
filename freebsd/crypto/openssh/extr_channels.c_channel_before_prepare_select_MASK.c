
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh_channels {size_t channels_alloc; TYPE_1__** channels; } ;
struct ssh {struct ssh_channels* chanctxt; } ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ Channel ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ssh*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct ssh *VAR_1)
{
 struct ssh_channels *VAR_2 = VAR_1->chanctxt;
 Channel *VAR_3;
 u_int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = VAR_2->channels_alloc; VAR_4 < VAR_5; VAR_4++) {
  VAR_3 = VAR_2->channels[VAR_4];
  if (VAR_3 == ((void*)0))
   continue;
  if (VAR_3->type == VAR_0)
   FUNC_0(VAR_1, VAR_3);
 }
}
