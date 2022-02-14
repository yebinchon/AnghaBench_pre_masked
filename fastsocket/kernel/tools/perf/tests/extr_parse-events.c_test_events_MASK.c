
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test__event_st {int name; } ;


 int FUNC_0 (char*,unsigned int,int ) ;
 int FUNC_1 (struct test__event_st*) ;

__attribute__((used)) static int FUNC_2(struct test__event_st *VAR_0, unsigned VAR_1)
{
 int VAR_2, VAR_3 = 0;
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct test__event_st *VAR_5 = &VAR_0[VAR_4];

  FUNC_0("running test %d '%s'\n", VAR_4, VAR_5->name);
  VAR_2 = FUNC_1(VAR_5);
  if (VAR_2)
   VAR_3 = VAR_2;
 }

 return VAR_3;
}
