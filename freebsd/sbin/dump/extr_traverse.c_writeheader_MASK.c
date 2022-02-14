
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union u_spcl {int dummy; } u_spcl ;
typedef int int32_t ;
typedef int ino_t ;
struct TYPE_2__ {int c_checksum; int c_magic; int c_inumber; int c_mtimensec; int c_atimensec; int c_mtime; int c_atime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,int) ;

void
FUNC_1(ino_t VAR_4)
{
 int32_t VAR_5, VAR_6, *VAR_7;

 if (VAR_2 >= 2) {

  VAR_3.c_atime = VAR_3.c_mtime;
  VAR_3.c_atimensec = VAR_3.c_mtimensec;
 }
 VAR_3.c_inumber = VAR_4;
 VAR_3.c_magic = VAR_1;
 VAR_3.c_checksum = 0;
 VAR_7 = (int32_t *)&VAR_3;
 VAR_5 = 0;
 VAR_6 = sizeof(union u_spcl) / (4 * sizeof(int32_t));
 while (--VAR_6 >= 0) {
  VAR_5 += *VAR_7++;
  VAR_5 += *VAR_7++;
  VAR_5 += *VAR_7++;
  VAR_5 += *VAR_7++;
 }
 VAR_3.c_checksum = VAR_0 - VAR_5;
 FUNC_0((char *)&VAR_3, 1);
}
