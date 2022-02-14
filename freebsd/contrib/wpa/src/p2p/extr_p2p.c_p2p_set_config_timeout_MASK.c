
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct p2p_data {void* client_timeout; void* go_timeout; } ;



void FUNC_0(struct p2p_data *VAR_0, u8 VAR_1,
       u8 VAR_2)
{
 if (VAR_0) {
  VAR_0->go_timeout = VAR_1;
  VAR_0->client_timeout = VAR_2;
 }
}
