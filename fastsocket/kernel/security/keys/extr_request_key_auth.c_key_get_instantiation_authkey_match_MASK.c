
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_key_auth {TYPE_2__* target_key; } ;
struct TYPE_3__ {struct request_key_auth* data; } ;
struct key {TYPE_1__ payload; } ;
typedef scalar_t__ key_serial_t ;
struct TYPE_4__ {scalar_t__ serial; } ;



__attribute__((used)) static int FUNC_0(const struct key *VAR_0,
            const void *VAR_1)
{
 struct request_key_auth *VAR_2 = VAR_0->payload.data;
 key_serial_t VAR_3 = (key_serial_t)(unsigned long) VAR_1;

 return VAR_2->target_key->serial == VAR_3;
}
