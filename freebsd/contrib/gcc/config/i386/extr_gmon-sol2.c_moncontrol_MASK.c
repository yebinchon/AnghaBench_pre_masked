
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phdr {int dummy; } ;


 int FUNC_0 (unsigned short*,scalar_t__,long,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(int VAR_5)
{
    if (VAR_5)
    {

      FUNC_0((unsigned short *)(VAR_3 + sizeof(struct phdr)),
      VAR_4 - sizeof(struct phdr),
      (long)VAR_1, VAR_2);

      VAR_0 = 0;
    } else {

      FUNC_0((unsigned short *)0, 0, 0, 0);
      VAR_0 = 3;
    }
}
