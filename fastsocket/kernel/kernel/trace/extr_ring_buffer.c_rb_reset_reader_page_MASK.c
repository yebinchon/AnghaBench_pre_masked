
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring_buffer_per_cpu {TYPE_2__* reader_page; int read_stamp; } ;
struct TYPE_4__ {scalar_t__ read; TYPE_1__* page; } ;
struct TYPE_3__ {int time_stamp; } ;



__attribute__((used)) static void FUNC_0(struct ring_buffer_per_cpu *VAR_0)
{
 VAR_0->read_stamp = VAR_0->reader_page->page->time_stamp;
 VAR_0->reader_page->read = 0;
}
