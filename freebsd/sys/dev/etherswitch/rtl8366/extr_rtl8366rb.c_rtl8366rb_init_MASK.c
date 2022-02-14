
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366rb_softc {int* vid; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct rtl8366rb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_12)
{
 struct rtl8366rb_softc *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(VAR_12);







 FUNC_5(VAR_12, VAR_2,
  VAR_3,
  VAR_3, VAR_11);


 FUNC_0(100000);

 FUNC_5(VAR_12, VAR_5,
  VAR_6 | VAR_7,
  VAR_6, VAR_11);

 for (VAR_14 = 0; VAR_14 <= 1; VAR_14++)
  VAR_13->vid[VAR_14] = (VAR_14 + 1) | VAR_0;

 FUNC_5(VAR_12, FUNC_3(VAR_9, 0),
  (1 << 0), 0, VAR_11);

 FUNC_5(VAR_12, FUNC_3(VAR_9, 1),
  ((1 << 5 | 1 << 0) << VAR_8)
   | ((1 << 5 | 1 << 0) << VAR_10),
  ((1 << 5 | 1 << 0) << VAR_8
   | ((1 << 0) << VAR_10)),
  VAR_11);

 FUNC_5(VAR_12, FUNC_1(0),
  FUNC_2(0, VAR_1),
  FUNC_2(0, 1), VAR_11);
}
