
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_chinfo {int buffer; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_1, void *VAR_2)
{
 struct bcm2835_audio_chinfo *VAR_3 = VAR_2;
 void *VAR_4;

 VAR_4 = FUNC_1(VAR_3->buffer);
 if (VAR_4)
  FUNC_0(VAR_4, VAR_0);

 return (0);
}
