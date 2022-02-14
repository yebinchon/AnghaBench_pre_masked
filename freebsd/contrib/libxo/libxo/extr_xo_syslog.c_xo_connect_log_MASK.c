
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int saddr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (void)
{
    if (&FUNC_4) {
 FUNC_4();
 return;
    }

    struct sockaddr_un VAR_11;

    if (VAR_9 == -1) {
        int VAR_12 = VAR_5;



        if ((VAR_9 = FUNC_2(VAR_0, VAR_12, 0)) == -1)
            return;
    }
    if (VAR_9 != -1 && VAR_10 == VAR_3) {



        VAR_11.sun_family = VAR_0;
        if (VAR_10 == VAR_3) {
            (void) FUNC_0(VAR_9);
            VAR_9 = -1;
        }
    }
}
