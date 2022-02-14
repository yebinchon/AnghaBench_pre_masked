
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {unsigned char* image; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct snd_cs4231*,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct snd_cs4231 *VAR_0, unsigned char VAR_1,
      unsigned char VAR_2)
{
 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_0->image[VAR_1] = VAR_2;
 FUNC_0();
}
