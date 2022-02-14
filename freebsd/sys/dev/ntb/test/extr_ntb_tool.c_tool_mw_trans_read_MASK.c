
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_mw {long long widx; long long mm_base; long long size; long long xlat_align; long long xlat_align_size; long long phys_size; scalar_t__ dma_base; int pidx; TYPE_1__* tc; } ;
struct sysctl_req {int dummy; } ;
struct sbuf {int s_error; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 struct sbuf* FUNC_3 (int *,int *,int,struct sysctl_req*) ;
 int FUNC_4 (struct sbuf*,char*,long long,...) ;

__attribute__((used)) static int
FUNC_5(struct tool_mw *VAR_0, struct sysctl_req *VAR_1)
{
 ssize_t VAR_2 = 512;
 struct sbuf *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_3(((void*)0), ((void*)0), VAR_2, VAR_1);
 if (VAR_3 == ((void*)0)) {
  VAR_4 = VAR_3->s_error;
  return (VAR_4);
 }

 FUNC_4(VAR_3, "\nInbound MW     \t%d\n", VAR_0->widx);
 FUNC_4(VAR_3, "Port           \t%d (%d)\n",
     FUNC_0(VAR_0->tc->dev, VAR_0->pidx), VAR_0->pidx);
 FUNC_4(VAR_3, "Window Address \t%p\n", VAR_0->mm_base);
 FUNC_4(VAR_3, "DMA Address    \t0x%016llx\n", (long long)VAR_0->dma_base);
 FUNC_4(VAR_3, "Window Size    \t0x%016zx[p]\n", VAR_0->size);
 FUNC_4(VAR_3, "Alignment      \t0x%016zx[p]\n", VAR_0->xlat_align);
 FUNC_4(VAR_3, "Size Alignment \t0x%016zx[p]\n",
     VAR_0->xlat_align_size);
 FUNC_4(VAR_3, "Size Max       \t0x%016zx[p]\n", VAR_0->phys_size);

 VAR_4 = FUNC_2(VAR_3);
 FUNC_1(VAR_3);

 return (VAR_4);
}
