
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
typedef void iscache_fixture ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (int ,int *,int (*) (void*),void*) ;
 int VAR_1 ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct iscache_fixture *VAR_2,
       int (*VAR_3)(void *))
{
 int VAR_4;
 VAR_4 = VAR_3(VAR_2);
 FUNC_0(VAR_4, 0);

 return FUNC_1();
}
