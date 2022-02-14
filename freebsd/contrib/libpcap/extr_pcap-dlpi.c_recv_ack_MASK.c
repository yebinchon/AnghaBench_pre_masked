
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dl_unix_errno; int dl_errno; } ;
union DL_primitives {int dl_primitive; TYPE_1__ error_ack; } ;
struct strbuf {int len; char* buf; int maxlen; } ;
typedef int errmsgbuf ;
typedef int dlprimbuf ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 union DL_primitives* FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int,struct strbuf*,struct strbuf*,int*) ;
 int FUNC_4 (char*,int,int,char*,char const*) ;
 int FUNC_5 (char*,int,char*,char const*,int,...) ;

__attribute__((used)) static int
FUNC_6(int VAR_10, int VAR_11, const char *VAR_12, char *VAR_13, char *VAR_14, int *VAR_15)
{
 union DL_primitives *VAR_16;
 struct strbuf VAR_17;
 int VAR_18;
 char VAR_19[VAR_5];
 char VAR_20[64];





 if (VAR_15 != ((void*)0))
  *VAR_15 = 0;

 VAR_17.maxlen = VAR_4;
 VAR_17.len = 0;
 VAR_17.buf = VAR_13;

 VAR_18 = 0;
 if (FUNC_3(VAR_10, &VAR_17, (struct strbuf*)((void*)0), &VAR_18) < 0) {
  FUNC_4(VAR_14, VAR_5,
      VAR_9, "recv_ack: %s getmsg", VAR_12);
  return (VAR_6);
 }

 VAR_16 = FUNC_0(VAR_17.buf);
 switch (VAR_16->dl_primitive) {

 case 130:
 case 133:
 case 129:

 case 131:


  break;

 case 132:
  switch (VAR_16->error_ack.dl_errno) {

  case 128:
   if (VAR_15 != ((void*)0))
    *VAR_15 = VAR_16->error_ack.dl_unix_errno;
   FUNC_4(VAR_14, VAR_5,
       VAR_16->error_ack.dl_unix_errno,
       "recv_ack: %s: UNIX error", VAR_12);
   if (VAR_16->error_ack.dl_unix_errno == VAR_3 ||
       VAR_16->error_ack.dl_unix_errno == VAR_2)
    return (VAR_8);
   break;

  default:
   FUNC_5(VAR_14, VAR_5,
       "recv_ack: %s: %s", VAR_12,
       FUNC_2(VAR_19, sizeof (VAR_19), VAR_16->error_ack.dl_errno));
   if (VAR_16->error_ack.dl_errno == VAR_1)
    return (VAR_7);
   else if (VAR_16->error_ack.dl_errno == VAR_0)
    return (VAR_8);
   break;
  }
  return (VAR_6);

 default:
  FUNC_5(VAR_14, VAR_5,
      "recv_ack: %s: Unexpected primitive ack %s",
      VAR_12, FUNC_1(VAR_20, sizeof (VAR_20), VAR_16->dl_primitive));
  return (VAR_6);
 }

 if (VAR_17.len < VAR_11) {
  FUNC_5(VAR_14, VAR_5,
      "recv_ack: %s: Ack too small (%d < %d)",
      VAR_12, VAR_17.len, VAR_11);
  return (VAR_6);
 }
 return (VAR_17.len);
}
