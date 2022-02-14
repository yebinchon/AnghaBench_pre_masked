
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ,struct sockaddr*,int*) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
    char VAR_2[VAR_0];



    struct sockaddr_in VAR_3;

    int VAR_4 = sizeof(VAR_3);






    (void) FUNC_0(VAR_1, VAR_2, sizeof(VAR_2), 0, (struct sockaddr *) & VAR_3, &VAR_4);
}
