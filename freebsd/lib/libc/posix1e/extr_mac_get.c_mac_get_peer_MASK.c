
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,struct mac*,int*) ;

int
FUNC_1(int VAR_2, struct mac *VAR_3)
{
 socklen_t VAR_4;

 VAR_4 = sizeof(*VAR_3);
 return (FUNC_0(VAR_2, VAR_0, VAR_1, VAR_3, &VAR_4));
}
