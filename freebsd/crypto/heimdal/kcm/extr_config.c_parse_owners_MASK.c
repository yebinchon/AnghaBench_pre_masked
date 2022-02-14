
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct passwd {int pw_gid; int pw_uid; int pw_name; } ;
struct group {int gr_gid; } ;
typedef TYPE_1__* kcm_ccache ;
typedef int gid_t ;
struct TYPE_3__ {int gid; int uid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 struct group* FUNC_1 (int ) ;
 struct group* FUNC_2 (scalar_t__*) ;
 struct passwd* FUNC_3 (scalar_t__*) ;
 struct passwd* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__* FUNC_6 (int ) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_7(kcm_ccache VAR_4)
{
    uid_t VAR_5 = 0;
    gid_t VAR_6 = 0;
    struct passwd *VAR_7;
    struct group *VAR_8;
    int VAR_9 = 0;
    int VAR_10 = 0;

    if (VAR_3 != ((void*)0)) {
 if (FUNC_5((unsigned char)VAR_3[0])) {
     VAR_7 = FUNC_4(FUNC_0(VAR_3));
 } else {
     VAR_7 = FUNC_3(VAR_3);
 }
 if (VAR_7 == ((void*)0)) {
     return VAR_1;
 }

 VAR_3 = FUNC_6(VAR_7->pw_name);
 if (VAR_3 == ((void*)0)) {
     return VAR_0;
 }

 VAR_5 = VAR_7->pw_uid; VAR_9 = 1;
 VAR_6 = VAR_7->pw_gid; VAR_10 = 1;
    }

    if (VAR_2 != ((void*)0)) {
 if (FUNC_5((unsigned char)VAR_2[0])) {
     VAR_8 = FUNC_1(FUNC_0(VAR_2));
 } else {
     VAR_8 = FUNC_2(VAR_2);
 }
 if (VAR_8 == ((void*)0)) {
     return VAR_1;
 }

 VAR_6 = VAR_8->gr_gid; VAR_10 = 1;
    }

    if (VAR_9)
 VAR_4->uid = VAR_5;
    else
 VAR_4->uid = 0;

    if (VAR_10)
 VAR_4->gid = VAR_6;
    else
 VAR_4->gid = 0;

    return 0;
}
