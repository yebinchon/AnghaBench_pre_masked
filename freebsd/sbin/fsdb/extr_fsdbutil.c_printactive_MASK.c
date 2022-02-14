
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int FUNC_0 (int ,int ) ;





 int VAR_0 ;


 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(int VAR_5)
{
    if (!FUNC_1())
 return 1;
    switch (FUNC_0(VAR_1, VAR_3) & VAR_0) {
    case 132:
    case 129:
    case 134:
    case 133:
    case 130:
    case 128:
    case 131:
 if (VAR_5)
     FUNC_4(&VAR_4, VAR_1);
 else
     FUNC_3("current inode", VAR_2, VAR_1);
 break;
    case 0:
 FUNC_2("current inode %ju: unallocated inode\n", (uintmax_t)VAR_2);
 break;
    default:
 FUNC_2("current inode %ju: screwy itype 0%o (mode 0%o)?\n",
     (uintmax_t)VAR_2, FUNC_0(VAR_1, VAR_3) & VAR_0,
     FUNC_0(VAR_1, VAR_3));
 break;
    }
    return 0;
}
