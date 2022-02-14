
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef enum xprt_stat { ____Placeholder_xprt_stat } xprt_stat ;
typedef void* bool_t ;
struct TYPE_5__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_6__ {scalar_t__ (* readit ) (int ,char*,int) ;char* in_hdrp; int in_hdrlen; int in_header; int in_maxrec; int in_reclen; int recvsize; char* in_base; int in_received; int fbtbc; char* in_boundry; char* in_finger; void* last_frag; void* in_haveheader; int tcp_handle; } ;
typedef TYPE_2__ RECSTREAM ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

bool_t
FUNC_4(XDR *VAR_6, enum xprt_stat *VAR_7, bool_t VAR_8)
{
 RECSTREAM *VAR_9 = (RECSTREAM *)(VAR_6->x_private);
 ssize_t VAR_10;
 int VAR_11;

 if (!VAR_9->in_haveheader) {
  VAR_10 = VAR_9->readit(VAR_9->tcp_handle, VAR_9->in_hdrp,
      (int)sizeof (VAR_9->in_header) - VAR_9->in_hdrlen);
  if (VAR_10 == 0) {
   *VAR_7 = VAR_8 ? VAR_3 : VAR_4;
   return VAR_0;
  }
  if (VAR_10 < 0) {
   *VAR_7 = VAR_3;
   return VAR_0;
  }
  VAR_9->in_hdrp += VAR_10;
  VAR_9->in_hdrlen += VAR_10;
  if (VAR_9->in_hdrlen < sizeof (VAR_9->in_header)) {
   *VAR_7 = VAR_5;
   return VAR_0;
  }
  VAR_9->in_header = FUNC_0(VAR_9->in_header);
  VAR_11 = (int)(VAR_9->in_header & ~VAR_1);
  if (VAR_11 == 0 || VAR_11 > VAR_9->in_maxrec ||
      (VAR_9->in_reclen + VAR_11) > VAR_9->in_maxrec) {
   *VAR_7 = VAR_3;
   return VAR_0;
  }
  VAR_9->in_reclen += VAR_11;
  if (VAR_9->in_reclen > VAR_9->recvsize)
   FUNC_1(VAR_9, VAR_9->in_reclen);
  if (VAR_9->in_header & VAR_1) {
   VAR_9->in_header &= ~VAR_1;
   VAR_9->last_frag = VAR_2;
  }





  VAR_8 = VAR_0;
 }

 VAR_10 = VAR_9->readit(VAR_9->tcp_handle,
     VAR_9->in_base + VAR_9->in_received,
     (VAR_9->in_reclen - VAR_9->in_received));

 if (VAR_10 < 0) {
  *VAR_7 = VAR_3;
  return VAR_0;
 }

 if (VAR_10 == 0) {
  *VAR_7 = VAR_8 ? VAR_3 : VAR_4;
  return VAR_0;
 }

 VAR_9->in_received += VAR_10;

 if (VAR_9->in_received == VAR_9->in_reclen) {
  VAR_9->in_haveheader = VAR_0;
  VAR_9->in_hdrp = (char *)(void *)&VAR_9->in_header;
  VAR_9->in_hdrlen = 0;
  if (VAR_9->last_frag) {
   VAR_9->fbtbc = VAR_9->in_reclen;
   VAR_9->in_boundry = VAR_9->in_base + VAR_9->in_reclen;
   VAR_9->in_finger = VAR_9->in_base;
   VAR_9->in_reclen = VAR_9->in_received = 0;
   *VAR_7 = VAR_5;
   return VAR_2;
  }
 }

 *VAR_7 = VAR_5;
 return VAR_0;
}
