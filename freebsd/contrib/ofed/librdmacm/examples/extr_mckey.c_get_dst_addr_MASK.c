
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ib {int sib_addr; int sib_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct sockaddr*) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (struct sockaddr_ib*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(char *VAR_3, struct sockaddr *VAR_4)
{
 struct sockaddr_ib *VAR_5;

 if (!VAR_2)
  return FUNC_0(VAR_3, VAR_4);

 VAR_5 = (struct sockaddr_ib *) VAR_4;
 FUNC_2(VAR_5, 0, sizeof *VAR_5);
 VAR_5->sib_family = VAR_0;
 FUNC_1(VAR_1, VAR_3, &VAR_5->sib_addr);
 return 0;
}
