
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_2__ {int name; scalar_t__ ino; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(char *VAR_5, size_t VAR_6)
{

 if (VAR_0)
  return;
 if (FUNC_2(VAR_3, VAR_5, (int) VAR_6) == -1) {
  FUNC_0(VAR_4,
      "write error extracting inode %jd, name %d\nwrite: %d\n",
      (uintmax_t)VAR_1.ino, VAR_1.name, FUNC_1(VAR_2));
 }
}
