
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(
 int VAR_4
 )
{
 int VAR_5 = VAR_0;


 if (FUNC_0(VAR_4, VAR_2, (caddr_t)&VAR_5) == -1)
 {
  FUNC_1(VAR_1, "rawdcf_init: WARNING: ioctl(fd, TIOCMSET, [C|T]IOCM_DTR): %m");
 }
}
