
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; unsigned int gflags; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*,unsigned int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,struct net_device*,int) ;
 int FUNC_9 (struct net_device*) ;

int FUNC_10(struct net_device *VAR_14, unsigned VAR_15)
{
 int VAR_16, VAR_17;
 int VAR_18 = VAR_14->flags;

 FUNC_0();





 VAR_14->flags = (VAR_15 & (VAR_2 | VAR_6 | VAR_5 |
          VAR_3 | VAR_4 | VAR_7 |
          VAR_1)) |
       (VAR_14->flags & (VAR_10 | VAR_11 | VAR_8 |
        VAR_0));





 if ((VAR_18 ^ VAR_15) & VAR_4)
  FUNC_2(VAR_14, VAR_4);

 FUNC_7(VAR_14);







 VAR_16 = 0;
 if ((VAR_18 ^ VAR_15) & VAR_10) {
  VAR_16 = ((VAR_18 & VAR_10) ? FUNC_3 : FUNC_4)(VAR_14);

  if (!VAR_16)
   FUNC_7(VAR_14);
 }

 if (VAR_14->flags & VAR_10 &&
     ((VAR_18 ^ VAR_14->flags) & ~(VAR_10 | VAR_8 | VAR_0 |
       VAR_11)))
  FUNC_1(VAR_12, VAR_14);

 if ((VAR_15 ^ VAR_14->gflags) & VAR_8) {
  int VAR_19 = (VAR_15 & VAR_8) ? 1 : -1;

  VAR_14->gflags ^= VAR_8;
  FUNC_6(VAR_14, VAR_19);
 }





 if ((VAR_15 ^ VAR_14->gflags) & VAR_0) {
  int VAR_20 = (VAR_15 & VAR_0) ? 1 : -1;

  VAR_14->gflags ^= VAR_0;
  FUNC_5(VAR_14, VAR_20);
 }


 VAR_17 = (VAR_18 ^ VAR_14->flags) & ~(VAR_10 | VAR_9);
 if (VAR_17)
  FUNC_8(VAR_13, VAR_14, VAR_17);

 return VAR_16;
}
