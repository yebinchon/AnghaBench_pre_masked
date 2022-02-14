
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef int uint16_t ;
struct sockaddr {int dummy; } ;
struct sctp_sndrcvinfo {void* sinfo_context; void* sinfo_timetolive; int sinfo_stream; void* sinfo_flags; void* sinfo_ppid; } ;
typedef int ssize_t ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int,void const*,size_t,struct sockaddr*,int,struct sctp_sndrcvinfo*,int ) ;

ssize_t
FUNC_2(int VAR_0,
    const void *VAR_1,
    size_t VAR_2,
    struct sockaddr *VAR_3,
    int VAR_4,
    uint32_t VAR_5,
    uint32_t VAR_6,
    uint16_t VAR_7,
    uint32_t VAR_8,
    uint32_t VAR_9)
{
 struct sctp_sndrcvinfo VAR_10;

 FUNC_0((void *)&VAR_10, 0, sizeof(struct sctp_sndrcvinfo));
 VAR_10.sinfo_ppid = VAR_5;
 VAR_10.sinfo_flags = VAR_6;
 VAR_10.sinfo_stream = VAR_7;
 VAR_10.sinfo_timetolive = VAR_8;
 VAR_10.sinfo_context = VAR_9;
 return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_10, 0));
}
