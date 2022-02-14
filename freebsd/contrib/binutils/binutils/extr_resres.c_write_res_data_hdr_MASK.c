
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_res_hdr {int header_size; int data_size; } ;
struct TYPE_3__ {int header_size; int data_size; } ;
typedef TYPE_1__ res_hdr ;
typedef scalar_t__ rc_uint_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct bin_res_hdr*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static rc_uint_type
FUNC_2 (windres_bfd *VAR_1, rc_uint_type VAR_2, res_hdr *VAR_3)
{
  if (VAR_1)
    {
      struct bin_res_hdr VAR_4;
      FUNC_1 (VAR_1, VAR_4.data_size, VAR_3->data_size);
      FUNC_1 (VAR_1, VAR_4.header_size, VAR_3->header_size);
      FUNC_0 (VAR_1, &VAR_4, VAR_2, VAR_0);
    }
  return VAR_2 + VAR_0;
}
