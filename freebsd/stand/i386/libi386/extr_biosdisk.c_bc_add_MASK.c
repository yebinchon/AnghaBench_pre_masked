
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct specification_packet {int sp_cylsec; int sp_head; } ;
struct TYPE_6__ {int bd_unit; int bd_cyl; int bd_hds; int bd_sec; int bd_sectors; int bd_flags; } ;
typedef TYPE_1__ bdinfo_t ;
struct TYPE_7__ {int addr; int eax; int edx; int esi; int ds; int ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct specification_packet*) ;
 int FUNC_3 (struct specification_packet*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (int,int) ;
 int VAR_3 ;
 int FUNC_7 (char*,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_5)
{
 bdinfo_t *VAR_6;
 struct specification_packet VAR_7;
 int VAR_8 = 0;

 if (!FUNC_0(&VAR_3))
                return (-1);

        VAR_4 = VAR_1;
        VAR_4 = 0x13;
        VAR_4 = 0x4b01;
        VAR_4 = VAR_5;
        VAR_4 = FUNC_3(&VAR_7);
        VAR_4 = FUNC_2(&VAR_7);
        FUNC_8();
        if ((VAR_4 & 0xff00) != 0)
                return (-1);

 if ((VAR_6 = FUNC_6(1, sizeof(*VAR_6))) == ((void*)0))
  return (-1);

 VAR_6->bd_flags = VAR_0;
        VAR_6->bd_unit = VAR_5;





 (void)FUNC_5(VAR_6);

 if (VAR_6->bd_cyl == 0) {
  VAR_6->bd_cyl = ((VAR_7.sp_cylsec & 0xc0) << 2) +
      ((VAR_7.sp_cylsec & 0xff00) >> 8) + 1;
 }
 if (VAR_6->bd_hds == 0)
  VAR_6->bd_hds = VAR_7.sp_head + 1;
 if (VAR_6->bd_sec == 0)
  VAR_6->bd_sec = VAR_7.sp_cylsec & 0x3f;
 if (VAR_6->bd_sectors == 0)
  VAR_6->bd_sectors = (uint64_t)VAR_6->bd_cyl * VAR_6->bd_hds * VAR_6->bd_sec;


 if (VAR_6->bd_sectors == 0)
  VAR_6->bd_sectors = 4173824;

 FUNC_1(&VAR_3, VAR_6, VAR_2);
        FUNC_7("BIOS CD is cd%d\n", VAR_8);
        VAR_8++;
        FUNC_4(VAR_8);
        return(0);
}
