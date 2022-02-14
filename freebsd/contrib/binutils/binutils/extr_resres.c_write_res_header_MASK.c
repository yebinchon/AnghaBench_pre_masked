
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct TYPE_3__ {int data_size; int header_size; } ;
typedef TYPE_1__ res_hdr ;
typedef int rc_uint_type ;
typedef int rc_res_res_info ;
typedef int rc_res_id ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int,TYPE_1__*) ;
 int FUNC_2 (int *,int,int const*) ;
 int FUNC_3 (int *,int,int const*) ;

__attribute__((used)) static rc_uint_type
FUNC_4 (windres_bfd *VAR_0, rc_uint_type VAR_1, rc_uint_type VAR_2,
    const rc_res_id *VAR_3, const rc_res_id *VAR_4,
    const rc_res_res_info *VAR_5)
{
  res_hdr VAR_6;
  VAR_6.data_size = VAR_2;
  VAR_6.header_size = 24 + FUNC_0 (VAR_3) + FUNC_0 (VAR_4);

  VAR_6.header_size = (VAR_6.header_size + 3) & ~3;

  VAR_1 = (VAR_1 + 3) & ~3;

  VAR_1 = FUNC_1 (VAR_0, VAR_1, &VAR_6);
  VAR_1 = FUNC_2 (VAR_0, VAR_1, VAR_3);
  VAR_1 = FUNC_2 (VAR_0, VAR_1, VAR_4);

  VAR_1 = (VAR_1 + 3) & ~3;

  VAR_1 = FUNC_3 (VAR_0, VAR_1, VAR_5);
  VAR_1 = (VAR_1 + 3) & ~3;
  return VAR_1;
}
