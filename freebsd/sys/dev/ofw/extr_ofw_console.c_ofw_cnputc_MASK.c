
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_1, int VAR_2)
{
 char VAR_3;

 if (VAR_2 == '\n') {
  VAR_3 = '\r';
  FUNC_0(VAR_0, &VAR_3, 1);
 }

 VAR_3 = VAR_2;
 FUNC_0(VAR_0, &VAR_3, 1);
}
