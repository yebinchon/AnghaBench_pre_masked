
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int br_x509_certificate ;
struct TYPE_5__ {int eng; } ;
typedef TYPE_1__ br_ssl_server_context ;
typedef int br_rsa_private_key ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,size_t,int const*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;

void
FUNC_7(br_ssl_server_context *VAR_6,
 const br_x509_certificate *VAR_7, size_t VAR_8,
 const br_rsa_private_key *VAR_9)
{
 static const uint16_t VAR_10[] = {
  128
 };




 FUNC_6(VAR_6);
 FUNC_4(&VAR_6->eng, VAR_1, VAR_1);




 FUNC_3(&VAR_6->eng, VAR_10,
  (sizeof VAR_10) / (sizeof VAR_10[0]));





 FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9,
  VAR_0, VAR_2, 0);




 FUNC_1(&VAR_6->eng, VAR_3, &VAR_4);




 FUNC_2(&VAR_6->eng, &VAR_5);




 FUNC_0(&VAR_6->eng);
}
