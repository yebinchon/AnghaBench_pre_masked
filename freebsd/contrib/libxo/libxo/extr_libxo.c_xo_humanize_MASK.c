
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,char*,int,int) ;

__attribute__((used)) static ssize_t
FUNC_1 (char *VAR_1, ssize_t VAR_2, uint64_t VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    if (VAR_3) {
 uint64_t VAR_6 = VAR_3;

 if (VAR_4 & VAR_0) {
     for ( ; VAR_6; VAR_5++)
  VAR_6 /= 1000;
 } else {
     for ( ; VAR_6; VAR_5++)
  VAR_6 /= 1024;
 }
 VAR_5 -= 1;
    }

    return FUNC_0(VAR_1, VAR_2, VAR_3, "", VAR_5, VAR_4);
}
