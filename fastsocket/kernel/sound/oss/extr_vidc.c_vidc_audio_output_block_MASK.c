
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {scalar_t__ raw_buf; scalar_t__ raw_buf_phys; } ;
struct TYPE_2__ {struct dma_buffparms* dmap_out; } ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, unsigned long VAR_4, int VAR_5, int VAR_6)
{
 struct dma_buffparms *VAR_7 = VAR_0[VAR_3]->dmap_out;
 unsigned long VAR_8;

 FUNC_1(VAR_8);
 VAR_2 = VAR_4 - (unsigned long)VAR_7->raw_buf_phys + (unsigned long)VAR_7->raw_buf;
 VAR_1 = VAR_5;
 FUNC_0(VAR_8);
}
