
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* va_token; } ;
typedef TYPE_1__ video_adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

int
FUNC_2(video_adapter_t *VAR_2, void *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0();
 if (VAR_2->va_token == ((void*)0)) {
  VAR_4 = VAR_0;
 } else if (VAR_2->va_token != VAR_3) {
  VAR_4 = VAR_1;
 } else {
  VAR_2->va_token = ((void*)0);
  VAR_4 = 0;
 }
 FUNC_1(VAR_5);
 return VAR_4;
}
