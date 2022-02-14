
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_in_data {scalar_t__ consumed; struct wpabuf const* in_data; } ;



__attribute__((used)) static void FUNC_0(struct tls_in_data *VAR_0,
      const struct wpabuf *VAR_1)
{

 VAR_0->in_data = VAR_1;
 VAR_0->consumed = 0;
}
