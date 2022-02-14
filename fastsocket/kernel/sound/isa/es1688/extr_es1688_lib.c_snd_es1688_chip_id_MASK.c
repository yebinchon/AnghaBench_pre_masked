
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es1688 {scalar_t__ hardware; int version; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*,int) ;

__attribute__((used)) static const char *FUNC_1(struct snd_es1688 *VAR_1)
{
 static char VAR_2[16];
 FUNC_0(VAR_2, "ES%s688 rev %i", VAR_1->hardware == VAR_0 ? "" : "1", VAR_1->version & 0x0f);
 return VAR_2;
}
