
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ va_window; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int * VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_6) {

  if (VAR_2 <= 0) {
   VAR_7 = FUNC_1();
   FUNC_3(VAR_5, VAR_1);
   VAR_4 = (u_char *)VAR_5->va_window;
   VAR_3 = VAR_0 + 1;
   ++VAR_2;
   FUNC_2(VAR_7);
  }


  FUNC_0(VAR_5);
 }
 else {
  VAR_2 = 0;
 }
 return 0;
}
