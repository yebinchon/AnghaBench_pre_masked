
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_ptr {int pos; } ;
struct evbuffer {int dummy; } ;


 struct evbuffer_ptr FUNC_0 (struct evbuffer*,char const*,int ,int *) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct evbuffer *VAR_0, const char *VAR_1)
{
 struct evbuffer_ptr VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_1), ((void*)0));
 return VAR_2.pos != -1;
}
