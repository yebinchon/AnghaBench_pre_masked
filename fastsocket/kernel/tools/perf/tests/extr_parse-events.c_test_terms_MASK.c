
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test__term {int str; } ;


 int FUNC_0 (char*,unsigned int,int ) ;
 int FUNC_1 (struct test__term*) ;

__attribute__((used)) static int FUNC_2(struct test__term *VAR_0, unsigned VAR_1)
{
 int VAR_2 = 0;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct test__term *VAR_4 = &VAR_0[VAR_3];

  FUNC_0("running test %d '%s'\n", VAR_3, VAR_4->str);
  VAR_2 = FUNC_1(VAR_4);
  if (VAR_2)
   break;
 }

 return VAR_2;
}
