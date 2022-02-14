
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ generic; } ;
struct _stdenc_state_desc {TYPE_2__ u; } ;
struct _citrus_iconv_std_encoding {int se_ps; int se_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct _stdenc_state_desc*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_iconv_std_encoding *VAR_1, int *VAR_2)
{
 struct _stdenc_state_desc VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->se_handle, VAR_1->se_ps,
     VAR_0, &VAR_3);
 if (!VAR_4)
  *VAR_2 = VAR_3.u.generic.state;

 return (VAR_4);
}
