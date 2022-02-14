
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int c_rmask; int c_family; int c_name; } ;


 int FUNC_0 (char*,size_t,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static const char *
FUNC_3(char *VAR_0, size_t VAR_1, const struct conf *VAR_2)
{
 FUNC_2(VAR_0, FUNC_1(VAR_2->c_name), VAR_1);
 FUNC_0(VAR_0, VAR_1, VAR_2->c_family, VAR_2->c_rmask);
 return VAR_0;
}
