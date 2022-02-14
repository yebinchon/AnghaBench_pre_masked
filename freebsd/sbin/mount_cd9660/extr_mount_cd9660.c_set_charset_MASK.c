
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iovec**,int*,char*,char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(struct iovec **VAR_3, int *VAR_4, const char *VAR_5)
{
 int VAR_6;
 char *VAR_7;
 char *VAR_8;

 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);

 if (FUNC_6("cd9660_iconv") < 0)
  if (FUNC_4("cd9660_iconv") < 0 || FUNC_6("cd9660_iconv") < 0) {
   FUNC_8( "cannot find or load \"cd9660_iconv\" kernel module");
   return (-1);
  }

 if ((VAR_7 = FUNC_5(VAR_1)) == ((void*)0))
  return (-1);
 if ((VAR_8 = FUNC_5(VAR_1)) == ((void*)0)) {
  FUNC_1(VAR_7);
  return (-1);
 }
 FUNC_7(VAR_7, VAR_0, VAR_1);
 FUNC_7(VAR_8, FUNC_3(VAR_5, VAR_2),
     VAR_1);
 VAR_6 = FUNC_2(VAR_7, VAR_8);
 if (VAR_6)
  return (-1);

 FUNC_0(VAR_3, VAR_4, "cs_disk", VAR_7, (size_t)-1);
 FUNC_0(VAR_3, VAR_4, "cs_local", VAR_8, (size_t)-1);

 return (0);
}
