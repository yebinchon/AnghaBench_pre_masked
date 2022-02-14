
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct octeon_device*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct octeon_device *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 FUNC_2(VAR_7->device, VAR_6, &VAR_8);

 FUNC_5(VAR_7->device);


 FUNC_6(VAR_7->device, VAR_5, VAR_4, 2);


 FUNC_1(100);

 VAR_9 = FUNC_3(VAR_7->device, VAR_8 + VAR_3, 2);
 if (VAR_9 & VAR_1) {
  FUNC_0(VAR_7, "Function reset incomplete after 100ms, sleeping for 5 seconds\n");
  FUNC_1(5);

  VAR_9 = FUNC_3(VAR_7->device, VAR_8 + VAR_3, 2);
  if (VAR_9 & VAR_1)
   FUNC_0(VAR_7, "Function reset still incomplete after 5s, reset anyway\n");
 }

 FUNC_6(VAR_7->device, VAR_8 + VAR_2, VAR_0, 2);
 FUNC_1(100);

 FUNC_4(VAR_7->device);
}
