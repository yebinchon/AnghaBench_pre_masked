
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memory_type {TYPE_2__* mt_percpu_cache; TYPE_1__* mt_percpu_alloc; scalar_t__ mt_kegfree; scalar_t__ mt_zonefree; scalar_t__ mt_sleeps; scalar_t__ mt_failures; scalar_t__ mt_free; scalar_t__ mt_count; scalar_t__ mt_bytes; scalar_t__ mt_numfrees; scalar_t__ mt_numallocs; scalar_t__ mt_memfreed; scalar_t__ mt_memalloced; scalar_t__ mt_size; scalar_t__ mt_sizemask; scalar_t__ mt_byteslimit; scalar_t__ mt_countlimit; } ;
struct TYPE_4__ {scalar_t__ mtp_free; } ;
struct TYPE_3__ {scalar_t__ mtp_sizemask; scalar_t__ mtp_numfrees; scalar_t__ mtp_numallocs; scalar_t__ mtp_memfreed; scalar_t__ mtp_memalloced; } ;



void
FUNC_0(struct memory_type *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_0->mt_countlimit = 0;
 VAR_0->mt_byteslimit = 0;
 VAR_0->mt_sizemask = 0;
 VAR_0->mt_size = 0;

 VAR_0->mt_memalloced = 0;
 VAR_0->mt_memfreed = 0;
 VAR_0->mt_numallocs = 0;
 VAR_0->mt_numfrees = 0;
 VAR_0->mt_bytes = 0;
 VAR_0->mt_count = 0;
 VAR_0->mt_free = 0;
 VAR_0->mt_failures = 0;
 VAR_0->mt_sleeps = 0;

 VAR_0->mt_zonefree = 0;
 VAR_0->mt_kegfree = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_0->mt_percpu_alloc[VAR_2].mtp_memalloced = 0;
  VAR_0->mt_percpu_alloc[VAR_2].mtp_memfreed = 0;
  VAR_0->mt_percpu_alloc[VAR_2].mtp_numallocs = 0;
  VAR_0->mt_percpu_alloc[VAR_2].mtp_numfrees = 0;
  VAR_0->mt_percpu_alloc[VAR_2].mtp_sizemask = 0;
  VAR_0->mt_percpu_cache[VAR_2].mtp_free = 0;
 }
}
