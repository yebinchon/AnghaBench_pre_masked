
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int dummy; } ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const struct nf_conn *VAR_0, const char *VAR_1,
        const char *VAR_2, int *VAR_3)
{
 int VAR_4 = 0;
 while (VAR_1 < VAR_2 && FUNC_0(*VAR_1)) {
  VAR_1++;
  VAR_4++;
 }
 return VAR_4;
}
