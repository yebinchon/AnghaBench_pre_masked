
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_res_hdr {int header_size; int data_size; } ;
struct TYPE_3__ {void* header_size; void* data_size; } ;
typedef TYPE_1__ res_hdr ;
typedef scalar_t__ rc_uint_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,long,long) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct bin_res_hdr*,scalar_t__,scalar_t__) ;
 void* FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_3 (windres_bfd *VAR_2, rc_uint_type *VAR_3, rc_uint_type VAR_4,
     res_hdr *VAR_5)
{
  struct bin_res_hdr VAR_6;

  if ((VAR_3[0] + VAR_0) > VAR_4)
    FUNC_0 ("%s: unexpected end of file %ld/%ld", VAR_1,(long) VAR_3[0], (long) VAR_4);

  FUNC_1 (VAR_2, &VAR_6, VAR_3[0], VAR_0);
  VAR_5->data_size = FUNC_2 (VAR_2, VAR_6.data_size, 4);
  VAR_5->header_size = FUNC_2 (VAR_2, VAR_6.header_size, 4);
  VAR_3[0] += VAR_0;
}
