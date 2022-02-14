
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {int capturing; scalar_t__ playing; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int addr; } ;
struct snd_harmony {int lock; TYPE_3__ gdma; TYPE_4__ st; TYPE_2__ cbuf; TYPE_1__ sdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct snd_harmony*) ;
 int FUNC_1 (struct snd_harmony*) ;
 int FUNC_2 (struct snd_harmony*) ;
 int FUNC_3 (struct snd_harmony*) ;
 int FUNC_4 (struct snd_harmony*,int ,int ) ;
 int FUNC_5 () ;
 struct snd_harmony* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct snd_pcm_substream *VAR_4, int VAR_5)
{
        struct snd_harmony *VAR_6 = FUNC_6(VAR_4);

 if (VAR_6->st.playing)
  return -VAR_0;

 FUNC_7(&VAR_6->lock);
        switch (VAR_5) {
        case 130:
  VAR_6->st.capturing = 1;
                FUNC_4(VAR_6, VAR_2, VAR_6->sdma.addr);
                FUNC_4(VAR_6, VAR_3, VAR_6->cbuf.addr);
  FUNC_3(VAR_6);
                FUNC_1(VAR_6);
  break;
        case 129:
  VAR_6->st.capturing = 0;
  FUNC_2(VAR_6);
  FUNC_4(VAR_6, VAR_3, VAR_6->gdma.addr);
  FUNC_0(VAR_6);
  break;
        case 132:
        case 131:
        case 128:
 default:
  FUNC_8(&VAR_6->lock);
  FUNC_5();
                return -VAR_1;
        }
 FUNC_8(&VAR_6->lock);

        return 0;
}
