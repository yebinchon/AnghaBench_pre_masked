
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(int VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 FUNC_0(FUNC_2("pas2_pcm.c: static int pas_audio_open(int mode = %X)\n", VAR_7));

 FUNC_3(&VAR_3, VAR_9);
 if (VAR_4)
 {
  FUNC_4(&VAR_3, VAR_9);
  return -VAR_0;
 }
 VAR_4 = 1;
 FUNC_4(&VAR_3, VAR_9);

 if ((VAR_8 = FUNC_1(VAR_1)) < 0)
  return VAR_8;


 VAR_5 = 0;
 VAR_2 = VAR_7;

 return 0;
}
