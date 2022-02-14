
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lc_numeric_T {char* decimal_point; int grouping; } ;
struct xlocale_numeric {int buffer; struct lc_numeric_T locale; } ;
struct TYPE_2__ {char* decimal_point; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int*,int *,char*,int ,int ,char const**) ;

__attribute__((used)) static int
FUNC_2(struct xlocale_numeric *VAR_4, int *VAR_5, int *VAR_6,
  const char *VAR_7)
{
 int VAR_8;
 struct lc_numeric_T *VAR_9 = &VAR_4->locale;

 VAR_8 = FUNC_1(VAR_7, VAR_5,
  &VAR_4->buffer, "LC_NUMERIC",
  VAR_0, VAR_0,
  (const char**)VAR_9);
 if (VAR_8 != VAR_2)
  *VAR_6= 1;
 if (VAR_8 == VAR_3) {

  if (*VAR_9->decimal_point == '\0')
   VAR_9->decimal_point =
       VAR_1.decimal_point;
  VAR_9->grouping =
      FUNC_0(VAR_9->grouping);
 }
 return (VAR_8);
}
