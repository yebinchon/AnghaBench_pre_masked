
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bwi_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_3(struct bwi_softc *VAR_9)
{
 uint32_t VAR_10;


 VAR_10 = FUNC_2(FUNC_0(VAR_9, VAR_5), VAR_6);
 FUNC_1(VAR_9, VAR_2 | VAR_3 | VAR_4,
  "bus rev %u\n", VAR_10);

 if (VAR_10 == VAR_0)
  return VAR_7;
 else if (VAR_10 == VAR_1)
  return VAR_8;
 else
  return (VAR_7 | VAR_8);
}
