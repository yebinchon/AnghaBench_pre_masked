
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct snd_info_buffer*,char*,...) ;
 int FUNC_1 (unsigned int,char*,int) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_1, unsigned int VAR_2)
{
 char VAR_3[VAR_0];

 FUNC_0(VAR_1, "    bits [0x%x]:", (VAR_2 >> 16) & 0xff);
 FUNC_1(VAR_2, VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_1, "%s\n", VAR_3);
}
