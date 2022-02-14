
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int push_buf; } ;
typedef int ssize_t ;
typedef scalar_t__ gnutls_transport_ptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void const*,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(gnutls_transport_ptr_t VAR_2, const void *VAR_3,
        size_t VAR_4)
{
 struct tls_connection *VAR_5 = (struct tls_connection *) VAR_2;

 if (FUNC_1(&VAR_5->push_buf, VAR_4) < 0) {
  VAR_1 = VAR_0;
  return -1;
 }
 FUNC_0(VAR_5->push_buf, VAR_3, VAR_4);

 return VAR_4;
}
