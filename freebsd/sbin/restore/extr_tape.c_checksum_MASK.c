
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union u_spcl {int dummy; } u_spcl ;
typedef int uintmax_t ;
struct TYPE_2__ {int name; scalar_t__ ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(int *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_8 = sizeof(union u_spcl) / sizeof(int);
 VAR_7 = 0;
 if (!VAR_0) {
  do
   VAR_7 += *VAR_6++;
  while (--VAR_8);
 } else {


  do
   VAR_7 += FUNC_1(*VAR_6++);
  while (--VAR_8);
 }

 if (VAR_7 != VAR_1) {
  FUNC_0(VAR_5, "Checksum error %o, inode %jd file %d\n", VAR_7,
      (uintmax_t)VAR_4.ino, VAR_4.name);
  return(VAR_2);
 }
 return(VAR_3);
}
