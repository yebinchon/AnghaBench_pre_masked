
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rk_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6 (rk_socket_t VAR_2, rk_socket_t *VAR_3)
{
    rk_socket_t VAR_4;

    VAR_4 = FUNC_0(VAR_2, ((void*)0), ((void*)0));
    if(FUNC_3(VAR_4))
 FUNC_2 (1, "accept");

    if (VAR_3) {

 *VAR_3 = VAR_4;

    } else {
 int VAR_5 = FUNC_5(VAR_4, 0);





 FUNC_1(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_1);

 FUNC_4(VAR_4);
    }
}
