
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; TYPE_1__* dmap_out; } ;
struct TYPE_3__ {int dma; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,unsigned long,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(int VAR_7, unsigned long VAR_8, int VAR_9,
        int VAR_10)
{
 unsigned long VAR_11;
 int VAR_12;

 FUNC_0(FUNC_3("pas2_pcm.c: static void pas_audio_start_input(char *buf = %P, int count = %X)\n", VAR_8, VAR_9));

 VAR_12 = VAR_9;
 if (VAR_2[VAR_7]->dmap_out->dma > 3)
  VAR_12 >>= 1;

 if (VAR_2[VAR_3]->flags & VAR_0 &&
     VAR_10 &&
     VAR_12 == VAR_5)
  return;

 FUNC_4(&VAR_4, VAR_11);



 if (VAR_2[VAR_7]->dmap_out->dma > 3)
  VAR_9 >>= 1;

 if (VAR_9 != VAR_5)
 {
  FUNC_2(FUNC_1(0x0B8A) & ~0x80, 0x0B8A);
  FUNC_2(0x40 | 0x30 | 0x04, 0x138B);
  FUNC_2(VAR_9 & 0xff, 0x1389);
  FUNC_2((VAR_9 >> 8) & 0xff, 0x1389);
  FUNC_2(FUNC_1(0x0B8A) | 0x80, 0x0B8A);

  VAR_5 = VAR_9;
 }
 FUNC_2(FUNC_1(0x0B8A) | 0x80 | 0x40, 0x0B8A);




 VAR_6 = VAR_1;

 FUNC_5(&VAR_4, VAR_11);
}
