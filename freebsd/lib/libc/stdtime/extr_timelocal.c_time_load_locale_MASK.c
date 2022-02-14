
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lc_time_T {int dummy; } ;
struct xlocale_time {int buffer; struct lc_time_T locale; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*,int *,char*,int ,int ,char const**) ;

__attribute__((used)) static int
FUNC_1(struct xlocale_time *VAR_1, int *VAR_2, const char *VAR_3)
{
 struct lc_time_T *VAR_4 = &VAR_1->locale;
 return (FUNC_0(VAR_3, VAR_2,
   &VAR_1->buffer, "LC_TIME",
   VAR_0, VAR_0,
   (const char **)VAR_4));
}
