
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t u_int ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,size_t) ;

__attribute__((used)) static u_int
FUNC_5(void *VAR_3, u_int VAR_4)
{
 uint8_t *VAR_5;
 size_t VAR_6, VAR_7;
 uint64_t VAR_8;

 FUNC_2(VAR_1, VAR_2, VAR_0);
 VAR_5 = VAR_3;
 for (VAR_6 = VAR_4; VAR_6 > 0; VAR_6 -= VAR_7) {
  VAR_7 = FUNC_0(FUNC_1(&VAR_8), VAR_6);
  FUNC_4(VAR_5, &VAR_8, VAR_7);
  VAR_5 += VAR_7;
 }
 FUNC_3(VAR_1, VAR_2);

 return (VAR_4);
}
