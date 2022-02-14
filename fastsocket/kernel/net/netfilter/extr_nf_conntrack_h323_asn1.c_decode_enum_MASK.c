
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field_t {int attr; int sz; int name; } ;
typedef int bitstr_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(bitstr_t *VAR_3, const struct field_t *VAR_4,
                       char *VAR_5, int VAR_6)
{
 FUNC_2("%*.s%s\n", VAR_6 * VAR_2, " ", VAR_4->name);

 if ((VAR_4->attr & VAR_0) && FUNC_3(VAR_3)) {
  FUNC_1(VAR_3, 7);
 } else {
  FUNC_1(VAR_3, VAR_4->sz);
 }

 FUNC_0(VAR_3, 0);
 return VAR_1;
}
