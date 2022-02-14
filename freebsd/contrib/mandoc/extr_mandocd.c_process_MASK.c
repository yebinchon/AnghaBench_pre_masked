
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_meta {scalar_t__ macroset; } ;
struct mparse {int dummy; } ;
typedef enum outt { ____Placeholder_outt } outt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (void*,struct roff_meta*) ;
 int FUNC_1 (void*,struct roff_meta*) ;
 int FUNC_2 (struct mparse*,int ,char*) ;
 struct roff_meta* FUNC_3 (struct mparse*) ;
 int FUNC_4 (void*,struct roff_meta*) ;
 int FUNC_5 (void*,struct roff_meta*) ;

__attribute__((used)) static void
FUNC_6(struct mparse *VAR_3, enum outt VAR_4, void *VAR_5)
{
 struct roff_meta *VAR_6;

 FUNC_2(VAR_3, VAR_2, "<unixfd>");
 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6->macroset == VAR_1) {
  switch (VAR_4) {
  case 130:
  case 128:
   FUNC_5(VAR_5, VAR_6);
   break;
  case 129:
   FUNC_1(VAR_5, VAR_6);
   break;
  }
 }
 if (VAR_6->macroset == VAR_0) {
  switch (VAR_4) {
  case 130:
  case 128:
   FUNC_4(VAR_5, VAR_6);
   break;
  case 129:
   FUNC_0(VAR_5, VAR_6);
   break;
  }
 }
}
