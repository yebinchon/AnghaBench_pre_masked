
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
typedef int off_t ;
struct TYPE_8__ {int attr; int clus; int size; } ;
struct TYPE_7__ {int dirents; } ;
typedef TYPE_1__ DOS_FS ;
typedef TYPE_2__ DOS_DE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static off_t
FUNC_4(DOS_FS *VAR_1, DOS_DE *VAR_2)
{
   u_long VAR_3;
   u_int VAR_4;
   int VAR_5;

   if (!(VAR_3 = FUNC_2(VAR_2->size)) && VAR_2->attr & VAR_0) {
      if (!(VAR_4 = FUNC_1(VAR_2->clus)))
         VAR_3 = VAR_1->dirents * sizeof(DOS_DE);
      else {
         if ((VAR_5 = FUNC_3(VAR_1, VAR_4)) == -1)
            return (VAR_5);
         VAR_3 = FUNC_0(VAR_1, VAR_5);
      }
   }
   return (VAR_3);
}
