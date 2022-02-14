
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int c_cflag; int* c_cc; scalar_t__ c_lflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;
typedef TYPE_1__ TTY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (int,int ,TYPE_1__*) ;
 int FUNC_5 (char const*,int ,int) ;

int
FUNC_6(
 const char *VAR_8,
 int VAR_9,
 int VAR_10 )
{
 TTY VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_5(VAR_8, VAR_3, 0777);
 if (VAR_12 < 0)
  return -1;

 VAR_13 = FUNC_3(VAR_12, &VAR_11);
 if (VAR_13 < 0) {
  VAR_14 = VAR_7;
  FUNC_2(VAR_12);
  VAR_7 = VAR_14;
  return -1;
 }
 VAR_11.c_iflag = 0;
 VAR_11.c_oflag = 0;
 VAR_11.c_cflag = VAR_2|VAR_1|VAR_0;
 VAR_11.c_lflag = 0;
 VAR_11.c_cc[VAR_5] = 0;
 VAR_11.c_cc[VAR_6] = 5;
 FUNC_0(&VAR_11, (u_int)VAR_9);
 FUNC_1(&VAR_11, (u_int)VAR_9);
 VAR_13 = FUNC_4(VAR_12, VAR_4, &VAR_11);
 if (VAR_13 < 0) {
  VAR_14 = VAR_7;
  FUNC_2(VAR_12);
  VAR_7 = VAR_14;
  return -1;
 }
 return (VAR_12);
}
