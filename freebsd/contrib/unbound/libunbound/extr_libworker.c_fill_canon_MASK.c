
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_result {int canonname; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct ub_result* VAR_0, uint8_t* VAR_1)
{
 char VAR_2[255+2];
 FUNC_0(VAR_1, VAR_2);
 VAR_0->canonname = FUNC_1(VAR_2);
 return VAR_0->canonname != 0;
}
