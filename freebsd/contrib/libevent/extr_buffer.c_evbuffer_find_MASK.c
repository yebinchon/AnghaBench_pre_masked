
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_ptr {scalar_t__ pos; } ;
struct evbuffer {int dummy; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 unsigned char* FUNC_2 (struct evbuffer*,scalar_t__) ;
 struct evbuffer_ptr FUNC_3 (struct evbuffer*,char const*,size_t,int *) ;

unsigned char *
FUNC_4(struct evbuffer *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3;
 struct evbuffer_ptr VAR_4;

 FUNC_0(VAR_0);

 VAR_4 = FUNC_3(VAR_0, (const char *)VAR_1, VAR_2, ((void*)0));
 if (VAR_4.pos < 0) {
  VAR_3 = ((void*)0);
 } else {
  VAR_3 = FUNC_2(VAR_0, VAR_4.pos + VAR_2);
  if (VAR_3)
   VAR_3 += VAR_4.pos;
 }
 FUNC_1(VAR_0);
 return VAR_3;
}
