
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {int * ppbuff; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 char const* FUNC_1 (char*,int *,int ) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static const char *
FUNC_3(struct archive *VAR_2, void *VAR_3)
{
 struct cpio *VAR_4 = (struct cpio *)VAR_3;
 (void)VAR_2;

 if (VAR_4->ppbuff == ((void*)0)) {
  VAR_4->ppbuff = FUNC_2(VAR_0);
  if (VAR_4->ppbuff == ((void*)0))
   FUNC_0(1, VAR_1, "Out of memory");
 }
 return FUNC_1("Enter passphrase:",
  VAR_4->ppbuff, VAR_0);
}
