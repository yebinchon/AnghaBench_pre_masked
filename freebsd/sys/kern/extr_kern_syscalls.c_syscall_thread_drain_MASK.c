
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sysent {int sy_thrcnt; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int*,int,int ) ;
 scalar_t__ FUNC_2 (int*,int,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(struct sysent *VAR_4)
{
 u_int32_t VAR_5, VAR_6;

 do {
  VAR_6 = VAR_4->sy_thrcnt;
  FUNC_0((VAR_6 & VAR_2) == 0,
      ("drain on static syscall"));
  VAR_5 = VAR_6 | VAR_1;
 } while (FUNC_2(&VAR_4->sy_thrcnt, VAR_6, VAR_5) == 0);
 while (FUNC_1(&VAR_4->sy_thrcnt, VAR_1,
     VAR_0) == 0)
  FUNC_3("scdrn", VAR_3/2);
}
