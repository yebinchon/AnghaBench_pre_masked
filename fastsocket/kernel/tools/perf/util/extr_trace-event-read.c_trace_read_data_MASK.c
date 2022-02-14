
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent_record {int dummy; } ;
struct pevent {int dummy; } ;
struct TYPE_2__ {int * next; } ;


 TYPE_1__* VAR_0 ;
 struct pevent_record* FUNC_0 (struct pevent*,int) ;

struct pevent_record *FUNC_1(struct pevent *VAR_1, int VAR_2)
{
 struct pevent_record *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_0[VAR_2].next = ((void*)0);

 return VAR_3;
}
