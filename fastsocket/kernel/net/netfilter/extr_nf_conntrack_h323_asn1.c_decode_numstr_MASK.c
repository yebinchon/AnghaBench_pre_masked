
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field_t {unsigned int lb; int sz; int name; } ;
typedef int bitstr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int VAR_1 ;
 unsigned int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(bitstr_t *VAR_2, const struct field_t *VAR_3,
                         char *VAR_4, int VAR_5)
{
 unsigned int VAR_6;

 FUNC_3("%*.s%s\n", VAR_5 * VAR_1, " ", VAR_3->name);


 VAR_6 = FUNC_4(VAR_2, VAR_3->sz) + VAR_3->lb;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, (VAR_6 << 2));

 FUNC_1(VAR_2, 0);
 return VAR_0;
}
