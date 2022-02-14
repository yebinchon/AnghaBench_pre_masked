
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _stdenc {int dummy; } ;
struct _citrus_iconv_std_encoding {void* se_pssaved; void* se_ps; struct _stdenc* se_handle; } ;


 int FUNC_0 (struct _stdenc*,void*) ;

__attribute__((used)) static int
FUNC_1(struct _citrus_iconv_std_encoding *VAR_0, struct _stdenc *VAR_1,
    void *VAR_2, void *VAR_3)
{
 int VAR_4 = -1;

 VAR_0->se_handle = VAR_1;
 VAR_0->se_ps = VAR_2;
 VAR_0->se_pssaved = VAR_3;

 if (VAR_0->se_ps)
  VAR_4 = FUNC_0(VAR_1, VAR_0->se_ps);
 if (!VAR_4 && VAR_0->se_pssaved)
  VAR_4 = FUNC_0(VAR_1, VAR_0->se_pssaved);

 return (VAR_4);
}
