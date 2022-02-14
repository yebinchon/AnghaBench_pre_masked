
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct call {int cstate; int mine; int cref; TYPE_2__* uni; } ;
typedef enum call_state { ____Placeholder_call_state } call_state ;
struct TYPE_4__ {scalar_t__ proto; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,int ,int,char*,int ,int ,int ,int ) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static __inline void
FUNC_2(struct call *VAR_9, enum call_state VAR_10)
{
 FUNC_0(VAR_10 == VAR_2 ||
     (VAR_9->uni->proto == VAR_6 &&
      (VAR_10 >= VAR_3 && VAR_10 <= VAR_4)) ||
     (VAR_9->uni->proto == VAR_5 &&
      (VAR_10 >= VAR_0 && VAR_10 <= VAR_1)),
     ("setting wrong callstate for proto %u: %u", VAR_9->uni->proto, VAR_10));

 if (VAR_9->cstate != VAR_10) {
  FUNC_1(VAR_9->uni, VAR_7, 1, "call %d/%d %s -> %s",
      VAR_9->cref, VAR_9->mine, VAR_8[VAR_9->cstate].name,
      VAR_8[VAR_10].name);
  VAR_9->cstate = VAR_10;
 }
}
