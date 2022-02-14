
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(void)
{
    if (!VAR_2) {
 FUNC_1("no current inode\n");
 return 0;
    }
    if ((FUNC_0(VAR_2, VAR_4) & VAR_1) != VAR_0) {
 FUNC_1("inode %ju not a directory", (uintmax_t)VAR_3);
 return 0;
    }
    return 1;
}
