
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_retstack {int dummy; } ;


 int FUNC_0 (struct pt_retstack*) ;
 int FUNC_1 (struct pt_retstack*) ;
 int FUNC_2 (struct pt_retstack*,scalar_t__*) ;
 int FUNC_3 (struct pt_retstack*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 struct ptunit_result FUNC_6 () ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct ptunit_result FUNC_8(void)
{
 struct pt_retstack VAR_1;
 uint64_t VAR_2, VAR_3;
 int VAR_4;

 FUNC_0(&VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_4 = FUNC_3(&VAR_1, VAR_3);
  FUNC_4(VAR_4, 0);
 }

 VAR_4 = FUNC_1(&VAR_1);
 FUNC_4(VAR_4, 0);

 for (VAR_3 = VAR_0; VAR_3 > 0;) {
  VAR_3 -= 1;

  VAR_4 = FUNC_2(&VAR_1, &VAR_2);
  FUNC_4(VAR_4, 0);
  FUNC_7(VAR_2, VAR_3);
 }

 VAR_4 = FUNC_1(&VAR_1);
 FUNC_5(VAR_4, 0);

 return FUNC_6();
}
