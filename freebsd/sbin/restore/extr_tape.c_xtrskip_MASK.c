
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_2__ {int name; scalar_t__ ino; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ,size_t,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(char *VAR_5, size_t VAR_6)
{

 if (FUNC_2(VAR_3, VAR_6, VAR_0) == -1) {
  FUNC_1(VAR_4,
      "seek error extracting inode %jd, name %d\nlseek: %d\n",
      (uintmax_t)VAR_1.ino, VAR_1.name, FUNC_3(VAR_2));
  FUNC_0(1);
 }
}
