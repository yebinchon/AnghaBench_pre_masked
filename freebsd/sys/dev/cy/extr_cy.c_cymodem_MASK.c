
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {struct com_s* t_sc; } ;
struct com_s {int mcr_image; int mcr_dtr; int mcr_rts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct com_s*,int ) ;
 int FUNC_3 (struct com_s*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct tty *VAR_12, int VAR_13, int VAR_14)
{
 struct com_s *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_15 = VAR_12->t_sc;
 if (VAR_13 == 0 && VAR_14 == 0) {
  VAR_13 = 0;
  VAR_16 = VAR_15->mcr_image;
  if (VAR_16 & VAR_15->mcr_dtr)
   VAR_13 |= VAR_9;
  if (VAR_16 & VAR_15->mcr_rts)

   VAR_13 |= VAR_11;
  VAR_17 = FUNC_2(VAR_15, VAR_1);

  if (VAR_17 & VAR_3)
   VAR_13 |= VAR_6;
  if (VAR_17 & VAR_2)
   VAR_13 |= VAR_7;
  if (VAR_17 & VAR_4)
   VAR_13 |= VAR_8;
  if (VAR_17 & VAR_5)

   VAR_13 |= VAR_10;
  return (VAR_13);
 }
 VAR_16 = VAR_15->mcr_image;
 if (VAR_13 & VAR_9)
  VAR_16 |= VAR_15->mcr_dtr;
 if (VAR_14 & VAR_9)
  VAR_16 &= ~VAR_15->mcr_dtr;
 if (VAR_13 & VAR_11)
  VAR_16 |= VAR_15->mcr_rts;
 if (VAR_14 & VAR_11)
  VAR_16 &= ~VAR_15->mcr_rts;
 FUNC_4();
 FUNC_0();
 VAR_15->mcr_image = VAR_16;
 FUNC_3(VAR_15, VAR_0, VAR_16);
 FUNC_3(VAR_15, VAR_1, VAR_16);
 FUNC_1();
 FUNC_5();
 return (0);
}
