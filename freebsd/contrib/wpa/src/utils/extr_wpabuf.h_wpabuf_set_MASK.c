
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {size_t size; size_t used; int flags; int * buf; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct wpabuf *VAR_1, const void *VAR_2, size_t VAR_3)
{
 VAR_1->buf = (u8 *) VAR_2;
 VAR_1->flags = VAR_0;
 VAR_1->size = VAR_1->used = VAR_3;
}
