
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {char* desc; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_3, const char* VAR_4, int VAR_5)
{
 if (VAR_3->desc && (VAR_3->flags & VAR_0)) {
  FUNC_1(VAR_3->desc, VAR_1);
  VAR_3->flags &= ~VAR_0;
  VAR_3->desc = ((void*)0);
 }

 if (VAR_5 && VAR_4) {
  VAR_3->desc = FUNC_2(FUNC_4(VAR_4) + 1, VAR_1, VAR_2);
  if (VAR_3->desc) {
   FUNC_3(VAR_3->desc, VAR_4);
   VAR_3->flags |= VAR_0;
  }
 } else {

  VAR_3->desc = (char *)(uintptr_t) VAR_4;
 }

 FUNC_0();
}
