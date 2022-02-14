
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testcase_t {int flags; } ;
struct basic_test_data {int* pair; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct basic_test_data*) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(const struct testcase_t *VAR_5, void *VAR_6)
{
 struct basic_test_data *VAR_7 = VAR_6;

 if (VAR_5->flags & VAR_4)
  FUNC_3(((void*)0));

 if (VAR_5->flags & VAR_3) {
  if (VAR_7->pair[0] != -1)
   FUNC_4(VAR_7->pair[0]);
  if (VAR_7->pair[1] != -1)
   FUNC_4(VAR_7->pair[1]);
 }

 if (VAR_5->flags & VAR_2) {
  FUNC_0(0);
 }

 if (VAR_5->flags & VAR_1) {
  if (VAR_7->base) {
   FUNC_1(VAR_7->base);
   FUNC_2(VAR_7->base);
  }
 }

 if (VAR_5->flags & VAR_0)
  FUNC_6();

 FUNC_5(VAR_7);

 return 1;
}
