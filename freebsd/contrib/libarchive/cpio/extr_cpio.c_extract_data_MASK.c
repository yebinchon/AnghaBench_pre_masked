
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*,void const**,size_t*,int *) ;
 scalar_t__ FUNC_3 (struct archive*,void const*,size_t,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct archive *VAR_2, struct archive *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 const void *VAR_6;
 int64_t VAR_7;

 for (;;) {
  VAR_4 = FUNC_2(VAR_2, &VAR_6, &VAR_5, &VAR_7);
  if (VAR_4 == VAR_0)
   return (VAR_1);
  if (VAR_4 != VAR_1) {
   FUNC_5(FUNC_0(VAR_2),
       "%s", FUNC_1(VAR_2));
   FUNC_4(1);
  }
  VAR_4 = (int)FUNC_3(VAR_3, VAR_6, VAR_5, VAR_7);
  if (VAR_4 != VAR_1) {
   FUNC_5(FUNC_0(VAR_3),
       "%s", FUNC_1(VAR_3));
   return (VAR_4);
  }
 }
}
