
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int bd_flags; int bd_unit; scalar_t__ bd_sectors; int bd_cyl; int bd_hds; int bd_sec; int bd_sectorsize; } ;
typedef TYPE_1__ bdinfo_t ;
struct TYPE_13__ {char* dv_name; } ;
struct TYPE_12__ {char* dv_name; } ;
struct TYPE_11__ {char* dv_name; } ;
struct TYPE_10__ {int addr; int eax; int edx; int efl; int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 int FUNC_6 (char*,char const*,int) ;
 TYPE_2__ VAR_11 ;
 int FUNC_7 () ;

__attribute__((used)) static bool
FUNC_8(bdinfo_t *VAR_12)
{
 int VAR_13, VAR_14;

 VAR_12->bd_flags &= ~VAR_5;

 VAR_13 = FUNC_2(VAR_12->bd_unit);
 if (VAR_13 == 0)
  VAR_12->bd_flags |= VAR_4;
 else if (VAR_13 < 0x30)
  VAR_12->bd_flags |= VAR_2;
 else
  VAR_12->bd_flags |= VAR_3;


 VAR_12->bd_sectorsize = VAR_6;





 if (VAR_12->bd_unit < 0x80) {

  FUNC_5(VAR_12->bd_unit);


  VAR_11 = VAR_7;
  VAR_11 = 0x13;
  VAR_11 = 0x1500;
  VAR_11 = VAR_12->bd_unit;
  FUNC_7();
  if (FUNC_1(VAR_11) || (VAR_11 & 0x300) == 0)
   return (0);
 }

 VAR_14 = 1;
 if (VAR_13 != 0)
  VAR_14 = FUNC_3(VAR_12);
 if (VAR_14 != 0 || VAR_12->bd_sectors == 0)
  VAR_14 = FUNC_4(VAR_12);

 if (VAR_14 != 0 && VAR_12->bd_unit < 0x80) {

  VAR_12->bd_cyl = 80;
  VAR_12->bd_hds = 2;
  VAR_12->bd_sec = 18;
  VAR_12->bd_sectors = 2880;

  VAR_12->bd_flags |= VAR_5;
  VAR_14 = 0;
 }

 if (VAR_14 != 0) {

  if ((VAR_12->bd_flags & VAR_0) != 0)
   return (1);

  if (VAR_12->bd_sectors != 0 && VAR_13 != 0) {
   VAR_12->bd_sec = 63;
   VAR_12->bd_hds = 255;
   VAR_12->bd_cyl =
       (VAR_12->bd_sectors + VAR_12->bd_sec * VAR_12->bd_hds - 1) /
       VAR_12->bd_sec * VAR_12->bd_hds;
  } else {
   const char *VAR_15;

   if ((VAR_12->bd_flags & VAR_1) != 0)
    VAR_15 = VAR_9.dv_name;
   else if ((VAR_12->bd_flags & VAR_0) != 0)
    VAR_15 = VAR_8.dv_name;
   else
    VAR_15 = VAR_10.dv_name;

   FUNC_6("Can not get information about %s unit %#x\n",
       VAR_15, VAR_12->bd_unit);
   return (0);
  }
 }

 if (VAR_12->bd_sec == 0)
  VAR_12->bd_sec = 63;
 if (VAR_12->bd_hds == 0)
  VAR_12->bd_hds = 255;

 if (VAR_12->bd_sectors == 0)
  VAR_12->bd_sectors = (uint64_t)VAR_12->bd_cyl * VAR_12->bd_hds * VAR_12->bd_sec;

 FUNC_0("unit 0x%x geometry %d/%d/%d\n", VAR_12->bd_unit, VAR_12->bd_cyl,
     VAR_12->bd_hds, VAR_12->bd_sec);

 return (1);
}
