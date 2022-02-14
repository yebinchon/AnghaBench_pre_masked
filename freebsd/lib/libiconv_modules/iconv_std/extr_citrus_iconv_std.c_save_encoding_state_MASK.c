
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_iconv_std_encoding {int se_handle; scalar_t__ se_ps; int se_pssaved; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static __inline void
FUNC_2(struct _citrus_iconv_std_encoding *VAR_0)
{

 if (VAR_0->se_ps)
  FUNC_1(VAR_0->se_pssaved, VAR_0->se_ps,
      FUNC_0(VAR_0->se_handle));
}
