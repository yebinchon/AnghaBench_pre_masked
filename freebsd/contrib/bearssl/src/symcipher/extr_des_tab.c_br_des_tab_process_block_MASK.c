
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned char*,int ) ;
 int FUNC_4 (int *,int *,int const*) ;

void
FUNC_5(unsigned VAR_0, const uint32_t *VAR_1, void *VAR_2)
{
 unsigned char *VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_3 = VAR_2;
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_0(VAR_3 + 4);
 FUNC_1(&VAR_4, &VAR_5);
 while (VAR_0 -- > 0) {
  FUNC_4(&VAR_4, &VAR_5, VAR_1);
  VAR_1 += 32;
 }
 FUNC_2(&VAR_4, &VAR_5);
 FUNC_3(VAR_3, VAR_4);
 FUNC_3(VAR_3 + 4, VAR_5);
}
