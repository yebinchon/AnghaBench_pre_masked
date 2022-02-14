
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sis_softc {scalar_t__ sis_type; scalar_t__ sis_rev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct sis_softc *VAR_4, const uint8_t *VAR_5)
{
 uint32_t VAR_6;


 VAR_6 = FUNC_0(VAR_5, VAR_0);







 if (VAR_4->sis_type == VAR_3)
  return (VAR_6 >> 23);
 else if (VAR_4->sis_rev >= VAR_1 ||
     VAR_4->sis_rev == VAR_2)
  return (VAR_6 >> 24);
 else
  return (VAR_6 >> 25);
}
