
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigevent {int dummy; } ;
struct sigev_node {int sn_dispatch; int sn_id; } ;
typedef int sigev_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sigev_node* FUNC_0 (int ,struct sigevent*,int *,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct sigev_node*,struct sigevent*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sigev_node*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(sigev_id_t VAR_5, struct sigevent *VAR_6,
    struct sigev_node **VAR_7, struct sigevent *VAR_8)
{
 if (FUNC_1()) {

  VAR_4 = VAR_1;
  return (-1);
 }

 *VAR_7 = FUNC_0(VAR_2, VAR_6, ((void*)0), 1);
 if (*VAR_7 == ((void*)0)) {
  VAR_4 = VAR_0;
  return (-1);
 }

 *VAR_8 = *VAR_6;
 (*VAR_7)->sn_id = VAR_5;
 FUNC_2(*VAR_7, VAR_6, (*VAR_7)->sn_id);
 (*VAR_7)->sn_dispatch = VAR_3;

 FUNC_3();
 FUNC_5(*VAR_7);
 FUNC_4();

 return (0);
}
