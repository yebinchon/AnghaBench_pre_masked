
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;


 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iovec**,int*,char*,char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(struct iovec **VAR_5, int *VAR_6, const char *VAR_7, const char *VAR_8)
{
 int VAR_9;

 if (FUNC_4("msdosfs_iconv") < 0)
  if (FUNC_3("msdosfs_iconv") < 0 || FUNC_4("msdosfs_iconv") < 0) {
   FUNC_5("cannot find or load \"msdosfs_iconv\" kernel module");
   return (-1);
  }

 FUNC_0(VAR_5, VAR_6, "cs_win", VAR_1);
 VAR_9 = FUNC_2(VAR_1, VAR_7);
 if (VAR_9 && VAR_4 != VAR_0)
  return (-1);
 if (VAR_8 != ((void*)0)) {
  VAR_9 = FUNC_2(VAR_8, VAR_7);
  if (VAR_9 && VAR_4 != VAR_0)
   return (-1);
 } else {
  FUNC_0(VAR_5, VAR_6, "cs_dos", VAR_7);
  VAR_9 = FUNC_1(VAR_7, VAR_7,
    VAR_2 | VAR_3);
  if (VAR_9 && VAR_4 != VAR_0)
   return (-1);
 }

 return (0);
}
