
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct netconfig {int dummy; } ;
struct netbuf {scalar_t__ len; scalar_t__ maxlen; struct netbuf* buf; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int bool_t ;
struct TYPE_2__ {int cf_stat; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netbuf* FUNC_0 (int ,int ,struct netconfig*,char*,int **,struct timeval*) ;
 int FUNC_1 (struct netbuf*) ;
 int FUNC_2 (struct netbuf*,struct netbuf*,size_t) ;
 TYPE_1__ VAR_3 ;

bool_t
FUNC_3(rpcprog_t VAR_4, rpcvers_t VAR_5, const struct netconfig *VAR_6,
    struct netbuf *VAR_7, const char *VAR_8)
{
 struct netbuf *VAR_9;

 if ((VAR_9 = FUNC_0(VAR_4, VAR_5,
     (struct netconfig *) VAR_6, (char *) VAR_8,
     (CLIENT **) ((void*)0), (struct timeval *) ((void*)0))) == ((void*)0))
  return (VAR_0);

 if (VAR_9->len > VAR_7->maxlen) {

  FUNC_1(VAR_9->buf);
  FUNC_1(VAR_9);
  VAR_3.cf_stat = VAR_1;
  return (VAR_0);
 }
 FUNC_2(VAR_7->buf, VAR_9->buf, (size_t)VAR_9->len);
 VAR_7->len = VAR_9->len;
 FUNC_1(VAR_9->buf);
 FUNC_1(VAR_9);
 return (VAR_2);
}
