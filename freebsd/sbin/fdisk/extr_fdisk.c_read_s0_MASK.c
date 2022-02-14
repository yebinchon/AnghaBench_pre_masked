
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parts; int * bootinst; int bootinst_size; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6()
{
 int VAR_7;

 VAR_5.bootinst_size = VAR_6;
 if (VAR_5.bootinst != ((void*)0))
  FUNC_1(VAR_5.bootinst);
 if ((VAR_5.bootinst = FUNC_3(VAR_5.bootinst_size)) == ((void*)0)) {
  FUNC_5("unable to allocate buffer to read fdisk "
        "partition table");
  return -1;
 }
 if (FUNC_4(0, VAR_5.bootinst) == -1) {
  FUNC_5("can't read fdisk partition table");
  return -1;
 }
 if (FUNC_2(&VAR_5.bootinst[VAR_1]) != VAR_0) {
  FUNC_5("invalid fdisk partition table found");

  return -1;
 }
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_0(
      &VAR_5.bootinst[VAR_2 + VAR_7 * VAR_3],
      &VAR_5.parts[VAR_7]);
 return 0;
}
