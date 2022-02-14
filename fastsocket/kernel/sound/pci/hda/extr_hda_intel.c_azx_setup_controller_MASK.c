
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_3__ {scalar_t__ addr; } ;
struct azx_dev {unsigned int stream_tag; unsigned int bufsize; TYPE_1__ bdl; scalar_t__ frags; scalar_t__ format_val; } ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct azx {scalar_t__* position_fix; TYPE_2__ posbuf; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 (struct azx*,int ) ;
 unsigned int FUNC_1 (struct azx_dev*,int ) ;
 int FUNC_2 (struct azx_dev*,int ,unsigned int) ;
 int FUNC_3 (struct azx_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct azx*) ;
 int FUNC_5 (struct azx*,struct azx_dev*) ;
 int FUNC_6 (struct azx*,int ,unsigned int) ;
 unsigned int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct azx *VAR_13, struct azx_dev *VAR_14)
{
 unsigned int VAR_15;

 FUNC_5(VAR_13, VAR_14);

 VAR_15 = FUNC_1(VAR_14, VAR_6);
 VAR_15 = (VAR_15 & ~VAR_7) |
  (VAR_14->stream_tag << VAR_8);
 if (!FUNC_4(VAR_13))
  VAR_15 |= VAR_9;
 FUNC_2(VAR_14, VAR_6, VAR_15);


 FUNC_2(VAR_14, VAR_5, VAR_14->bufsize);



 FUNC_3(VAR_14, VAR_10, VAR_14->format_val);


 FUNC_3(VAR_14, VAR_12, VAR_14->frags - 1);



 FUNC_2(VAR_14, VAR_3, (u32)VAR_14->bdl.addr);

 FUNC_2(VAR_14, VAR_4, FUNC_7(VAR_14->bdl.addr));


 if (VAR_13->position_fix[0] != VAR_2 ||
     VAR_13->position_fix[1] != VAR_2) {
  if (!(FUNC_0(VAR_13, VAR_0) & VAR_1))
   FUNC_6(VAR_13, VAR_0,
    (u32)VAR_13->posbuf.addr | VAR_1);
 }


 FUNC_2(VAR_14, VAR_6,
        FUNC_1(VAR_14, VAR_6) | VAR_11);

 return 0;
}
