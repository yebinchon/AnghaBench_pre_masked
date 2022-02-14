
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct octeon_device {int cores_crashed; int watchdog_task; } ;
typedef int err_msg_was_printed ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct octeon_device*,char*,int) ;
 struct octeon_device* FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 int VAR_3;
 uint16_t VAR_4 = 0;
 struct octeon_device *VAR_5 = VAR_2;
 bool VAR_6[12];

 FUNC_0(VAR_6, sizeof(VAR_6));

 while (1) {
  FUNC_1(VAR_5->watchdog_task);
  VAR_4 =
   (uint16_t)FUNC_5(VAR_5, VAR_0);

  if (VAR_4) {
   struct octeon_device *VAR_7;

   VAR_5->cores_crashed = 1;
   VAR_7 = FUNC_3(VAR_5);
   if (VAR_7 != ((void*)0))
    VAR_7->cores_crashed = 1;

   for (VAR_3 = 0; VAR_3 < VAR_1;
        VAR_3++) {
    bool VAR_8;

    VAR_8 =
        (VAR_4 >>
         VAR_3) & 1;
    if (VAR_8 &&
        !VAR_6[VAR_3]) {
     FUNC_2(VAR_5,
          "ERROR: Octeon core %d crashed or got stuck! See oct-fwdump for details.\n",
          VAR_3);
     VAR_6[VAR_3] = 1;
    }
   }

  }


  FUNC_6("-", FUNC_4(2000));
 }
}
