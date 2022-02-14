
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int e6000sw_softc_t ;
typedef int device_t ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_17, e6000sw_softc_t *VAR_18)
{
 uint32_t VAR_19;


 VAR_19 = FUNC_2(VAR_18, VAR_9, VAR_0);
 VAR_19 &= ~VAR_2;
 VAR_19 |= VAR_4 << VAR_1;
 FUNC_4(VAR_18, VAR_9, VAR_0, VAR_19);


 FUNC_4(VAR_18, VAR_10, VAR_6, VAR_7);
 FUNC_4(VAR_18, VAR_10, VAR_5, VAR_7);


 FUNC_4(VAR_18, VAR_9, VAR_11, 0);


 FUNC_4(VAR_18, VAR_10, VAR_12,
     VAR_15 |
     (1 << VAR_16) |
     VAR_13 |
     (1 << VAR_14));

 FUNC_0(VAR_17, VAR_18, VAR_8);
 FUNC_1(VAR_17, VAR_18, ((void*)0), VAR_8);
 FUNC_3(VAR_17, VAR_18, 0, VAR_3);
}
