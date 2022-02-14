
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int br_x509_certificate ;
struct TYPE_5__ {int eng; } ;
typedef TYPE_1__ br_ssl_server_context ;
typedef int br_ec_private_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,size_t,int const*,int ,int ,int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;

void
FUNC_7(br_ssl_server_context *VAR_7,
 const br_x509_certificate *VAR_8, size_t VAR_9,
 const br_ec_private_key *VAR_10)
{
 static const uint16_t VAR_11[] = {
  128
 };




 FUNC_6(VAR_7);
 FUNC_4(&VAR_7->eng, VAR_2, VAR_2);




 FUNC_3(&VAR_7->eng, VAR_11,
  (sizeof VAR_11) / (sizeof VAR_11[0]));





 FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10,
  VAR_0, VAR_1, &VAR_3, 0);




 FUNC_1(&VAR_7->eng, VAR_4, &VAR_5);




 FUNC_2(&VAR_7->eng, &VAR_6);




 FUNC_0(&VAR_7->eng);
}
