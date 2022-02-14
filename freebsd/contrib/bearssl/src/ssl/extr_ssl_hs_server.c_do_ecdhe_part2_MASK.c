
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int ecdhe_curve; TYPE_2__* iec; } ;
struct TYPE_8__ {int ecdhe_key_len; int ecdhe_key; TYPE_1__ eng; } ;
typedef TYPE_3__ br_ssl_server_context ;
struct TYPE_7__ {size_t (* xoff ) (int,size_t*) ;int (* mul ) (unsigned char*,size_t,int ,int ,int) ;} ;


 int FUNC_0 (TYPE_3__*,int,unsigned char*,size_t,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (unsigned char*,size_t,int ,int ,int) ;
 size_t FUNC_3 (int,size_t*) ;

__attribute__((used)) static void
FUNC_4(br_ssl_server_context *VAR_0, int VAR_1,
 unsigned char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 uint32_t VAR_5;
 size_t VAR_6, VAR_7;

 VAR_4 = VAR_0->eng.ecdhe_curve;




 VAR_5 = VAR_0->eng.iec->mul(VAR_2, VAR_3,
  VAR_0->ecdhe_key, VAR_0->ecdhe_key_len, VAR_4);
 VAR_6 = VAR_0->eng.iec->xoff(VAR_4, &VAR_7);
 FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_6, VAR_7, VAR_5);






 FUNC_1(VAR_0->ecdhe_key, 0, VAR_0->ecdhe_key_len);
}
