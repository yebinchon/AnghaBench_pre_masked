
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmac_stream {TYPE_1__* dma; } ;
struct TYPE_2__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct pmac_stream*) ;

__attribute__((used)) static inline void FUNC_2(struct pmac_stream *VAR_4)
{
 FUNC_0(&VAR_4->dma->control, (VAR_2|VAR_3|VAR_0|VAR_1) << 16);
 FUNC_1(VAR_4);
}
