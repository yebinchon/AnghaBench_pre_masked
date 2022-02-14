
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(bus_space_tag_t VAR_14, bus_space_handle_t VAR_15)
{
 uint32_t VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_16 = FUNC_1(VAR_14, VAR_15, VAR_13);
 if (VAR_16 & VAR_1)
  return (VAR_10);

 VAR_16 = FUNC_1(VAR_14, VAR_15, VAR_12);
 if (!(VAR_16 & VAR_0))
  return (VAR_11);

 VAR_17 = VAR_6 + ((VAR_16 >> VAR_8) &
     VAR_7);
 VAR_18 = (VAR_16 >> VAR_5) & VAR_4;

 if (VAR_18 != VAR_4)
  VAR_18 += VAR_2;
 else
  VAR_18 = VAR_3;

 VAR_19 = (VAR_9 * VAR_17) / VAR_18;

 return (FUNC_0(VAR_19));
}
