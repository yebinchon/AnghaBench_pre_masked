
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_connection {scalar_t__ server; scalar_t__ client; } ;


 struct wpabuf* FUNC_0 (scalar_t__,int ,int,int*) ;
 int FUNC_1 (scalar_t__,int ,int,int ,int ) ;
 struct wpabuf* FUNC_2 (int) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf const*) ;
 int FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int) ;
 int FUNC_8 (struct wpabuf*) ;

struct wpabuf * FUNC_9(void *VAR_0,
     struct tls_connection *VAR_1,
     const struct wpabuf *VAR_2,
     int *VAR_3)
{
 if (VAR_3)
  *VAR_3 = 0;
 return ((void*)0);
}
