
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct packet_fixture {int decoder; int encoder; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct packet_fixture *VAR_0)
{
 FUNC_0(&VAR_0->encoder);
 FUNC_1(&VAR_0->decoder);

 return FUNC_2();
}
