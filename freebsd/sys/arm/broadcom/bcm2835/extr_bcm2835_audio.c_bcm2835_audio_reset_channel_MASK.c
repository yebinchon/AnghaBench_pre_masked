
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_chinfo {int buffer; scalar_t__ unsubmittedptr; int available_space; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bcm2835_audio_chinfo *VAR_1)
{

 VAR_1->available_space = VAR_0;
 VAR_1->unsubmittedptr = 0;
 FUNC_0(VAR_1->buffer);
}
