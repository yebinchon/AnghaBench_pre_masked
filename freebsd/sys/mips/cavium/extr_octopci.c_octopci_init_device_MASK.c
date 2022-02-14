
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int device_t ;
typedef int bus_addr_t ;
struct TYPE_2__ {int board_type; } ;


 int FUNC_0 (int ) ;

 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;



 int FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,char*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ,unsigned int,unsigned int,unsigned int,unsigned int,int*) ;
 unsigned int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (int ,unsigned int,unsigned int,unsigned int,int ,int) ;
 int FUNC_13 (int ,unsigned int,unsigned int,unsigned int,int ,unsigned int,int) ;

__attribute__((used)) static unsigned
FUNC_14(device_t VAR_32, unsigned VAR_33, unsigned VAR_34, unsigned VAR_35, unsigned VAR_36)
{
 unsigned VAR_37, VAR_38;
 uint8_t VAR_39;
 uint8_t VAR_40, VAR_41;
 uint8_t VAR_42;
 uint8_t VAR_43;


 VAR_43 = FUNC_12(VAR_32, VAR_33, VAR_34, VAR_35, VAR_19, 1);




 VAR_42 = FUNC_12(VAR_32, VAR_33, VAR_34, VAR_35, VAR_18, 1);
 VAR_42 &= ~(VAR_12 | VAR_13);
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_18, VAR_42, 1);

 FUNC_2(10000);


 switch (VAR_43 & VAR_14) {
 case 128:
  VAR_38 = 6;
  break;
 case 130:
  VAR_38 = 2;
  break;
 case 129:
  VAR_38 = 0;
  break;
 default:
  FUNC_7(VAR_32, "%02x.%02x:%02x: invalid header type %#x\n",
      VAR_33, VAR_34, VAR_35, VAR_43);
  return (VAR_36);
 }

 VAR_37 = 0;
 while (VAR_37 < VAR_38)
  VAR_37 = FUNC_10(VAR_32, VAR_33, VAR_34, VAR_35, VAR_37, &VAR_42);


 VAR_42 |= VAR_11;


 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_18, VAR_42, 1);

 FUNC_2(10000);






 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_16, 16, 1);


 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_24, 48, 1);


 switch (FUNC_5()->board_type) {
 default:
  break;
 }


 VAR_40 = FUNC_12(VAR_32, VAR_33, VAR_34, VAR_35, VAR_17, 1);
 if (VAR_40 != VAR_9)
  return (VAR_36);

 VAR_41 = FUNC_12(VAR_32, VAR_33, VAR_34, VAR_35, VAR_30, 1);
 if (VAR_41 != VAR_31)
  return (VAR_36);


 VAR_42 |= VAR_12 | VAR_13;
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_18, VAR_42, 1);


 VAR_39 = FUNC_12(VAR_32, VAR_33, VAR_34, VAR_35, VAR_15, 1);
 VAR_39 |= VAR_6 | VAR_8;


 VAR_39 |= VAR_7;
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_15, VAR_39, 1);
 FUNC_2(100000);
 VAR_39 &= ~VAR_7;
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_15, VAR_39, 1);

 VAR_36++;


 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_25,
     VAR_3 >> 16, 2);
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_26,
     (VAR_3 + VAR_4 - 1) >> 16, 2);

 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_21,
     VAR_1 >> 8, 1);
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_20,
     VAR_1 >> 16, 2);

 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_23,
     (VAR_1 + VAR_2 - 1) >> 8, 1);
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_22,
     (VAR_1 + VAR_2 - 1) >> 16, 2);





 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_27, VAR_33, 1);
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_28, VAR_36, 1);
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_29, 0xff, 1);


 VAR_39 |= VAR_7;
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_15, VAR_39, 1);
 FUNC_2(100000);
 VAR_39 &= ~VAR_7;
 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_15, VAR_39, 1);


 FUNC_2(100000);

 VAR_36 = FUNC_11(VAR_32, VAR_36);

 FUNC_13(VAR_32, VAR_33, VAR_34, VAR_35, VAR_29, VAR_36, 1);

 return (VAR_36);
}
