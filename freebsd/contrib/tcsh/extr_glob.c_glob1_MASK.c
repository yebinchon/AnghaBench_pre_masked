
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int s; } ;
typedef int glob_t ;
typedef scalar_t__ Char ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct strbuf*,scalar_t__*,int *,int) ;
 struct strbuf VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(Char *VAR_2, glob_t *VAR_3, int VAR_4)
{
    struct strbuf VAR_5 = VAR_1;
    int VAR_6;




    if (*VAR_2 == VAR_0)
 return (0);
    VAR_6 = FUNC_0(&VAR_5, VAR_2, VAR_3, VAR_4);
    FUNC_1(VAR_5.s);
    return VAR_6;
}
