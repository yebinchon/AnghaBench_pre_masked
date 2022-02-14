
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int const* new_peer_addr; int const* old_peer_addr; } ;
struct fst_session {TYPE_1__ data; } ;
typedef scalar_t__ Boolean ;



const u8 * FUNC_0(struct fst_session *VAR_0, Boolean VAR_1)
{
 return VAR_1 ? VAR_0->data.old_peer_addr : VAR_0->data.new_peer_addr;
}
