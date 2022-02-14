
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* xxx_p ;
struct mbuf {int dummy; } ;
struct XXX_hookinfo {int dlci; int channel; } ;
typedef int item_p ;
typedef scalar_t__ hook_p ;
struct TYPE_6__ {scalar_t__ hook; } ;
struct TYPE_7__ {TYPE_2__ downstream_hook; int packets_in; TYPE_1__* channel; int packets_out; } ;
struct TYPE_5__ {int dlci; scalar_t__ hook; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int,int ,scalar_t__,struct mbuf*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 TYPE_3__* FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_2, item_p VAR_3 )
{
 const xxx_p VAR_4 = FUNC_6(FUNC_4(VAR_2));
 int VAR_5 = -2;
 int VAR_6 = -2;
 int VAR_7;
 struct mbuf *VAR_8;

 FUNC_0(VAR_3, VAR_8);
 if (FUNC_5(VAR_2)) {
  VAR_6 = ((struct XXX_hookinfo *) FUNC_5(VAR_2))->dlci;
  VAR_5 = ((struct XXX_hookinfo *) FUNC_5(VAR_2))->channel;
  if (VAR_6 != -1) {






   FUNC_3(VAR_7, VAR_3,
    VAR_4->downstream_hook.hook, VAR_8);
   VAR_4->packets_out++;
  } else {

   VAR_6 = 1;

   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    if (VAR_4->channel[VAR_5].dlci == VAR_6)
     break;
   if (VAR_5 == VAR_1) {
    FUNC_1(VAR_3);
    FUNC_2(VAR_8);
    return (VAR_0);
   }
   FUNC_3(VAR_7, VAR_3,
    VAR_4->channel[VAR_5].hook, VAR_8);
   VAR_4->packets_in++;
  }
 } else {

  if (VAR_2 == VAR_4->downstream_hook.hook) {
   FUNC_1(VAR_3);
   FUNC_2(VAR_8);
  }
 }
 return 0;
}
