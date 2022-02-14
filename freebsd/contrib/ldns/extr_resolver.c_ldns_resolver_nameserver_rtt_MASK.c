
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_resolver ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int const*) ;
 size_t* FUNC_2 (int const*) ;

size_t
FUNC_3(const ldns_resolver *VAR_0, size_t VAR_1)
{
 size_t *VAR_2;

 FUNC_0(VAR_0 != ((void*)0));

 VAR_2 = FUNC_2(VAR_0);

 if (VAR_1 >= FUNC_1(VAR_0)) {

  return 0;
 } else {
  return VAR_2[VAR_1];
 }

}
