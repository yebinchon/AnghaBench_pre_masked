
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ima_iint_cache {int writecount; int readcount; } ;
typedef enum iint_pcr_error { ____Placeholder_iint_pcr_error } iint_pcr_error ;




 int FUNC_0 (struct inode*,unsigned char const*,char*,char*) ;

__attribute__((used)) static void FUNC_1(enum iint_pcr_error VAR_0,
     struct ima_iint_cache *VAR_1,
     struct inode *VAR_2,
     const unsigned char *VAR_3)
{
 switch (VAR_0) {
 case 128:
  if (VAR_1->readcount > 0)
   FUNC_0(VAR_2, VAR_3, "invalid_pcr",
       "ToMToU");
  break;
 case 129:
  if (VAR_1->writecount > 0)
   FUNC_0(VAR_2, VAR_3, "invalid_pcr",
       "open_writers");
  break;
 }
}
