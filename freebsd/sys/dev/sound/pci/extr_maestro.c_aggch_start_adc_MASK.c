
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int16_t ;
typedef int u_int ;
struct agg_rchinfo {int speed; int stereo; int srcphys; int base; int phys; int buflen; TYPE_1__* parent; scalar_t__ hwptr; } ;
typedef int bus_addr_t ;
struct TYPE_9__ {int bufsz; int active; int playchns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_14 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct agg_rchinfo *VAR_15)
{
 bus_addr_t VAR_16, VAR_17;
 u_int16_t VAR_18, VAR_19;
 u_int VAR_20;
 int VAR_21;


 VAR_20 = ((VAR_15->speed << 16) + 24000) / 48000;


 if (VAR_20 == 0x10000)
  VAR_20--;

 if (VAR_15->stereo) {
  VAR_16 = (VAR_15->srcphys - VAR_15->base) >> 1;
  VAR_17 = (VAR_15->srcphys + VAR_15->parent->bufsz/2 - VAR_15->base) >> 1;
  VAR_18 = (VAR_15->srcphys - 16) & VAR_11;
  VAR_19 = (VAR_15->base - 16) & VAR_11;
  VAR_21 = VAR_10 - VAR_9;
 } else {
  VAR_16 = (VAR_15->phys - VAR_15->base) >> 1;
  VAR_17 = (VAR_15->srcphys - VAR_15->base) >> 1;
  VAR_18 = (VAR_15->phys - 16) & VAR_11;
  VAR_19 = (VAR_15->base - 16) & VAR_11;
  VAR_21 = 0;
 }

 FUNC_0(VAR_15->parent);

 VAR_15->hwptr = 0;
 FUNC_1(VAR_15->parent, VAR_14);


 FUNC_7(VAR_15->parent, 0, VAR_18 | VAR_12);
 FUNC_7(VAR_15->parent, 1, VAR_18 | VAR_12);
 FUNC_7(VAR_15->parent, 2, VAR_19 | VAR_12);
 FUNC_7(VAR_15->parent, 3, VAR_19 | VAR_12);



 FUNC_3(VAR_15->parent, 0, VAR_13 | VAR_16,
       VAR_15->buflen >> VAR_15->stereo, 0, VAR_20);
 FUNC_9(VAR_15->parent, 0, VAR_0, 0);
 FUNC_9(VAR_15->parent, 0, VAR_3, 2 << VAR_7);


 FUNC_3(VAR_15->parent, 1, VAR_13 | VAR_17,
       VAR_15->buflen >> VAR_15->stereo, 0, VAR_20);
 FUNC_9(VAR_15->parent, 1, VAR_0, 0);
 FUNC_9(VAR_15->parent, 1, VAR_3, 3 << VAR_7);


 FUNC_3(VAR_15->parent, 2, VAR_13 | 0,
       VAR_15->parent->bufsz >> 2, VAR_21, 0x10000);
 FUNC_9(VAR_15->parent, 2, VAR_0, 0);
 FUNC_9(VAR_15->parent, 2, VAR_2, 0xf0);
 FUNC_9(VAR_15->parent, 2, VAR_3, 0x15 << VAR_7);


 FUNC_3(VAR_15->parent, 3, VAR_13 | (VAR_15->parent->bufsz >> 2),
       VAR_15->parent->bufsz >> 2, -VAR_21, 0x10000);
 FUNC_9(VAR_15->parent, 3, VAR_0, 0);
 FUNC_9(VAR_15->parent, 3, VAR_2, 0xf0);
 FUNC_9(VAR_15->parent, 3, VAR_3, 0x14 << VAR_7);


 VAR_15->parent->active |= (1 << VAR_15->parent->playchns);


 FUNC_4();
 FUNC_9(VAR_15->parent, 0, VAR_1,
     (VAR_5 << VAR_6) | VAR_8 | 0xf);
 FUNC_9(VAR_15->parent, 1, VAR_1,
     (VAR_5 << VAR_6) | VAR_8 | 0xf);
 FUNC_9(VAR_15->parent, 2, VAR_1,
     (VAR_4 << VAR_6) | 0xf);
 FUNC_9(VAR_15->parent, 3, VAR_1,
     (VAR_4 << VAR_6) | 0xf);
 FUNC_5();

 FUNC_6(VAR_15->parent);
 FUNC_8(VAR_15->parent);
 FUNC_2(VAR_15->parent);
}
