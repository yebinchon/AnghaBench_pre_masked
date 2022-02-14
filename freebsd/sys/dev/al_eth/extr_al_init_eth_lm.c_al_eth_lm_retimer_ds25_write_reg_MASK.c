
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct al_eth_lm_context {int (* i2c_read ) (int ,int ,int ,int ,int *) ;int (* i2c_write ) (int ,int ,int ,int ,int ) ;int retimer_i2c_addr; int retimer_bus_id; int i2c_context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct al_eth_lm_context *VAR_1,
         uint8_t VAR_2,
         uint8_t VAR_3,
         uint8_t VAR_4)
{
 uint8_t VAR_5;
 int VAR_6;

 VAR_6 = VAR_1->i2c_read(VAR_1->i2c_context,
      VAR_1->retimer_bus_id,
      VAR_1->retimer_i2c_addr,
      VAR_2,
      &VAR_5);

 if (VAR_6 != 0)
  return (VAR_0);

 VAR_5 &= ~(VAR_3);
 VAR_5 |= VAR_4;

 VAR_6 = VAR_1->i2c_write(VAR_1->i2c_context,
       VAR_1->retimer_bus_id,
       VAR_1->retimer_i2c_addr,
       VAR_2,
       VAR_5);

 if (VAR_6 != 0)
  return (VAR_0);

 return (0);
}
