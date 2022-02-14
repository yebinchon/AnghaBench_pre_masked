
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char const*,int,int *) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(const char *VAR_6)
{
    if (FUNC_0(VAR_6)) {
 chtype VAR_7 = VAR_1;
 int VAR_8, VAR_9;

 FUNC_2(VAR_5, VAR_4);
 (void) FUNC_6(VAR_5, VAR_3 - 1, 0);
 (void) FUNC_5(VAR_5);
 (void) FUNC_1(' ');
 FUNC_3(VAR_5, VAR_6, VAR_2 - 1, &VAR_7);
 if (VAR_4 & VAR_0) {

     FUNC_4(VAR_5, VAR_8, VAR_9);
     (void) VAR_8;
     while (VAR_9 < VAR_2) {
  (void) FUNC_1(' ');
  ++VAR_9;
     }
 }
 (void) FUNC_7(VAR_5);
    }
}
