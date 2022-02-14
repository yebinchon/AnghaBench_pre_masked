
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct TYPE_7__ {int sa_family; } ;
struct TYPE_6__ {int sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*,int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sockaddr_in*,int ) ;
 int VAR_9 ;
 int FUNC_5 (char*) ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13 (void)
{
    int VAR_11;

    VAR_4 = FUNC_6 (VAR_7->sa_family, VAR_2, 0);
    if (VAR_4 < 0) {
 FUNC_12 ("socket");
 return (1);
    }
    if (VAR_8 & VAR_3)
 FUNC_9 (VAR_4);
    if (FUNC_1 ("EPSV") != VAR_0) {
 if (FUNC_1 ("PASV") != VAR_0) {
     FUNC_5 ("Passive mode refused.\n");
     goto bad;
 }
    }





    VAR_11 = FUNC_3 (VAR_9);
    if (VAR_11 > 0) {
 VAR_5->sa_family = VAR_7->sa_family;
 FUNC_8 (VAR_5,
         FUNC_7 (VAR_6),
         VAR_11);
    } else {
 if (FUNC_4 ((struct sockaddr_in *)VAR_5, VAR_9) < 0)
     goto bad;
    }

    if (FUNC_2 (VAR_4, VAR_5, FUNC_11 (VAR_5)) < 0) {
 FUNC_12 ("connect");
 goto bad;
    }



    return (0);
bad:
    FUNC_0 (VAR_4);
    VAR_4 = -1;
    VAR_10 = 1;
    return (1);
}
