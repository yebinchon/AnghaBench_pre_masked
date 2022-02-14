
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {int flags; int lasterr; int nm_totalsize; TYPE_1__* pools; } ;
struct TYPE_2__ {int memtotal; int objfree; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_mem_d*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static int
FUNC_4(struct netmap_mem_d *VAR_6)
{
 int VAR_7;
 if (VAR_6->flags & VAR_2)
  return 0;
 VAR_6->lasterr = 0;
 VAR_6->nm_totalsize = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6->lasterr = FUNC_0(&VAR_6->pools[VAR_7]);
  if (VAR_6->lasterr)
   goto error;
  VAR_6->nm_totalsize += VAR_6->pools[VAR_7].memtotal;
 }
 VAR_6->lasterr = FUNC_1(VAR_6);
 if (VAR_6->lasterr)
  goto error;

 VAR_6->flags |= VAR_2;

 if (VAR_5)
  FUNC_3("interfaces %zd KB, rings %zd KB, buffers %zd MB",
      VAR_6->pools[VAR_1].memtotal >> 10,
      VAR_6->pools[VAR_4].memtotal >> 10,
      VAR_6->pools[VAR_0].memtotal >> 20);

 if (VAR_5)
  FUNC_3("Free buffers: %d", VAR_6->pools[VAR_0].objfree);


 return 0;
error:
 FUNC_2(VAR_6);
 return VAR_6->lasterr;
}
