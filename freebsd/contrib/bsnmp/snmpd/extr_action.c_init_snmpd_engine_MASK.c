
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int engine_boots; int engine_time; int max_msg_size; int* engine_id; int engine_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,char*,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (char*) ;

int
FUNC_4(void)
{
 char *VAR_4;

 VAR_3.engine_boots = 1;
 VAR_3.engine_time = 1;
 VAR_3.max_msg_size = 1500;

 VAR_3.engine_id[0] = ((VAR_1 & 0xff000000) >> 24) | 0x80;
 VAR_3.engine_id[1] = (VAR_1 & 0xff0000) >> 16;
 VAR_3.engine_id[2] = (VAR_1 & 0xff00) >> 8;
 VAR_3.engine_id[3] = VAR_1 & 0xff;
 VAR_3.engine_id[4] = 128;
 VAR_3.engine_len = 5;

 if ((VAR_4 = FUNC_0(VAR_0)) == ((void*)0))
  return (-1);

 if (FUNC_3(VAR_4) > VAR_2 - VAR_3.engine_len) {
  FUNC_2(VAR_3.engine_id + VAR_3.engine_len,
      VAR_4, VAR_2 - VAR_3.engine_len);
  VAR_3.engine_len = VAR_2;
 } else {
  FUNC_2(VAR_3.engine_id + VAR_3.engine_len,
      VAR_4, FUNC_3(VAR_4));
  VAR_3.engine_len += FUNC_3(VAR_4);
 }

 FUNC_1(VAR_4);

 return (0);
}
