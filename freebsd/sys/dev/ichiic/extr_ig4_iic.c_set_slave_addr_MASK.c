
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int slave_valid; scalar_t__ last_slave; int use_10bit; } ;
typedef TYPE_1__ ig4iic_softc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(ig4iic_softc_t *VAR_7, uint8_t VAR_8)
{
 uint32_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 VAR_11 = 0;
 if (VAR_7->slave_valid && VAR_7->last_slave == VAR_8 &&
     VAR_7->use_10bit == VAR_11) {
  return;
 }
 VAR_7->use_10bit = VAR_11;




 FUNC_3(VAR_7, VAR_3);

 FUNC_2(VAR_7, 0);
 VAR_10 = FUNC_0(VAR_7, VAR_4);
 VAR_10 &= ~VAR_0;
 VAR_10 |= VAR_1;

 VAR_9 = VAR_8;
 if (VAR_7->use_10bit) {
  VAR_9 |= VAR_6;
  VAR_10 |= VAR_0;
 }
 FUNC_1(VAR_7, VAR_4, VAR_10);
 FUNC_1(VAR_7, VAR_5, VAR_9);
 FUNC_2(VAR_7, VAR_2);
 VAR_7->slave_valid = 1;
 VAR_7->last_slave = VAR_8;
}
