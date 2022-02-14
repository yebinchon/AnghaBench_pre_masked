
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {scalar_t__ off; int buffer; int cbarg; int (* cb ) (struct evbuffer*,size_t,size_t,int ) ;} ;


 int FUNC_0 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*,int ,size_t) ;
 int FUNC_2 (struct evbuffer*,size_t) ;
 int FUNC_3 (struct evbuffer*,size_t,size_t,int ) ;
 int FUNC_4 (struct evbuffer*,size_t,size_t,int ) ;

int
FUNC_5(struct evbuffer *VAR_0, struct evbuffer *VAR_1)
{
 int VAR_2;


 if (VAR_0->off == 0) {
  struct evbuffer VAR_3;
  size_t VAR_4 = VAR_1->off;


  FUNC_0(&VAR_3, VAR_0);
  FUNC_0(VAR_0, VAR_1);
  FUNC_0(VAR_1, &VAR_3);






  if (VAR_1->off != VAR_4 && VAR_1->cb != ((void*)0))
   (*VAR_1->cb)(VAR_1, VAR_4, VAR_1->off, VAR_1->cbarg);
  if (VAR_4 && VAR_0->cb != ((void*)0))
   (*VAR_0->cb)(VAR_0, 0, VAR_4, VAR_0->cbarg);

  return (0);
 }

 VAR_2 = FUNC_1(VAR_0, VAR_1->buffer, VAR_1->off);
 if (VAR_2 == 0) {

  FUNC_2(VAR_1, VAR_1->off);
 }

 return (VAR_2);
}
