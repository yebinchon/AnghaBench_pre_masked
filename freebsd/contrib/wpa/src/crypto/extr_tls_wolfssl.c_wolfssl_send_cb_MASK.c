
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_out_data {int out_data; } ;
typedef int WOLFSSL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct wpabuf* FUNC_1 (char*,int) ;
 int FUNC_2 (int ,struct wpabuf*) ;

__attribute__((used)) static int FUNC_3(WOLFSSL *VAR_1, char *VAR_2, int VAR_3, void *VAR_4)
{
 struct wpabuf *VAR_5;
 struct tls_out_data *VAR_6 = VAR_4;

 if (!VAR_6)
  return -1;

 FUNC_0(VAR_0, "SSL: adding %d bytes", VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5)
  return -1;
 VAR_6->out_data = FUNC_2(VAR_6->out_data, VAR_5);
 if (!VAR_6->out_data)
  return -1;

 return VAR_3;
}
