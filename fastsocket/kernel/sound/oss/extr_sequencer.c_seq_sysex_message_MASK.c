
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* send_sysex ) (unsigned int,unsigned char*,int) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned char*,int) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_3)
{
 unsigned int VAR_4 = VAR_3[1];
 int VAR_5, VAR_6 = 0;
 unsigned char *VAR_7 = &VAR_3[2];

 if (VAR_4 > VAR_0)
  return;
 if (!(VAR_2 & (1 << VAR_4)))
  return;
 if (!VAR_1[VAR_4])
  return;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < 6 && VAR_7[VAR_5] != 0xff; VAR_5++)
  VAR_6 = VAR_5 + 1;

 if (!VAR_1[VAR_4]->send_sysex)
  return;
 if (VAR_6 > 0)
  VAR_1[VAR_4]->send_sysex(VAR_4, VAR_7, VAR_6);
}
