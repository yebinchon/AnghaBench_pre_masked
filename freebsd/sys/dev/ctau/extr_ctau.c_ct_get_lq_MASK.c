
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; scalar_t__ num; TYPE_1__* board; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_4__ {int port; } ;


 int FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_1 (int ) ;

int FUNC_2 (ct_chan_t *VAR_3)
{
 unsigned char VAR_4, VAR_5, VAR_6;
 static int VAR_7 [] = { 0, 95, 195, 285 };
 int VAR_8;

 if (! (VAR_3->type & VAR_2))
  return 0;
 VAR_4 = FUNC_1 (FUNC_0 (VAR_3->board->port));

 for (VAR_8=0; VAR_8<20; ++VAR_8)
  VAR_5 = FUNC_1 (FUNC_0 (VAR_3->board->port));
 for (VAR_8=0; VAR_8<20; ++VAR_8)
  VAR_6 = FUNC_1 (FUNC_0 (VAR_3->board->port));
 if (VAR_3->num) {
  VAR_4 >>= VAR_1;
  VAR_5 >>= VAR_1;
  VAR_6 >>= VAR_1;
 }
 VAR_4 &= VAR_0;
 VAR_5 &= VAR_0;
 VAR_6 &= VAR_0;
 if (VAR_4 <= VAR_5 && VAR_5 <= VAR_6) return VAR_7 [VAR_5];
 if (VAR_5 <= VAR_6 && VAR_6 <= VAR_4) return VAR_7 [VAR_6];
 if (VAR_6 <= VAR_4 && VAR_4 <= VAR_5) return VAR_7 [VAR_4];
 if (VAR_4 <= VAR_6 && VAR_6 <= VAR_5) return VAR_7 [VAR_6];
 if (VAR_6 <= VAR_5 && VAR_5 <= VAR_4) return VAR_7 [VAR_5];
                                 return VAR_7 [VAR_4];
}
