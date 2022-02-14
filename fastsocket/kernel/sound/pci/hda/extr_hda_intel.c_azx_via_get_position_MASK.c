
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct azx_dev {unsigned int period_bytes; unsigned int bufsize; scalar_t__ insufficient; int * posbuf; TYPE_1__* substream; } ;
struct azx {scalar_t__ remap_addr; } ;
struct TYPE_2__ {scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct azx_dev*,int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct azx *VAR_3,
      struct azx_dev *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_4->substream->stream == VAR_1) {

  return VAR_5;
 }





 VAR_9 = FUNC_1(*VAR_4->posbuf);
 VAR_9 %= VAR_4->period_bytes;




 VAR_11 = FUNC_2(VAR_3->remap_addr + VAR_2);

 if (VAR_4->insufficient) {

  if (VAR_5 <= VAR_11)
   return 0;

  VAR_4->insufficient = 0;
 }

 if (VAR_5 <= VAR_11)
  VAR_6 = VAR_4->bufsize + VAR_5 - VAR_11;
 else
  VAR_6 = VAR_5 - VAR_11;


 VAR_10 = VAR_6 % VAR_4->period_bytes;
 VAR_8 = VAR_5 % VAR_4->period_bytes;
 if (VAR_8 >= VAR_11)
  VAR_7 = VAR_5 - VAR_8;
 else if (VAR_9 >= VAR_10)
  VAR_7 = VAR_6 - VAR_10;
 else {
  VAR_7 = VAR_6 - VAR_10 + VAR_4->period_bytes;
  if (VAR_7 >= VAR_4->bufsize)
   VAR_7 = 0;
 }


 return VAR_7 + VAR_9;
}
