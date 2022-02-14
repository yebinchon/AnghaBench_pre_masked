
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {TYPE_1__* end; } ;
struct fabric {unsigned int link_cnt; struct link** link; } ;
typedef scalar_t__ guid_t ;
struct TYPE_2__ {scalar_t__ n_id; int port; } ;



__attribute__((used)) static
struct link *FUNC_0(struct fabric *VAR_0,
    guid_t VAR_1, int VAR_2, guid_t VAR_3, int VAR_4)
{
 unsigned VAR_5;
 struct link *VAR_6;

 if (VAR_0->link) {
  for (VAR_5 = 0; VAR_5 < VAR_0->link_cnt; VAR_5++) {
   VAR_6 = VAR_0->link[VAR_5];
   if ((VAR_6->end[0].n_id == VAR_1 &&
        VAR_6->end[0].port == VAR_2 &&
        VAR_6->end[1].n_id == VAR_3 &&
        VAR_6->end[1].port == VAR_4) ||
       (VAR_6->end[0].n_id == VAR_3 &&
        VAR_6->end[0].port == VAR_4 &&
        VAR_6->end[1].n_id == VAR_1 &&
        VAR_6->end[1].port == VAR_2))
    return VAR_6;
  }
 }
 return ((void*)0);
}
