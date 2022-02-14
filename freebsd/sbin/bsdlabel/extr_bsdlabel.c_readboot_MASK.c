
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__) ;
 char* VAR_3 ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_4;
 struct stat VAR_5;

 if (VAR_3 == ((void*)0))
  VAR_3 = "/boot/boot";
 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (VAR_4 < 0)
  FUNC_1(1, "cannot open %s", VAR_3);
 FUNC_3(VAR_4, &VAR_5);
 if (VAR_5.st_size <= VAR_0) {
  if (FUNC_5(VAR_4, VAR_2, VAR_5.st_size) != VAR_5.st_size)
   FUNC_1(1, "read error %s", VAR_3);
  FUNC_0(VAR_4);
  return;
 }
 FUNC_2(1, "boot code %s is wrong size", VAR_3);
}
