
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct confset {size_t cs_n; struct conf const* cs_c; } ;
struct conf {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct conf*,struct conf const*) ;
 int FUNC_1 (char*,int,char*,char*,struct conf const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 void FUNC_5 (struct conf*,struct conf const*) ;

__attribute__((used)) static size_t
FUNC_6(const struct confset *VAR_3, struct conf *VAR_4,
    void (*VAR_5)(struct conf *, const struct conf *))
{
 char VAR_6[VAR_0];
 size_t VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->cs_n; VAR_7++) {
  if (VAR_2)
   FUNC_2)(VAR_1, "%s", FUNC_1(VAR_6, sizeof(VAR_6),
       "check:\t", "", &VAR_3->cs_c[VAR_7]));
  if (FUNC_0(VAR_4, &VAR_3->cs_c[VAR_7])) {
   if (VAR_2)
    FUNC_2)(VAR_1, "%s",
        FUNC_1(VAR_6, sizeof(VAR_6),
        "found:\t", "", &VAR_3->cs_c[VAR_7]));
   (*VAR_5)(VAR_4, &VAR_3->cs_c[VAR_7]);
   break;
  }
 }
 return VAR_7;
}
