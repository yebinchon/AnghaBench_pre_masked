
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int va_line_width; int va_window_size; scalar_t__ va_window; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int * VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_6(video_adapter_t *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7) {

        if (VAR_1 <= 0) {
   VAR_8 = FUNC_1();
   FUNC_5(VAR_6, VAR_4);
   FUNC_4(VAR_6, VAR_3);
   VAR_1++;
   VAR_5 = (u_char *)VAR_6->va_window;
   VAR_0 = VAR_6->va_window_size;
   VAR_2 = VAR_6->va_line_width;
   FUNC_2(VAR_8);
   FUNC_3(VAR_6);
  }
  FUNC_0(VAR_6);
 } else {
  VAR_1 = 0;
 }

    return 0;
}
