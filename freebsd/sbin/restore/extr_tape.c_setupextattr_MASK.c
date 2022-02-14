
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_2__ {int name; scalar_t__ ino; } ;


 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int VAR_4 ;

__attribute__((used)) static char *
FUNC_3(int VAR_5)
{

 VAR_3 = 0;
 if (VAR_5 <= VAR_2)
  return (VAR_1);
 if (VAR_2 > 0)
  FUNC_1(VAR_1);
 if ((VAR_1 = FUNC_2(VAR_5)) != ((void*)0)) {
  VAR_2 = VAR_5;
  return (VAR_1);
 }
 VAR_2 = 0;
 VAR_1 = ((void*)0);
 FUNC_0(VAR_4, "Cannot extract %d bytes %s for inode %jd, name %d\n",
     VAR_5, "of extended attributes", (uintmax_t)VAR_0.ino,
     VAR_0.name);
 return (((void*)0));
}
