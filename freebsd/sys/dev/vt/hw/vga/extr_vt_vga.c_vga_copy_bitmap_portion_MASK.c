
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int term_color_t ;


 int FUNC_0 (int const*,unsigned int,unsigned int,unsigned int,unsigned int,int*,int*) ;

__attribute__((used)) static void
FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1,
    const uint8_t *VAR_2, const uint8_t *VAR_3, unsigned int VAR_4,
    unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7,
    unsigned int VAR_8, unsigned int VAR_9, unsigned int VAR_10,
    term_color_t VAR_11, term_color_t VAR_12, int VAR_13)
{
 unsigned int VAR_14, VAR_15;
 uint8_t VAR_16, VAR_17, VAR_18;

 VAR_15 = (VAR_4 + 7) / 8;

 for (VAR_14 = 0; VAR_14 < VAR_10; ++VAR_14) {
  FUNC_0(VAR_2 + (VAR_8 + VAR_14) * VAR_15,
      VAR_15, VAR_5, VAR_7, VAR_6, &VAR_16, &VAR_17);

  if (VAR_3 == ((void*)0)) {




   VAR_18 = VAR_17;
  } else {




   FUNC_0(
       VAR_3 + (VAR_8 + VAR_14) * VAR_15,
       VAR_15, VAR_5, VAR_7, VAR_6,
       &VAR_18, ((void*)0));


   VAR_18 &= VAR_17;
  }





  VAR_16 &= VAR_18;


  if (VAR_13)
   VAR_0[VAR_9 + VAR_14] &= ~VAR_18;
  VAR_0[VAR_9 + VAR_14] |= VAR_16;

  if (VAR_1 == ((void*)0))
   continue;






  if (VAR_13) {




   for (int VAR_19 = 0; VAR_19 < 16; ++VAR_19)
    VAR_1[(VAR_9 + VAR_14) * 16 + VAR_19] &=
        ~VAR_18;
  }
  VAR_1[(VAR_9 + VAR_14) * 16 + VAR_11] |= VAR_16;
  VAR_1[(VAR_9 + VAR_14) * 16 + VAR_12] |= (~VAR_16 & VAR_18);
 }
}
