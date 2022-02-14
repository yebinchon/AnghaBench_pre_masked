
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmac_stream {TYPE_1__* dma; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct pmac_stream *VAR_1)
{
 int VAR_2 = 50000;
 while ((FUNC_0(&VAR_1->dma->status) & VAR_0) && VAR_2-- > 0)
  FUNC_1(1);
}
