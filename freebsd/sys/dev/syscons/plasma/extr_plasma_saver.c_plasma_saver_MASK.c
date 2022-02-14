
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int va_window_size; scalar_t__ va_window; } ;
typedef TYPE_1__ video_adapter_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 unsigned char* VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,unsigned char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_7(video_adapter_t *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_6) {

  if (VAR_1 <= 0) {
   VAR_7 = FUNC_1();
   FUNC_6(VAR_5, VAR_3);
   FUNC_4(VAR_5, (unsigned char *)VAR_2);
   FUNC_5(VAR_5, 0);
   VAR_1++;
   VAR_4 = (unsigned char *)VAR_5->va_window;
   VAR_0 = VAR_5->va_window_size;
   FUNC_2(VAR_7);
   FUNC_3(VAR_5);
  }

  FUNC_0(VAR_5);
 } else {
  VAR_1 = 0;
 }
 return (0);
}
