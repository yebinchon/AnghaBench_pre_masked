
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bufsize; unsigned int buflen; int * buf; } ;
typedef TYPE_1__ http_headerbuf_t ;
typedef scalar_t__ hdr_t ;
struct TYPE_9__ {scalar_t__ buflen; char* buf; } ;
typedef TYPE_2__ conn_t ;
struct TYPE_10__ {scalar_t__ num; int name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (int ,int *) ;
 void* FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static hdr_t
FUNC_5(conn_t *VAR_5, http_headerbuf_t *VAR_6, const char **VAR_7)
{
 unsigned int VAR_8, VAR_9;





 FUNC_1(VAR_5);
 if (VAR_5->buflen == 0)
  return (VAR_1);


 if (VAR_6->bufsize < VAR_5->buflen + 1) {
  if ((VAR_6->buf = FUNC_3(VAR_6->buf, VAR_5->buflen + 1)) == ((void*)0))
   return (VAR_3);
  VAR_6->bufsize = VAR_5->buflen + 1;
 }
 FUNC_4(VAR_6->buf, VAR_5->buf);
 VAR_6->buflen = VAR_5->buflen;





 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (FUNC_0(VAR_5) == -1)
   return (VAR_3);







  FUNC_1(VAR_5);
  if (VAR_5->buf[0] != ' ' && VAR_5->buf[0] != "\t"[0])
   break;


  VAR_9 = VAR_6->buflen + VAR_5->buflen;
  if (VAR_6->bufsize < VAR_9 + 1) {
   VAR_9 *= 2;
   if ((VAR_6->buf = FUNC_3(VAR_6->buf, VAR_9 + 1)) == ((void*)0))
    return (VAR_3);
   VAR_6->bufsize = VAR_9 + 1;
  }
  FUNC_4(VAR_6->buf + VAR_6->buflen, VAR_5->buf);
  VAR_6->buflen += VAR_5->buflen;
 }







 for (VAR_8 = 0; VAR_2[VAR_8].num != VAR_4; VAR_8++)
  if ((*VAR_7 = FUNC_2(VAR_2[VAR_8].name, VAR_6->buf)) != ((void*)0))
   return (VAR_2[VAR_8].num);

 return (VAR_4);
}
