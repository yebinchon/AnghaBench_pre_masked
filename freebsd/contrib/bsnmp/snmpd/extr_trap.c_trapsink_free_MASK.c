
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapsink {int socket; } ;


 int FUNC_0 (int *,struct trapsink*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct trapsink*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct trapsink *VAR_2)
{
 FUNC_0(&VAR_1, VAR_2, VAR_0);
 if (VAR_2->socket != -1)
  (void)FUNC_1(VAR_2->socket);
 FUNC_2(VAR_2);
}
