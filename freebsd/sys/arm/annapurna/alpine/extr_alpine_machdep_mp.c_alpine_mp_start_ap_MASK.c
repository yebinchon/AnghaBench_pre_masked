
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ u_long ;
typedef int platform_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 () ;
 int VAR_8 ;
 int FUNC_10 () ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__) ;

void
FUNC_14(platform_t VAR_10)
{
 uint32_t VAR_11;
 vm_offset_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 u_long VAR_15;
 u_long VAR_16;
 u_long VAR_17;
 u_long VAR_18;
 bus_addr_t VAR_19;
 bus_addr_t VAR_20;
 int VAR_21;

 if (FUNC_3(&VAR_15, &VAR_17))
  FUNC_11("Couldn't resolve cpu_resume_base address\n");

 if (FUNC_4(&VAR_16, &VAR_18))
  FUNC_11("Couldn't resolve_nb_base address\n");


 if (FUNC_5(VAR_8, VAR_7 + VAR_15,
     VAR_17, 0, &VAR_19))
  FUNC_11("Couldn't map CPU-resume area");
 if (FUNC_5(VAR_8, VAR_7 + VAR_16,
     VAR_18, 0, &VAR_20))
  FUNC_11("Couldn't map NB-service area");


 VAR_13 = FUNC_6(VAR_8, VAR_19,
     VAR_5);
 if (((VAR_13 & VAR_2) != VAR_1) ||
     ((VAR_13 & VAR_4) < VAR_3)) {
  FUNC_11("CPU-resume device is not compatible");
 }

 VAR_12 = (vm_offset_t)VAR_9;
 VAR_11 = FUNC_13(VAR_12);

 for (VAR_21 = 1; VAR_21 < FUNC_12(); VAR_21++) {

  FUNC_8(VAR_8, VAR_20,
      FUNC_2(VAR_21), 0);
  FUNC_10();


  VAR_13 = FUNC_6(VAR_8, VAR_19,
      FUNC_0(VAR_21));
  VAR_13 &= ~VAR_0;
  FUNC_8(VAR_8, VAR_19,
      FUNC_0(VAR_21), VAR_13);
  FUNC_10();


  FUNC_8(VAR_8, VAR_19,
      FUNC_1(VAR_21), VAR_11);
  FUNC_10();
 }


 if (FUNC_5(VAR_8, VAR_7 + VAR_16,
     VAR_18, 0, &VAR_20))
  FUNC_11("Couldn't map NB-service area");

 VAR_14 = (1 << FUNC_12()) - 1;


 VAR_13 = FUNC_6(VAR_8, VAR_20, VAR_6);
 VAR_13 |= VAR_14;
 FUNC_8(VAR_8, VAR_20, VAR_6, VAR_13);
 FUNC_9();

 FUNC_7(VAR_8, VAR_20, VAR_18);
 FUNC_7(VAR_8, VAR_19, VAR_17);
}
