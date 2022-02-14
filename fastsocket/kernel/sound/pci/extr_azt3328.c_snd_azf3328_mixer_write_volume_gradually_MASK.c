
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_azf3328 {unsigned int mixer_io; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(const struct snd_azf3328 *VAR_3,
      unsigned VAR_4,
      unsigned char VAR_5,
      unsigned char VAR_6,
      int VAR_7, int VAR_8
)
{
 unsigned long VAR_9 = VAR_3->mixer_io + VAR_4;
 unsigned char VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0, VAR_13 = 0;

 FUNC_3();

 if (VAR_7 & VAR_1) {
  VAR_10 = FUNC_0(VAR_9 + 1);


  if (VAR_10 & VAR_0)
   VAR_5 |= VAR_0;
  else
   VAR_5 &= ~VAR_0;

  VAR_12 = (VAR_10 > VAR_5) ? -1 : 1;
 }

 if (VAR_7 & VAR_2) {
  VAR_11 = FUNC_0(VAR_9 + 0);

  VAR_13 = (VAR_11 > VAR_6) ? -1 : 1;
 }

 do {
  if (VAR_12) {
   if (VAR_10 != VAR_5) {
    VAR_10 += VAR_12;
    FUNC_2(VAR_10, VAR_9 + 1);
   } else
       VAR_12 = 0;
  }
  if (VAR_13) {
   if (VAR_11 != VAR_6) {
    VAR_11 += VAR_13;




    FUNC_2(VAR_11, VAR_9 + 0);
   } else
       VAR_13 = 0;
  }
  if (VAR_8)
   FUNC_1(VAR_8);
 } while ((VAR_12) || (VAR_13));
 FUNC_4();
}
