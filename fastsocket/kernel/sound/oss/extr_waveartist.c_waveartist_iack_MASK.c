
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int io_base; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;
typedef TYPE_2__ wavnc_info ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static inline void
FUNC_2(wavnc_info *VAR_2)
{
 unsigned int VAR_3 = VAR_2->hw.io_base + VAR_0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3) & ~VAR_1;

 FUNC_1(VAR_4 | VAR_1, VAR_3);
 FUNC_1(VAR_4, VAR_3);
}
