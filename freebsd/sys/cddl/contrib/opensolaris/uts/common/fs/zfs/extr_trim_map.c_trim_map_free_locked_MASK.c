
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ io_offset; scalar_t__ io_size; } ;
typedef TYPE_1__ zio_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int tm_inflight_writes; int tm_lock; } ;
typedef TYPE_2__ trim_map_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(trim_map_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
 zio_t VAR_4, *VAR_5;

 FUNC_0(FUNC_1(&VAR_0->tm_lock));

 VAR_4.io_offset = VAR_1;
 VAR_4.io_size = VAR_2 - VAR_1;

 VAR_5 = FUNC_2(&VAR_0->tm_inflight_writes, &VAR_4, ((void*)0));
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
  return;
 }
 if (VAR_1 < VAR_5->io_offset)
  FUNC_4(VAR_0, VAR_1, VAR_5->io_offset, VAR_3);
 if (VAR_5->io_offset + VAR_5->io_size < VAR_2)
  FUNC_4(VAR_0, VAR_5->io_offset + VAR_5->io_size, VAR_2, VAR_3);
}
