
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imsg_hdr {int len; int code; } ;
typedef struct imsg_hdr u_int16_t ;
struct buf {int dummy; } ;
typedef int mtu ;
typedef int hdr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buf*,struct imsg_hdr*,int) ;
 int FUNC_1 (int,struct buf*) ;
 struct buf* FUNC_2 (int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(int VAR_1, u_int16_t VAR_2)
{
 struct imsg_hdr VAR_3;
 struct buf *VAR_4;
 int VAR_5 = 0;

 VAR_3.code = VAR_0;
 VAR_3.len = sizeof(VAR_3) +
  sizeof(u_int16_t);

 if ((VAR_4 = FUNC_2(VAR_3.len)) == ((void*)0))
  FUNC_3("buf_open: %m");

 VAR_5 += FUNC_0(VAR_4, &VAR_3, sizeof(VAR_3));
 VAR_5 += FUNC_0(VAR_4, &VAR_2, sizeof(VAR_2));
 if (VAR_5)
  FUNC_3("buf_add: %m");

 if (FUNC_1(VAR_1, VAR_4) == -1)
  FUNC_3("buf_close: %m");
}
