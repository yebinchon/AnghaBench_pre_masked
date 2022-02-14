
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bd_unit; scalar_t__ bd_sectors; int bd_flags; int bd_sectorsize; } ;
typedef TYPE_1__ bdinfo_t ;
struct TYPE_8__ {char* dv_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,char,char*,int) ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_6, VAR_7;
 bdinfo_t *VAR_8;

 VAR_7 = FUNC_4();
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if ((VAR_8 = FUNC_3(1, sizeof(*VAR_8))) == ((void*)0))
   break;

  VAR_8->bd_sectorsize = VAR_2;
  VAR_8->bd_flags = VAR_0;
  VAR_8->bd_unit = VAR_6;


  if (FUNC_2(VAR_8) != 0) {
   FUNC_5(VAR_8);
   break;
  }
  if (VAR_8->bd_sectors == 0)
   VAR_8->bd_flags |= VAR_1;

  FUNC_6("BIOS drive %c: is %s%d\n", ('A' + VAR_6),
      VAR_4.dv_name, VAR_6);

  FUNC_0(&VAR_5, VAR_8, VAR_3);
 }

 FUNC_1(VAR_6);
 return (0);
}
