
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int rng; } ;
struct TYPE_4__ {TYPE_3__ eng; } ;
typedef TYPE_1__ br_ssl_server_context ;


 int FUNC_0 (int,unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;
 int FUNC_2 (TYPE_3__*,int,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,int ,size_t) ;

__attribute__((used)) static void
FUNC_4(br_ssl_server_context *VAR_0, int VAR_1,
 unsigned char *VAR_2, size_t VAR_3, uint32_t VAR_4)
{
 unsigned char VAR_5[80];

 if (VAR_3 > sizeof VAR_5) {
  VAR_3 = sizeof VAR_5;
  VAR_4 = 0;
 }






 FUNC_1(&VAR_0->eng.rng, VAR_5, VAR_3);
 FUNC_0(VAR_4 ^ 1, VAR_2, VAR_5, VAR_3);




 FUNC_2(&VAR_0->eng, VAR_1, VAR_2, VAR_3);





 FUNC_3(VAR_2, 0, VAR_3);
}
