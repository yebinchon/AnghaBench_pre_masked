
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int skip; int entries; int max_entries; } ;
struct dma_debug_entry {TYPE_1__ stacktrace; int st_entries; } ;


 int VAR_0 ;
 struct dma_debug_entry* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct dma_debug_entry *FUNC_6(void)
{
 struct dma_debug_entry *VAR_4 = ((void*)0);
 unsigned long VAR_5;

 FUNC_4(&VAR_2, VAR_5);

 if (FUNC_1(&VAR_1)) {
  FUNC_2("DMA-API: debugging out of memory - disabling\n");
  VAR_3 = 1;
  goto out;
 }

 VAR_4 = FUNC_0();
out:
 FUNC_5(&VAR_2, VAR_5);

 return VAR_4;
}
