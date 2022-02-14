
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int d_unit; TYPE_1__* d_dev; } ;
struct disk_devdesc {TYPE_2__ dd; } ;
typedef int daddr_t ;
typedef int caddr_t ;
struct TYPE_10__ {int bd_flags; int bd_unit; } ;
typedef TYPE_3__ bdinfo_t ;
struct TYPE_8__ {char* dv_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int,int,int) ;
 int FUNC_2 (TYPE_3__*,int,int,int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_6(struct disk_devdesc *VAR_4, bdinfo_t *VAR_5, daddr_t VAR_6, int VAR_7,
    caddr_t VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;


 if (VAR_7 < 0)
  return (-1);
 if (VAR_9 == VAR_2 && VAR_6 >= 0x100000000)
  FUNC_3(VAR_5);
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  if (VAR_5->bd_flags & VAR_0)
   VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  else
   VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

  if (VAR_10 == 0) {
   if (VAR_5->bd_flags & VAR_1)
    VAR_5->bd_flags &= ~VAR_1;
   break;
  }

  FUNC_4(VAR_5->bd_unit);
  if (VAR_10 == 0x20 || VAR_10 == 0x31 || VAR_10 == 0x80) {
   VAR_5->bd_flags |= VAR_1;
   break;
  }
 }

 if (VAR_10 != 0 && (VAR_5->bd_flags & VAR_1) == 0) {
  if (VAR_9 == VAR_3) {
   FUNC_5("%s%d: Write %d sector(s) from %p (0x%x) "
       "to %lld: 0x%x\n", VAR_4->dd.d_dev->dv_name,
       VAR_4->dd.d_unit, VAR_7, VAR_8, FUNC_0(VAR_8), VAR_6,
       VAR_10);
  } else {
   FUNC_5("%s%d: Read %d sector(s) from %lld to %p "
       "(0x%x): 0x%x\n", VAR_4->dd.d_dev->dv_name,
       VAR_4->dd.d_unit, VAR_7, VAR_6, VAR_8, FUNC_0(VAR_8),
       VAR_10);
  }
 }

 return (VAR_10);
}
