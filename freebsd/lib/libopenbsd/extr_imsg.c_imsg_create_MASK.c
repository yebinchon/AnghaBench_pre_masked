
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct imsgbuf {int pid; } ;
struct imsg_hdr {int pid; void* peerid; scalar_t__ flags; void* type; } ;
struct ibuf {int dummy; } ;
typedef int pid_t ;
typedef int hdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ibuf* FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ibuf*,struct imsg_hdr*,int) ;

struct ibuf *
FUNC_2(struct imsgbuf *VAR_4, u_int32_t VAR_5, u_int32_t VAR_6,
    pid_t VAR_7, u_int16_t VAR_8)
{
 struct ibuf *VAR_9;
 struct imsg_hdr VAR_10;

 VAR_8 += VAR_1;
 if (VAR_8 > VAR_2) {
  VAR_3 = VAR_0;
  return (((void*)0));
 }

 VAR_10.type = VAR_5;
 VAR_10.flags = 0;
 VAR_10.peerid = VAR_6;
 if ((VAR_10.pid = VAR_7) == 0)
  VAR_10.pid = VAR_4->pid;
 if ((VAR_9 = FUNC_0(VAR_8, VAR_2)) == ((void*)0)) {
  return (((void*)0));
 }
 if (FUNC_1(VAR_9, &VAR_10, sizeof(VAR_10)) == -1)
  return (((void*)0));

 return (VAR_9);
}
