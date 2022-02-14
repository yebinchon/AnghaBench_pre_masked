
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf_trace {int magic; } ;
struct wpabuf {size_t size; int * buf; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

struct wpabuf * FUNC_1(size_t VAR_1)
{
 struct wpabuf *VAR_2 = FUNC_0(sizeof(struct wpabuf) + VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);


 VAR_2->size = VAR_1;
 VAR_2->buf = (u8 *) (VAR_2 + 1);
 return VAR_2;
}
