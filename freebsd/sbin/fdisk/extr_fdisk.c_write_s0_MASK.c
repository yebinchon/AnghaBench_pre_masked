
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bootinst_size; int * bootinst; int * parts; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int
FUNC_5()
{
 int VAR_8, VAR_9;

 if (VAR_5) {
  FUNC_2();
  return 0;
 }
 for(VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_0(&VAR_6.bootinst[VAR_2 + VAR_9 * VAR_3],
      &VAR_6.parts[VAR_9]);
 FUNC_1(&VAR_6.bootinst[VAR_1], VAR_0);
 for(VAR_8 = 0; VAR_8 < VAR_6.bootinst_size / VAR_7; VAR_8++)
  if (FUNC_4(VAR_8,
          &VAR_6.bootinst[VAR_8 * VAR_7]) == -1) {
   FUNC_3("can't write fdisk partition table");
   return -1;
  }
 return(0);
}
