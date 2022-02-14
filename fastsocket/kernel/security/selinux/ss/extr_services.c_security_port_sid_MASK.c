
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ protocol; scalar_t__ low_port; scalar_t__ high_port; } ;
struct TYPE_5__ {TYPE_1__ port; } ;
struct ocontext {scalar_t__* sid; int * context; struct ocontext* next; TYPE_2__ u; } ;
struct TYPE_6__ {struct ocontext** ocontexts; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,scalar_t__*) ;

int FUNC_3(u8 VAR_5, u16 VAR_6, u32 *VAR_7)
{
 struct ocontext *VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_2);

 VAR_8 = VAR_3.ocontexts[VAR_0];
 while (VAR_8) {
  if (VAR_8->u.port.protocol == VAR_5 &&
      VAR_8->u.port.low_port <= VAR_6 &&
      VAR_8->u.port.high_port >= VAR_6)
   break;
  VAR_8 = VAR_8->next;
 }

 if (VAR_8) {
  if (!VAR_8->sid[0]) {
   VAR_9 = FUNC_2(&VAR_4,
         &VAR_8->context[0],
         &VAR_8->sid[0]);
   if (VAR_9)
    goto out;
  }
  *VAR_7 = VAR_8->sid[0];
 } else {
  *VAR_7 = VAR_1;
 }

out:
 FUNC_1(&VAR_2);
 return VAR_9;
}
