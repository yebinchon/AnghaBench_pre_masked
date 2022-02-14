
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_2__ {int bootinst_size; int * bootinst; } ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,struct stat*) ;
 int * FUNC_5 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(void)
{
 const char *VAR_4;
 int VAR_5, VAR_6;
 struct stat VAR_7;

 VAR_4 = VAR_1 ? VAR_1 : "/boot/mbr";
 if ((VAR_5 = FUNC_6(VAR_4, VAR_0)) == -1 ||
     FUNC_4(VAR_5, &VAR_7) == -1)
  FUNC_1(1, "%s", VAR_4);
 if (VAR_7.st_size == 0)
  FUNC_2(1, "%s is empty, must not be.", VAR_4);
 if ((VAR_2.bootinst_size = VAR_7.st_size) % VAR_3 != 0)
  FUNC_2(1, "%s: length must be a multiple of sector size", VAR_4);
 if (VAR_2.bootinst != ((void*)0))
  FUNC_3(VAR_2.bootinst);
 if ((VAR_2.bootinst = FUNC_5(VAR_2.bootinst_size = VAR_7.st_size)) == ((void*)0))
  FUNC_2(1, "%s: unable to allocate read buffer", VAR_4);
 if ((VAR_6 = FUNC_7(VAR_5, VAR_2.bootinst, VAR_2.bootinst_size)) == -1 ||
     FUNC_0(VAR_5))
  FUNC_1(1, "%s", VAR_4);
 if (VAR_6 != VAR_2.bootinst_size)
  FUNC_2(1, "%s: short read", VAR_4);
}
