
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int dummy; } ;
struct domainlist {int dummy; } ;


 int FUNC_0 (struct domainlist*,struct domainset*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct domainset* FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct domainlist *VAR_4, int VAR_5)
{
 struct domainset *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_1(VAR_2, VAR_1 | VAR_0);
  FUNC_0(VAR_4, VAR_6, VAR_3);
 }
}
