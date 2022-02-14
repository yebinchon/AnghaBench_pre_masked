
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {size_t size; size_t used; } ;



__attribute__((used)) static inline size_t FUNC_0(const struct wpabuf *VAR_0)
{
 return VAR_0->size - VAR_0->used;
}
