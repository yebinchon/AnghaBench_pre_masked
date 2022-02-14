
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ulong_t ;
struct TYPE_4__ {scalar_t__ ctm_offset; } ;
typedef TYPE_1__ ctf_membinfo_t ;
typedef int ctf_id_t ;
struct TYPE_5__ {int ctb_type; int ctb_file; } ;
typedef TYPE_2__ ctf_bundle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char const*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, ctf_id_t VAR_2, ulong_t VAR_3, void *VAR_4)
{
 ctf_bundle_t *VAR_5 = VAR_4;
 ctf_membinfo_t VAR_6;

 return (FUNC_0(VAR_5->ctb_file, VAR_5->ctb_type,
     VAR_1, &VAR_6) == VAR_0 || VAR_6.ctm_offset != VAR_3);
}
