
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {scalar_t__ res; char* str; scalar_t__ base; scalar_t__ lo; scalar_t__ hi; int rstatus; int * end; } ;
typedef scalar_t__ intmax_t ;


 int FUNC_0 (char*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct test *VAR_0, intmax_t VAR_1, char *VAR_2, int VAR_3)
{

 if (VAR_1 != VAR_0->res)
  FUNC_0("strtoi(%s, &end, %d, %jd, %jd, &rstatus)"
      " failed (rv = %jd)", VAR_0->str, VAR_0->base, VAR_0->lo, VAR_0->hi, VAR_1);

 if (VAR_3 != VAR_0->rstatus)
  FUNC_0("strtoi(%s, &end, %d, %jd, %jd, &rstatus)"
      " failed (rstatus: %d ('%s'))",
      VAR_0->str, VAR_0->base, VAR_0->lo, VAR_0->hi, VAR_3, FUNC_2(VAR_3));

 if ((VAR_0->end != ((void*)0) && FUNC_1(VAR_0->end, VAR_2) != 0) ||
     (VAR_0->end == ((void*)0) && *VAR_2 != '\0'))
  FUNC_0("invalid end pointer ('%s') from "
      "strtoi(%s, &end, %d, %jd, %jd, &rstatus)",
       VAR_2, VAR_0->str, VAR_0->base, VAR_0->lo, VAR_0->hi);
}
