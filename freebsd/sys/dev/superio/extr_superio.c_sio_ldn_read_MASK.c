
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct siosc {scalar_t__ enable_reg; scalar_t__ current_ldn; int io_res; int conf_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct siosc*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static uint8_t
FUNC_4(struct siosc *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 FUNC_1(&VAR_1->conf_lock, VAR_0);
 if (VAR_3 >= VAR_1->enable_reg) {
  FUNC_2(VAR_1, VAR_2);
  FUNC_0(VAR_1->current_ldn == VAR_2, ("sio_ldn_select failed"));
 }
 return (FUNC_3(VAR_1->io_res, VAR_3));
}
