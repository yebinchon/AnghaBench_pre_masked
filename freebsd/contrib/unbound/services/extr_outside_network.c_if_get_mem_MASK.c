
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_if {int avail_total; int maxout; int inuse; TYPE_1__** out; } ;
struct port_comm {int dummy; } ;
struct TYPE_2__ {int cp; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static size_t
FUNC_1(struct port_if* VAR_0)
{
 size_t VAR_1;
 int VAR_2;
 VAR_1 = sizeof(*VAR_0) + sizeof(int)*VAR_0->avail_total +
  sizeof(struct port_comm*)*VAR_0->maxout;
 for(VAR_2=0; VAR_2<VAR_0->inuse; VAR_2++)
  VAR_1 += sizeof(*VAR_0->out[VAR_2]) +
   FUNC_0(VAR_0->out[VAR_2]->cp);
 return VAR_1;
}
