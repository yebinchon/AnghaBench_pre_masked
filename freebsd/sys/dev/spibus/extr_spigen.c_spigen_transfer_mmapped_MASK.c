
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spigen_transfer_mmapped {scalar_t__ stm_command_length; scalar_t__ stm_data_length; } ;
struct spigen_mmap {scalar_t__ bufsize; scalar_t__ kvaddr; } ;
struct spi_command {scalar_t__ tx_cmd_sz; scalar_t__ rx_cmd_sz; scalar_t__ tx_data_sz; scalar_t__ rx_data_sz; void* rx_data; void* tx_data; void* rx_cmd; void* tx_cmd; } ;
struct cdev {int si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct spi_command*) ;
 struct spi_command VAR_1 ;
 int FUNC_1 (void**) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, struct spigen_transfer_mmapped *VAR_3)
{
 struct spi_command VAR_4 = VAR_1;
 device_t VAR_5 = VAR_2->si_drv1;
 struct spigen_mmap *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_1((void **)&VAR_6)) != 0)
  return (VAR_7);

 if (VAR_6->bufsize < VAR_3->stm_command_length + VAR_3->stm_data_length)
  return (VAR_0);

 VAR_4.tx_cmd = VAR_4.rx_cmd = (void *)((uintptr_t)VAR_6->kvaddr);
 VAR_4.tx_cmd_sz = VAR_4.rx_cmd_sz = VAR_3->stm_command_length;
 VAR_4.tx_data = VAR_4.rx_data =
     (void *)((uintptr_t)VAR_6->kvaddr + VAR_3->stm_command_length);
 VAR_4.tx_data_sz = VAR_4.rx_data_sz = VAR_3->stm_data_length;
 VAR_7 = FUNC_0(FUNC_2(VAR_5), VAR_5, &VAR_4);

 return (VAR_7);
}
