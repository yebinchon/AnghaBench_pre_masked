
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_key_auth {int dummy; } ;
struct TYPE_2__ {struct request_key_auth* data; } ;
struct key {TYPE_1__ payload; } ;



__attribute__((used)) static int FUNC_0(struct key *VAR_0,
     const void *VAR_1,
     size_t VAR_2)
{
 VAR_0->payload.data = (struct request_key_auth *) VAR_1;
 return 0;
}
