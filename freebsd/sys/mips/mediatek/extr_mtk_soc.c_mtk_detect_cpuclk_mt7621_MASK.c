
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(bus_space_tag_t VAR_17, bus_space_handle_t VAR_18)
{
 uint32_t VAR_19, VAR_20, VAR_21;

 VAR_19 = FUNC_1(VAR_17, VAR_18, VAR_14);
 if (VAR_19 & VAR_12) {
  VAR_20 = FUNC_1(VAR_17, VAR_18, VAR_13);
  VAR_20 >>= VAR_11;
  VAR_20 &= VAR_10;
  VAR_20 += VAR_9;

  VAR_19 = FUNC_1(VAR_17, VAR_18, VAR_16);
  VAR_19 >>= VAR_5;
  VAR_19 &= VAR_4;

  if (VAR_19 >= VAR_3)
   VAR_21 = VAR_20 * VAR_2;
  else if (VAR_19 >= VAR_1)
   VAR_21 = VAR_20 * VAR_0;
  else
   VAR_21 = VAR_20 * 0;
 } else {
  VAR_19 = FUNC_1(VAR_17, VAR_18, VAR_15);
  VAR_20 = (VAR_19 >> VAR_7) & VAR_8;
  VAR_19 &= VAR_8;

  VAR_21 = (VAR_6 * VAR_19) / VAR_20;
 }

 return (FUNC_0(VAR_21));
}
