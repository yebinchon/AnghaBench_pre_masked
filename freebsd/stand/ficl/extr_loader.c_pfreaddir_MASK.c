
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct stat {int st_blksize; } ;
struct dirent {int d_name; scalar_t__ d_reclen; } ;
typedef int off_t ;
struct TYPE_4__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int ) ;
 char* FUNC_5 (int) ;
 struct dirent* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_12(FICL_VM *VAR_4)
{
    struct dirent *VAR_5;
    int VAR_6;





    VAR_6 = FUNC_7(VAR_4->pStack);
    VAR_5 = FUNC_6(VAR_6);

    if (VAR_5 != ((void*)0)) {
        FUNC_9(VAR_4->pStack, VAR_5->d_name);
        FUNC_8(VAR_4->pStack, FUNC_10(VAR_5->d_name));
        FUNC_8(VAR_4->pStack, VAR_1);
    } else {
        FUNC_8(VAR_4->pStack, VAR_0);
    }
}
