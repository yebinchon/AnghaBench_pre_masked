
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mpoa_client {int number_of_mps_macs; int * mps_macs; TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static const uint8_t *FUNC_4(struct mpoa_client *VAR_3,
    const uint8_t *VAR_4,
    const uint8_t *VAR_5, uint8_t VAR_6,
    uint8_t VAR_7)
{
 int VAR_8;
 VAR_8 = (VAR_6 > 1) ? VAR_6 : 1;

 if (VAR_3->number_of_mps_macs != VAR_8) {
  if (VAR_3->number_of_mps_macs != 0) FUNC_0(VAR_3->mps_macs);
  VAR_3->number_of_mps_macs = 0;
  VAR_3->mps_macs = FUNC_1(VAR_8*VAR_0, VAR_1);
  if (VAR_3->mps_macs == ((void*)0)) {
   FUNC_3("mpoa: (%s) copy_macs: out of mem\n", VAR_3->dev->name);
   return ((void*)0);
  }
 }
 FUNC_2(VAR_3->mps_macs, VAR_4, VAR_0);
 VAR_5 += 20; if (VAR_7 == VAR_2) VAR_5 += 20;
 if (VAR_6 > 0)
  FUNC_2(VAR_3->mps_macs, VAR_5, VAR_6*VAR_0);
 VAR_5 += VAR_6*VAR_0;
 VAR_3->number_of_mps_macs = VAR_8;

 return VAR_5;
}
