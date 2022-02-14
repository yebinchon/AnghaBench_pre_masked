
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {size_t buffer_len; int refcnt; int buffer; } ;


 int FUNC_0 (int ,struct evbuffer_chain*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct evbuffer_chain*,int ,size_t) ;
 struct evbuffer_chain* FUNC_2 (size_t) ;
 int VAR_3 ;

__attribute__((used)) static struct evbuffer_chain *
FUNC_3(size_t VAR_4)
{
 struct evbuffer_chain *VAR_5;
 size_t VAR_6;

 if (VAR_4 > VAR_0 - VAR_1)
  return (((void*)0));

 VAR_4 += VAR_1;


 if (VAR_4 < VAR_0 / 2) {
  VAR_6 = VAR_2;
  while (VAR_6 < VAR_4) {
   VAR_6 <<= 1;
  }
 } else {
  VAR_6 = VAR_4;
 }


 if ((VAR_5 = FUNC_2(VAR_6)) == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_5, 0, VAR_1);

 VAR_5->buffer_len = VAR_6 - VAR_1;




 VAR_5->buffer = FUNC_0(VAR_3, VAR_5);

 VAR_5->refcnt = 1;

 return (VAR_5);
}
