
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct pt_packet {int dummy; } ;


 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (struct pt_packet const*) ;
 int FUNC_2 (int const,int const) ;

__attribute__((used)) static struct ptunit_result FUNC_3(const struct pt_packet *VAR_0,
           const struct pt_packet *VAR_1)
{
 const uint8_t *VAR_2, *VAR_3;
 size_t VAR_4;

 FUNC_1(VAR_0);
 FUNC_1(VAR_1);

 VAR_2 = (const uint8_t *) VAR_0;
 VAR_3 = (const uint8_t *) VAR_1;

 for (VAR_4 = 0; VAR_4 < sizeof(*VAR_0); ++VAR_4)
  FUNC_2(VAR_2[VAR_4], VAR_3[VAR_4]);

 return FUNC_0();
}
