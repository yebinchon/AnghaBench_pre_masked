
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mystate {size_t level; int * sbuf; } ;
typedef char XML_Char ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, const XML_Char *VAR_1, int VAR_2)
{
 struct mystate *VAR_3;
 const char *VAR_4, *VAR_5;

 VAR_3 = VAR_0;

 VAR_4 = VAR_1;
 VAR_5 = VAR_1 + VAR_2-1;
 for (; FUNC_0(*VAR_4) && VAR_4 < VAR_5; VAR_4++)
  ;
 for (; FUNC_0(*VAR_5) && VAR_5 > VAR_4; VAR_5++)
  ;
 if (VAR_5 != VAR_4 || (*VAR_4 != '\0' && !FUNC_0(*VAR_4)))
  FUNC_1(VAR_3->sbuf[VAR_3->level], VAR_4, VAR_5-VAR_4+1);
}
