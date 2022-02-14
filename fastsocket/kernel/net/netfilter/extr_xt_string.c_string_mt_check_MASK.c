
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ v1; } ;
struct xt_string_info {scalar_t__ from_offset; scalar_t__ to_offset; char* algo; scalar_t__ patlen; struct ts_config* config; int pattern; TYPE_3__ u; } ;
struct xt_mtchk_param {TYPE_1__* match; struct xt_string_info* matchinfo; } ;
struct ts_config {int dummy; } ;
struct TYPE_4__ {int revision; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ts_config*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ts_config* FUNC_1 (char*,int ,scalar_t__,int ,int) ;

__attribute__((used)) static bool FUNC_2(const struct xt_mtchk_param *VAR_7)
{
 struct xt_string_info *VAR_8 = VAR_7->matchinfo;
 struct ts_config *VAR_9;
 int VAR_10 = VAR_1;


 if (VAR_8->from_offset > VAR_8->to_offset)
  return 0;
 if (VAR_8->algo[VAR_5 - 1] != '\0')
  return 0;
 if (VAR_8->patlen > VAR_6)
  return 0;
 if (VAR_7->match->revision == 1) {
  if (VAR_8->u.v1.flags &
      ~(VAR_3 | VAR_4))
   return 0;
  if (VAR_8->u.v1.flags & VAR_3)
   VAR_10 |= VAR_2;
 }
 VAR_9 = FUNC_1(VAR_8->algo, VAR_8->pattern, VAR_8->patlen,
         VAR_0, VAR_10);
 if (FUNC_0(VAR_9))
  return 0;

 VAR_8->config = VAR_9;

 return 1;
}
