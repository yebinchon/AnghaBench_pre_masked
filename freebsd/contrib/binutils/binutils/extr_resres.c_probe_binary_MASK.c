
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct TYPE_3__ {scalar_t__ data_size; int header_size; } ;
typedef TYPE_1__ res_hdr ;
typedef int rc_uint_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int,TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1 (windres_bfd *VAR_2, rc_uint_type VAR_3)
{
  rc_uint_type VAR_4;
  res_hdr VAR_5;

  VAR_4 = 0;
  FUNC_0 (VAR_2, &VAR_4, VAR_3, &VAR_5);
  if (VAR_5.data_size != 0)
    return 1;
  if ((VAR_5.header_size != 0x20 && ! VAR_1)
      || (VAR_5.header_size != 0x20000000 && VAR_1))
    return 1;


  VAR_4 += 0x20 - VAR_0;
  if ((VAR_4 + VAR_0) >= VAR_3)
    return 1;
  FUNC_0 (VAR_2, &VAR_4, VAR_3, &VAR_5);



  if ((VAR_4 - VAR_0 + VAR_5.data_size + VAR_5.header_size) > VAR_3)
    return 0;
  return 1;
}
