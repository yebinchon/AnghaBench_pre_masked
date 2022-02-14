
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parsed_partitions {int limit; int name; TYPE_1__* parts; } ;
typedef void* sector_t ;
struct TYPE_2__ {void* size; void* from; } ;


 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct parsed_partitions *VAR_0, int VAR_1, sector_t VAR_2, sector_t VAR_3)
{
 if (VAR_1 < VAR_0->limit) {
  VAR_0->parts[VAR_1].from = VAR_2;
  VAR_0->parts[VAR_1].size = VAR_3;
  FUNC_0(" %s%d", VAR_0->name, VAR_1);
 }
}
