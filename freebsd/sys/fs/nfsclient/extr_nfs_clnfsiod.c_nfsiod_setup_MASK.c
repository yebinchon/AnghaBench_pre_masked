
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 int VAR_4;

 FUNC_2("vfs.nfs.iodmin", &VAR_2);
 FUNC_4();
 FUNC_0();

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 while (VAR_1 < VAR_2) {
  VAR_4 = FUNC_3();
  if (VAR_4 == -1)
   FUNC_5("nfsiod_setup: nfs_nfsiodnew failed");
 }
 FUNC_1();
}
