
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctb_type; int ctb_file; } ;
typedef TYPE_1__ ctf_bundle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char const*,int*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, int VAR_2, void *VAR_3)
{
 ctf_bundle_t *VAR_4 = VAR_3;
 int VAR_5;

 return (FUNC_0(VAR_4->ctb_file, VAR_4->ctb_type,
     VAR_1, &VAR_5) == VAR_0 || VAR_2 != VAR_5);
}
