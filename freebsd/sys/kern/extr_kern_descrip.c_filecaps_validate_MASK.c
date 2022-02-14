
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filecaps {int fc_fcntls; int fc_nioctls; int fc_rights; int * fc_ioctls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(const struct filecaps *VAR_3, const char *VAR_4)
{

 FUNC_0(FUNC_2(&VAR_3->fc_rights),
     ("%s: invalid rights", VAR_4));
 FUNC_0((VAR_3->fc_fcntls & ~VAR_1) == 0,
     ("%s: invalid fcntls", VAR_4));
 FUNC_0(VAR_3->fc_fcntls == 0 ||
     FUNC_1(&VAR_3->fc_rights, VAR_0),
     ("%s: fcntls without CAP_FCNTL", VAR_4));
 FUNC_0(VAR_3->fc_ioctls != ((void*)0) ? VAR_3->fc_nioctls > 0 :
     (VAR_3->fc_nioctls == -1 || VAR_3->fc_nioctls == 0),
     ("%s: invalid ioctls", VAR_4));
 FUNC_0(VAR_3->fc_nioctls == 0 ||
     FUNC_1(&VAR_3->fc_rights, VAR_2),
     ("%s: ioctls without CAP_IOCTL", VAR_4));
}
