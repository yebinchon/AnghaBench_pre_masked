
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct evbuffer {size_t off; int totallen; int cbarg; int (* cb ) (struct evbuffer*,size_t,size_t,int ) ;int * buffer; } ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int,int*,int *) ;
 int FUNC_1 (struct evbuffer*,int) ;
 int FUNC_2 (int,int ,int*) ;
 int FUNC_3 (int,int *,int) ;
 int FUNC_4 (struct evbuffer*,size_t,size_t,int ) ;

int
FUNC_5(struct evbuffer *VAR_2, int VAR_3, int VAR_4)
{
 u_char *VAR_5;
 size_t VAR_6 = VAR_2->off;
 int VAR_7 = VAR_0;
 if (VAR_4 < 0 || VAR_4 > VAR_7)
  VAR_4 = VAR_7;


 if (FUNC_1(VAR_2, VAR_4) == -1)
  return (-1);


 VAR_5 = VAR_2->buffer + VAR_2->off;


 VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_4);
 if (VAR_7 == -1)
  return (-1);
 if (VAR_7 == 0)
  return (0);
 VAR_2->off += VAR_7;


 if (VAR_2->off != VAR_6 && VAR_2->cb != ((void*)0))
  (*VAR_2->cb)(VAR_2, VAR_6, VAR_2->off, VAR_2->cbarg);

 return (VAR_7);
}
