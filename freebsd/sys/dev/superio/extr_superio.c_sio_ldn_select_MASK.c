
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct siosc {scalar_t__ current_ldn; int ldn_reg; int io_res; int conf_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct siosc *VAR_1, uint8_t VAR_2)
{
 FUNC_0(&VAR_1->conf_lock, VAR_0);
 if (VAR_2 == VAR_1->current_ldn)
  return;
 FUNC_1(VAR_1->io_res, VAR_1->ldn_reg, VAR_2);
 VAR_1->current_ldn = VAR_2;
}
