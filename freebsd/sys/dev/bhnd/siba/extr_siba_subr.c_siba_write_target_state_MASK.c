
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint32_t ;
struct siba_devinfo {struct bhnd_resource** cfg_res; } ;
struct bhnd_resource {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct bhnd_resource*,int) ;
 int FUNC_3 (struct bhnd_resource*,int,int) ;
 int FUNC_4 (int ) ;

void
FUNC_5(device_t VAR_1, struct siba_devinfo *VAR_2,
    bus_size_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct bhnd_resource *VAR_6;
 uint32_t VAR_7;

 VAR_6 = VAR_2->cfg_res[0];

 FUNC_1(VAR_6 != ((void*)0), ("%s missing CFG0 mapping",
     FUNC_4(VAR_1)));
 FUNC_1(VAR_3 <= VAR_0-4, ("%s invalid CFG0 register offset %#jx",
     FUNC_4(VAR_1), (uintmax_t)VAR_3));

 VAR_7 = FUNC_2(VAR_6, VAR_3);
 VAR_7 &= ~VAR_5;
 VAR_7 |= (VAR_4 & VAR_5);

 FUNC_3(VAR_6, VAR_3, VAR_7);
 FUNC_2(VAR_6, VAR_3);
 FUNC_0(1);
}
