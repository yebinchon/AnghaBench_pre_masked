
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_res_info {int characteristics; int version2; int language; int memflags; int version; } ;
typedef scalar_t__ rc_uint_type ;
struct TYPE_3__ {int characteristics; int version; int language; int memflags; } ;
typedef TYPE_1__ rc_res_res_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct bin_res_info*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static rc_uint_type
FUNC_3 (windres_bfd *VAR_1, rc_uint_type VAR_2, const rc_res_res_info *VAR_3)
{
  if (VAR_1)
    {
      struct bin_res_info VAR_4;

      FUNC_2 (VAR_1, VAR_4.version, VAR_3->version);
      FUNC_1 (VAR_1, VAR_4.memflags, VAR_3->memflags);
      FUNC_1 (VAR_1, VAR_4.language, VAR_3->language);
      FUNC_2 (VAR_1, VAR_4.version2, VAR_3->version);
      FUNC_2 (VAR_1, VAR_4.characteristics, VAR_3->characteristics);
      FUNC_0 (VAR_1, &VAR_4, VAR_2, VAR_0);
    }
  return VAR_2 + VAR_0;
}
