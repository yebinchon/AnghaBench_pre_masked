
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf_trace {int magic; } ;
struct wpabuf {size_t size; size_t used; int flags; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

struct wpabuf * FUNC_1(u8 *VAR_2, size_t VAR_3)
{
 struct wpabuf *VAR_4 = FUNC_0(sizeof(struct wpabuf));
 if (VAR_4 == ((void*)0))
  return ((void*)0);


 VAR_4->size = VAR_3;
 VAR_4->used = VAR_3;
 VAR_4->buf = VAR_2;
 VAR_4->flags |= VAR_0;

 return VAR_4;
}
