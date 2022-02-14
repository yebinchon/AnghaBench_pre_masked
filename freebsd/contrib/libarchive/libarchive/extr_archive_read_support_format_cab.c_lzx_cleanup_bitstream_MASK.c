
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lzx_stream {TYPE_2__* ds; } ;
struct TYPE_3__ {scalar_t__ have_odd; scalar_t__ cache_avail; } ;
struct TYPE_4__ {TYPE_1__ br; } ;



__attribute__((used)) static void
FUNC_0(struct lzx_stream *VAR_0)
{
 VAR_0->ds->br.cache_avail = 0;
 VAR_0->ds->br.have_odd = 0;
}
