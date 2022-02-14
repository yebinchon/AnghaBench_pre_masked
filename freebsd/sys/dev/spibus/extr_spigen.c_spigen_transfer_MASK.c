
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iov_len; int iov_base; } ;
struct TYPE_3__ {scalar_t__ iov_len; int iov_base; } ;
struct spigen_transfer {TYPE_2__ st_data; TYPE_1__ st_command; } ;
struct spi_command {scalar_t__ tx_cmd_sz; scalar_t__ rx_cmd_sz; scalar_t__ tx_data_sz; scalar_t__ rx_data_sz; int * tx_data; int * tx_cmd; int * rx_data; int * rx_cmd; } ;
struct cdev {int si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct spi_command*) ;
 struct spi_command VAR_3 ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_4, struct spigen_transfer *VAR_5)
{
 struct spi_command VAR_6 = VAR_3;
 device_t VAR_7 = VAR_4->si_drv1;
 int VAR_8 = 0;






 if (VAR_5->st_command.iov_len == 0)
  return (VAR_0);

 VAR_6.tx_cmd = VAR_6.rx_cmd = FUNC_6(VAR_5->st_command.iov_len,
     VAR_1, VAR_2);
 if (VAR_5->st_data.iov_len > 0) {
  VAR_6.tx_data = VAR_6.rx_data = FUNC_6(VAR_5->st_data.iov_len,
      VAR_1, VAR_2);
 }
 else
  VAR_6.tx_data = VAR_6.rx_data = ((void*)0);

 VAR_8 = FUNC_1(VAR_5->st_command.iov_base, VAR_6.tx_cmd,
     VAR_6.tx_cmd_sz = VAR_6.rx_cmd_sz = VAR_5->st_command.iov_len);
 if ((VAR_8 == 0) && (VAR_5->st_data.iov_len > 0))
  VAR_8 = FUNC_1(VAR_5->st_data.iov_base, VAR_6.tx_data,
      VAR_6.tx_data_sz = VAR_6.rx_data_sz =
                            VAR_5->st_data.iov_len);
 if (VAR_8 == 0)
  VAR_8 = FUNC_0(FUNC_3(VAR_7), VAR_7, &VAR_6);
 if (VAR_8 == 0) {
  VAR_8 = FUNC_2(VAR_6.rx_cmd, VAR_5->st_command.iov_base,
      VAR_6.rx_cmd_sz);
  if ((VAR_8 == 0) && (VAR_5->st_data.iov_len > 0))
   VAR_8 = FUNC_2(VAR_6.rx_data, VAR_5->st_data.iov_base,
       VAR_6.rx_data_sz);
 }

 FUNC_5(VAR_6.tx_cmd, VAR_1);
 FUNC_5(VAR_6.tx_data, VAR_1);
 return (VAR_8);
}
