
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union key {int dummy; } key ;
struct rpcent {int dummy; } ;
struct rpcent_state {char* buffer; size_t bufsize; struct rpcent rpc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct rpcent_state**) ;

__attribute__((used)) static struct rpcent *
FUNC_3(int (*VAR_4)(union key, struct rpcent *, char *, size_t, struct rpcent **),
    union key VAR_5)
{
 int VAR_6;
 struct rpcent *VAR_7;
 struct rpcent_state * VAR_8;

 VAR_6=FUNC_2(&VAR_8);
 if (VAR_6 != 0) {
  VAR_3 = VAR_6;
  return ((void*)0);
 }

 if (VAR_8->buffer == ((void*)0)) {
  VAR_8->buffer = FUNC_1(VAR_1);
  if (VAR_8->buffer == ((void*)0))
   return (((void*)0));
  VAR_8->bufsize = VAR_1;
 }
 do {
  VAR_6 = VAR_4(VAR_5, &VAR_8->rpc, VAR_8->buffer, VAR_8->bufsize, &VAR_7);
  if (VAR_7 == ((void*)0) && VAR_6 == VAR_0) {
   FUNC_0(VAR_8->buffer);
   if ((VAR_8->bufsize << 1) > VAR_2) {
    VAR_8->buffer = ((void*)0);
    VAR_3 = VAR_0;
    return (((void*)0));
   }
   VAR_8->bufsize <<= 1;
   VAR_8->buffer = FUNC_1(VAR_8->bufsize);
   if (VAR_8->buffer == ((void*)0))
    return (((void*)0));
  }
 } while (VAR_7 == ((void*)0) && VAR_6 == VAR_0);
 if (VAR_6 != 0)
  VAR_3 = VAR_6;

 return (VAR_7);
}
