
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource {int dummy; } ;
struct aic7770_identity {int dummy; } ;
typedef int driver_t ;
typedef int * device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct aic7770_identity* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 struct resource* FUNC_2 (int *,int ,int*,int,int,int ,int ) ;
 int FUNC_3 (int *,int ,int,struct resource*) ;
 int FUNC_4 (int *,int ,int ,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static void
FUNC_9(driver_t *VAR_7, device_t VAR_8)
{
 int VAR_9;
 int VAR_10;

 VAR_10 = 14;
 for (VAR_9 = 0; VAR_9 <= VAR_10; VAR_9++) {
  struct aic7770_identity *VAR_11;
  bus_space_tag_t VAR_12;
  bus_space_handle_t VAR_13;
  struct resource *VAR_14;
  uint32_t VAR_15;
  int VAR_16;

  VAR_16 = 0;
  VAR_15 = (VAR_9 * VAR_2) + VAR_1;
  VAR_14 = FUNC_2(VAR_8, VAR_5, &VAR_16,
       VAR_15, VAR_15, VAR_0,
       VAR_4);
  if (VAR_14 == ((void*)0)) {
   if (VAR_6)
    FUNC_6("ahc_isa_identify %d: ioport 0x%x "
           "alloc failed\n", VAR_9, VAR_15);
   continue;
  }

  VAR_12 = FUNC_8(VAR_14);
  VAR_13 = FUNC_7(VAR_14);

  VAR_11 = FUNC_1(VAR_12, VAR_13);
  if (VAR_11 != ((void*)0)) {
   device_t VAR_17;

   VAR_17 = FUNC_0(VAR_8, VAR_3,
           "ahc", -1);
   if (VAR_17 != ((void*)0)) {
    FUNC_5(VAR_17, VAR_7);
    FUNC_4(VAR_17, VAR_5,
       0, VAR_15, VAR_0);
   }
  }
  FUNC_3(VAR_8, VAR_5, VAR_16, VAR_14);
 }
}
