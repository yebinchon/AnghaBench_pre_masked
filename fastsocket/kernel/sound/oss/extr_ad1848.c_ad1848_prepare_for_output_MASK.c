
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int speed_bits; int format_bits; int channels; int speed; } ;
typedef TYPE_1__ ad1848_port_info ;
struct TYPE_10__ {scalar_t__ model; scalar_t__ timer_running; scalar_t__ xfer_count; int lock; int base; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_11__ {scalar_t__ portc; scalar_t__ devc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 unsigned char FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int,unsigned char) ;
 TYPE_3__** VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 unsigned char VAR_11, VAR_12, VAR_13 = 0;
 unsigned long VAR_14;
 ad1848_info *VAR_15 = (ad1848_info *) VAR_5[VAR_7]->devc;
 ad1848_port_info *VAR_16 = (ad1848_port_info *) VAR_5[VAR_7]->portc;

 FUNC_4(VAR_15);

 FUNC_8(&VAR_15->lock,VAR_14);
 VAR_11 = VAR_16->speed_bits | (VAR_16->format_bits << 5);

 if (VAR_16->channels > 1)
  VAR_11 |= 0x10;

 FUNC_2(VAR_15);

 if (VAR_15->model == VAR_0 || VAR_15->model == VAR_1)
 {
  VAR_11 &= 0xf0;

  FUNC_6(VAR_15, 22, (VAR_16->speed >> 8) & 0xff);
  FUNC_6(VAR_15, 23, VAR_16->speed & 0xff);
 }
 VAR_12 = FUNC_5(VAR_15, 8);

 if (VAR_15->model == VAR_2 || VAR_15->model >= VAR_3)
 {
  VAR_13 = FUNC_5(VAR_15, 16);
  FUNC_6(VAR_15, 16, VAR_13 | 0x30);
 }
 if (VAR_15->model == VAR_4)
  FUNC_6(VAR_15, 17, 0xc2);

 FUNC_6(VAR_15, 8, VAR_11);





 VAR_10 = 0;
 while (VAR_10 < 100 && FUNC_7(VAR_15->base) != 0x80)
  VAR_10++;
 VAR_10 = 0;
 while (VAR_10 < 10000 && FUNC_7(VAR_15->base) == 0x80)
  VAR_10++;

 if (VAR_15->model >= VAR_2)
  FUNC_6(VAR_15, 16, VAR_13 & ~0x30);

 FUNC_3(VAR_15);


 FUNC_9(&VAR_15->lock,VAR_14);
 VAR_15->xfer_count = 0;


 if (VAR_7 == VAR_6 && VAR_15->timer_running)
  if ((VAR_11 & 0x01) != (VAR_12 & 0x01))
  {
   FUNC_1(VAR_7);
  }

 FUNC_0(VAR_7);
 return 0;
}
