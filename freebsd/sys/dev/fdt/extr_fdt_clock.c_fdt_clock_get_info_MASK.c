
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fdt_clock_info {int index; char* name; int * provider; } ;
typedef int phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,struct fdt_clock_info*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,void**) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct fdt_clock_info*,int) ;
 int FUNC_5 (int *) ;

int
FUNC_6(device_t VAR_1, int VAR_2, struct fdt_clock_info *VAR_3)
{
 phandle_t VAR_4;
 device_t VAR_5;
 int VAR_6, VAR_7, VAR_8;
 uint32_t *VAR_9;

 VAR_4 = FUNC_5(VAR_1);
 VAR_8 = FUNC_2(VAR_4, "clocks", sizeof(*VAR_9),
     (void **)&VAR_9);
 if (VAR_8 <= 0)
  return (VAR_0);
 VAR_2 *= 2;
 if (VAR_8 <= VAR_2)
  VAR_7 = VAR_0;
 else {
  VAR_5 = FUNC_1(VAR_9[VAR_2]);
  if (VAR_5 == ((void*)0))
   VAR_7 = VAR_0;
  else {





   VAR_6 = VAR_9[VAR_2 + 1];
   FUNC_4(VAR_3, sizeof(*VAR_3));
   VAR_3->provider = VAR_5;
   VAR_3->index = VAR_6;
   VAR_3->name = "";
   VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_3);
  }
 }
 FUNC_3(VAR_9);
 return (VAR_7);
}
