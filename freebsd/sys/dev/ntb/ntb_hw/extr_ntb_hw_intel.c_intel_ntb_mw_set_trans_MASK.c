
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef scalar_t__ uint32_t ;
struct ntb_softc {unsigned int b2b_mw_idx; size_t b2b_off; struct ntb_pci_bar_info* bar_info; } ;
struct ntb_pci_bar_info {size_t size; } ;
typedef enum ntb_bar { ____Placeholder_ntb_bar } ntb_bar ;
typedef int device_t ;
typedef size_t bus_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ntb_softc*,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct ntb_softc*,int) ;
 struct ntb_softc* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct ntb_softc*,unsigned int) ;
 size_t FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__,size_t) ;
 unsigned int FUNC_7 (struct ntb_softc*,unsigned int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, unsigned VAR_6, bus_addr_t VAR_7, size_t VAR_8)
{
 struct ntb_softc *VAR_9 = FUNC_2(VAR_5);
 struct ntb_pci_bar_info *VAR_10;
 uint64_t VAR_11, VAR_12, VAR_13;
 size_t VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;
 enum ntb_bar VAR_19;

 if (VAR_6 >= FUNC_3(VAR_5))
  return (VAR_1);
 VAR_6 = FUNC_7(VAR_9, VAR_6);

 VAR_19 = FUNC_4(VAR_9, VAR_6);
 VAR_10 = &VAR_9->bar_info[VAR_19];

 VAR_14 = VAR_10->size;
 if (VAR_6 == VAR_9->b2b_mw_idx)
  VAR_15 = VAR_14 - VAR_9->b2b_off;
 else
  VAR_15 = VAR_14;


 if ((VAR_7 & (VAR_14 - 1)) != 0)
  return (VAR_1);

 if (VAR_8 > VAR_15)
  return (VAR_1);

 FUNC_0(VAR_9, VAR_19, &VAR_16, &VAR_17, &VAR_18);

 VAR_12 = 0;
 if (FUNC_1(VAR_9, VAR_19)) {
  VAR_11 = FUNC_5(8, VAR_16) & VAR_0;

  if (VAR_18 != 0 && VAR_8 != VAR_15)
   VAR_12 = VAR_11 + VAR_8;


  FUNC_6(8, VAR_17, VAR_7);
  VAR_13 = FUNC_5(8, VAR_17) & VAR_0;
  if (VAR_13 != VAR_7) {
   FUNC_6(8, VAR_17, 0);
   return (VAR_2);
  }


  FUNC_6(8, VAR_18, VAR_12);
  VAR_13 = FUNC_5(8, VAR_18) & VAR_0;
  if (VAR_13 != VAR_12) {
   FUNC_6(8, VAR_18, VAR_11);
   FUNC_6(8, VAR_17, 0);
   return (VAR_2);
  }
 } else {


  if ((VAR_7 & VAR_4) != VAR_7)
   return (VAR_3);
  if (((VAR_7 + VAR_8) & VAR_4) != (VAR_7 + VAR_8))
   return (VAR_3);

  VAR_11 = FUNC_5(4, VAR_16) & VAR_0;

  if (VAR_18 != 0 && VAR_8 != VAR_15)
   VAR_12 = VAR_11 + VAR_8;


  FUNC_6(4, VAR_17, VAR_7);
  VAR_13 = FUNC_5(4, VAR_17) & VAR_0;
  if (VAR_13 != VAR_7) {
   FUNC_6(4, VAR_17, 0);
   return (VAR_2);
  }


  FUNC_6(4, VAR_18, VAR_12);
  VAR_13 = FUNC_5(4, VAR_18) & VAR_0;
  if (VAR_13 != VAR_12) {
   FUNC_6(4, VAR_18, VAR_11);
   FUNC_6(4, VAR_17, 0);
   return (VAR_2);
  }
 }
 return (0);
}
